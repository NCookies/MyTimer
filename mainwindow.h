#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include <QTimer>
#include <QDateTime>

#include <QKeyEvent>

#include <QtMultimedia/QMediaPlayer>
#include <QMediaPlaylist>
#include <QSound>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void showTime();
    void initTime();
    void startTime(QTime t);
    QString makeRegular(QString t);

    void on_startButton_clicked();
    void on_startButton_toggled(bool checked);
    void on_close_clicked();
    void on_stopButton_clicked();
    void resetTimerHelper();

    void keyPressEvent(QKeyEvent *event);

private:
    Ui::MainWindow *ui;
    QTimer *timer;
    bool starter = true;
};

#endif // MAINWINDOW_H
