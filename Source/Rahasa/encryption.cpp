#include "encryption.h"
#include <QDebug>

Encryption::Encryption(){

}

QString Encryption ::generatePassword(int length){
    const QString charCollection("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789@#");

    QString randomString;
    for(int i=0; i<length; ++i){
       int index = qrand() % charCollection.length();
       QChar nextChar = charCollection.at(index);
       randomString.append(nextChar);
    }
    return randomString;
}

void Encryption::setPassword(QString password){
    this->password = password;
}
QString Encryption::getPassword(){
    return password;
}

int Encryption::isPrime(unsigned long long num){
    if(num%3==0)
        return num==3;
    unsigned long long p = 5;
    while(p*p <=num){
        if(num%p==0)
            return 0;
        p+=2;
        if(num%p==0)
            return 0;
        p+=4;
    }
    return 1;
}

unsigned long long Encryption::getRandomPrime(int lower, int upper){
    unsigned long long spread = upper - lower +1;
    while(1){
        unsigned long long p = 1| (rand() % spread + lower);
        if(isPrime(p))
            return p;
    }
}

void Encryption::generateKeys(int p1 =0,int p2=0){
    prime1 = p1;
    prime2 = p2;
    if(p1 == 0 && p2 == 0){
        prime1 = getRandomPrime(100000, 900000);
        prime2 = getRandomPrime(100000, 900000);

        if(prime1 < prime2)
            prime1 = getRandomPrime(100000, 900000);
    }
}

int Encryption::getPrime1(){
    return prime1;
}

int Encryption::getPrime2(){
    return prime2;
}

int Encryption::useEquation(int asciIndex){
    int eq = asciIndex + prime1 + prime2;
    return eq;
}

int Encryption::reverseEquation(int eq){
    int reverse = eq - (prime1 +prime2);
    return reverse;
}

QString Encryption::encrypt(QString text){
    QString enMessage = "";
    foreach(QChar s, text){
        int oriAscii = s.toLatin1();
        int eq = useEquation(oriAscii);

        enMessage+=eq;
    }
    return enMessage;
}

QString Encryption::decrypt(QString text){
    QString deMessage = "";
    foreach(QChar s, text){
        int oriAscii = s.toLatin1();
        int eq = reverseEquation(oriAscii);

        deMessage+=eq;
    }
    return deMessage;
}

int Encryption::getSysPrime1(){
    return systemPrime1;
}

int Encryption::getSysPrime2(){
    return systemPrime2;
}
