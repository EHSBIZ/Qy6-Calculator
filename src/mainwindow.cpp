#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <math.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_btn_0_clicked()
{
    QPushButton *button = (QPushButton*)sender();

    if (typingSecondNumber) {
        ui->display->setText(button->text());
        typingSecondNumber = false;
    }

    else {
        if (ui->display->text() == "0") {
            ui->display->setText(button->text());
        }

        else {
            ui->display->setText(ui->display->text() + button->text());
        }
    }
}

void MainWindow::on_btn_1_clicked()
{
    QPushButton *button = (QPushButton*)sender();

    if (typingSecondNumber) {
        ui->display->setText(button->text());
        typingSecondNumber = false;
    }

    else {
        if (ui->display->text() == "0") {
            ui->display->setText(button->text());
        }

        else {
            ui->display->setText(ui->display->text() + button->text());
        }
    }
}

void MainWindow::on_btn_2_clicked()
{
    QPushButton *button = (QPushButton*)sender();

    if (typingSecondNumber) {
        ui->display->setText(button->text());
        typingSecondNumber = false;
    }

    else {
        if (ui->display->text() == "0") {
            ui->display->setText(button->text());
        }

        else {
            ui->display->setText(ui->display->text() + button->text());
        }
    }
}

void MainWindow::on_btn_3_clicked()
{
    QPushButton *button = (QPushButton*)sender();

    if (typingSecondNumber) {
        ui->display->setText(button->text());
        typingSecondNumber = false;
    }

    else {
        if (ui->display->text() == "0") {
            ui->display->setText(button->text());
        }

        else {
            ui->display->setText(ui->display->text() + button->text());
        }
    }
}

void MainWindow::on_btn_4_clicked()
{
    QPushButton *button = (QPushButton*)sender();

    if (typingSecondNumber) {
        ui->display->setText(button->text());
        typingSecondNumber = false;
    }

    else {
        if (ui->display->text() == "0") {
            ui->display->setText(button->text());
        }

        else {
            ui->display->setText(ui->display->text() + button->text());
        }
    }
}

void MainWindow::on_btn_5_clicked()
{
    QPushButton *button = (QPushButton*)sender();

    if (typingSecondNumber) {
        ui->display->setText(button->text());
        typingSecondNumber = false;
    }

    else {
        if (ui->display->text() == "0") {
            ui->display->setText(button->text());
        }

        else {
            ui->display->setText(ui->display->text() + button->text());
        }
    }
}


void MainWindow::on_btn_6_clicked()
{
    QPushButton *button = (QPushButton*)sender();

    if (typingSecondNumber) {
        ui->display->setText(button->text());
        typingSecondNumber = false;
    }

    else {
        if (ui->display->text() == "0") {
            ui->display->setText(button->text());
        }

        else {
            ui->display->setText(ui->display->text() + button->text());
        }
    }
}

void MainWindow::on_btn_7_clicked()
{
    QPushButton *button = (QPushButton*)sender();

    if (typingSecondNumber) {
        ui->display->setText(button->text());
        typingSecondNumber = false;
    }

    else {
        if (ui->display->text() == "0") {
            ui->display->setText(button->text());
        }

        else {
            ui->display->setText(ui->display->text() + button->text());
        }
    }
}

void MainWindow::on_btn_8_clicked()
{
    QPushButton *button = (QPushButton*)sender();

    if (typingSecondNumber) {
        ui->display->setText(button->text());
        typingSecondNumber = false;
    }

    else {
        if (ui->display->text() == "0") {
            ui->display->setText(button->text());
        }

        else {
            ui->display->setText(ui->display->text() + button->text());
        }
    }
}

void MainWindow::on_btn_9_clicked()
{
    QPushButton *button = (QPushButton*)sender();

    if (typingSecondNumber) {
        ui->display->setText(button->text());
        typingSecondNumber = false;
    }

    else {
        if (ui->display->text() == "0") {
            ui->display->setText(button->text());
        }

        else {
            ui->display->setText(ui->display->text() + button->text());
        }
    }
}

void MainWindow::on_btn_clear_clicked()
{
    ui->display->setText("0");
    firstNum = 0;
}

void MainWindow::on_btn_pi_clicked()
{
    ui->display->setText("3.14159265");
}

void MainWindow::on_btn_add_clicked()
{
    firstNum = ui->display->text().toDouble();
    pendingOp = "+";
    typingSecondNumber = true;
}


void MainWindow::on_btn_sub_clicked()
{
    firstNum = ui->display->text().toDouble();
    pendingOp = "-";
    typingSecondNumber = true;
}


void MainWindow::on_btn_mul_clicked()
{
    firstNum = ui->display->text().toDouble();
    pendingOp = "×";
    typingSecondNumber = true;
}


void MainWindow::on_btn_equal_clicked()
{
    double secondNum = ui->display->text().toDouble();
    double result = 0;

    if (pendingOp == "+")
        result = firstNum + secondNum;
    else if (pendingOp == "-")
        result = firstNum - secondNum;
    else if (pendingOp == "×")
        result = firstNum * secondNum;
    else if (pendingOp == "÷")
    {
        if (secondNum != 0)
                result = firstNum / secondNum;
        else
        {
            ui->display->setText("Error");
            return;
        }
    }

    ui->display->setText(QString::number(result, 'g', 15));
    typingSecondNumber = true;
}


void MainWindow::on_btn_div_clicked()
{
    firstNum = ui->display->text().toDouble();
    pendingOp = "÷";
    typingSecondNumber = true;
}


void MainWindow::on_btn_sqrt_clicked()
{
    double val = ui->display->text().toDouble();
    if (val >= 0) {
        ui->display->setText(QString::number(sqrt(val), 'g', 15));
    }
    else
        ui->display->setText("Error");
}


void MainWindow::on_btn_pow_clicked()
{
    double val = ui->display->text().toDouble();
    ui->display->setText(QString::number(val * val, 'g', 15));
}


void MainWindow::on_btn_dot_clicked()
{
    if(!ui->display->text().contains('.')) {
        ui->display->setText(ui->display->text() + ".");
    }
}

