#ifndef STARTUP_H
#define STARTUP_H

#include <QWidget>
#include "core.h"

namespace Ui {
    class StartUp;
}

class StartUp : public QWidget{
    Q_OBJECT

    public:
        explicit StartUp(QWidget *parent = 0);
        ~StartUp();

    private slots:
        void on_btnEnter_clicked();
        void on_btnRTruth_clicked();

    private:
        Ui::StartUp *ui;
        Core core;
};
#endif // STARTUP_H
