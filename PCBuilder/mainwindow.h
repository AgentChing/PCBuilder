#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFile>
#include <QFileDialog>
#include <QMessageBox>
#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void setvalues();
    void features();
    void displayprocessors();
    void displayram();
    void displaygraphics();
    void displaystorage();
    void displaymother();
    void displaypower();
    QString S="";
    QString S2="";
    QString perks="";

private slots:
    void on_bPakage1_clicked();

    void on_bBuild_clicked();

    void on_bPakage2_clicked();

    void on_bPakage3_clicked();

    void on_bPakage4_clicked();

    void on_bPakage5_clicked();

    void on_bPakage6_clicked();

    void on_bDetailprocessor_clicked();

    void on_bDetailgraphics_clicked();

    void on_bDetailram_clicked();

    void on_bDetailstore_clicked();

    void on_bDetailmother_clicked();

    void on_bDetailpower_clicked();

    void on_bDetailram_2_clicked();

private:
    Ui::MainWindow *ui;

};
#endif // MAINWINDOW_H
