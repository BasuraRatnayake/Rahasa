#include "startup.h"
#include "ui_startup.h"
#include "QDebug"
#include "encryptform.h"
#include "decryptform.h"

StartUp::StartUp(QWidget *parent) : QWidget(parent), ui(new Ui::StartUp) {
    ui->setupUi(this);
}

StartUp::~StartUp() {
    delete ui;
}

void StartUp::on_btnEnter_clicked(){
    core.showForm(new EncryptForm(), this);
}

void StartUp::on_btnRTruth_clicked(){
    core.showForm(new DecryptForm(), this);
}
