#include "mainwindow.h"
#include "ui_mainwindow.h"

int correct = 0;
int incorrect = 0;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    int numb1 = qrand() % 100;
    int numb2 = qrand() % 100;
    ui->num1->setText(QString::number(numb1));
    ui->num2->setText(QString::number(numb2));



}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_go_pressed()
{
    int numb1 = (ui->num1->text()).toInt();
    int numb2 = (ui->num2->text().toInt());
    ui->num2->setText(QString::number(numb2));
    int awnser = numb1 + numb2;

        if (correct == int(100))
        {
            ui->count->setText(QString::number(correct)+"/"+QString::number(incorrect));
        }
        else {

            if (ui->awnserBox->text().toInt() == int(awnser))
                    {

                        ui->displayBar->setText("Correct");
                        correct++;
                         ui->count->setText(QString::number(correct)+"/"+QString::number(incorrect));
                    }


            else if (ui->awnserBox->text().toInt() != int(awnser))
                    {
                        ui->displayBar->setText("Incorrect");
                        incorrect++;
                         ui->count->setText(QString::number(correct)+"/"+QString::number(incorrect));
                    }

            }
        numb1 = qrand() % 100;
        numb2 = qrand() % 100;
        ui->num1->setText(QString::number(numb1));
        ui->num2->setText(QString::number(numb2));

}
