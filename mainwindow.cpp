#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->startButton->setCheckable(true);  // available toggle

    timer = new QTimer(this);  // allocation timer
    connect(timer, SIGNAL(timeout()), this, SLOT(showTime()));  // connect timer with showTime()
}

void MainWindow::showTime()
{
    QTime nowTime = QTime::fromString(ui->DigitalClock->text(), "hh : mm : ss");
    QTime nextTime = nowTime.addSecs(-1);

    if (nowTime.toString() == "00:00:00")
    {
        nextTime = QTime(0, 0, 0);
    }
    ui->DigitalClock->setText(nextTime.toString("hh : mm : ss"));
}

// initialize time when start button clicked
void MainWindow::initTime()
{
    QString hour = makeRegular(ui->limitHour->text());
    QString min = makeRegular(ui->limitMinute->text());
    QString sec = makeRegular(ui->limitSecond->text());

    QTime firstTime = QTime::fromString(hour + min + sec, "hhmmss");

    ui->limitHour->setReadOnly(true);
    ui->limitMinute->setReadOnly(true);
    ui->limitSecond->setReadOnly(true);

    startTime(firstTime);
}

// start timer
void MainWindow::startTime(QTime t)
{
    ui->DigitalClock->setText(t.toString("hh : mm : ss"));
    timer->start(1000);
}

// 1:5:3 => 01:05:03
QString MainWindow::makeRegular(QString t)
{
    if (t.length() < 2)
    {
        return t = "0" + t;
    }
    else
    {
        return t;
    }
}

void MainWindow::on_startButton_clicked()
{
    if (starter)
    {
        this->initTime();
        starter = false;
    }
}

void MainWindow::on_startButton_toggled(bool checked)
{
    if (!checked)
    {
        ui->startButton->setText("Resume");
        timer->stop();
    }
    else if (checked)
    {
        ui->startButton->setText("Pause");
        timer->start(1000);
    }
}

void MainWindow::on_close_clicked()
{
    this->close();
}

void MainWindow::on_stopButton_clicked()
{
    ui->limitHour->setText("00");
    ui->limitHour->setReadOnly(false);

    ui->limitMinute->setText("00");
    ui->limitMinute->setReadOnly(false);

    ui->limitSecond->setText("00");
    ui->limitSecond->setReadOnly(false);

    ui->startButton->setText("Start");

    ui->DigitalClock->setText("00 : 00 : 00");

    starter = true;
}

MainWindow::~MainWindow()
{
    delete ui;
}
