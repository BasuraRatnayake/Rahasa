#ifndef ENCRYPTION_H
#define ENCRYPTION_H
#include <QString>
#include <qmath.h>

class Encryption{
    public:
        Encryption();
        QString generatePassword(int);
        void setPassword(QString);
        QString getPassword();
        QString encrypt(QString);
        QString decrypt(QString);
        void generateKeys(int, int);
        int getPrime1();
        int getPrime2();
        int getSysPrime1();
        int getSysPrime2();

    private:
        QString password;
        int isPrime(unsigned long long);
        unsigned long long getRandomPrime(int, int);
        int prime1;
        int prime2;
        int useEquation(int);
        int reverseEquation(int);
        const int systemPrime1 = 199102;
        const int systemPrime2 = 123075;
};
#endif // ENCRYPTION_H
