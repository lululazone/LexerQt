#include "mainwindow.h"
#include "animalfsm.h"
#include "animallexer.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , m_lexer(new AnimalLexer(new AnimalFsm()))
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete m_lexer;
}


void MainWindow::on_btnSend_clicked()
{
    m_lexer->setPrompt(ui->linePrompt->text());
    m_lexer->compute();
    ui->animalOutput->setText(m_lexer->getAnimal());
    ui->determinantOutput->setText(m_lexer->getDeterminant());
    ui->pronounOutput->setText(m_lexer->getPronoun());
    ui->verbOutput->setText(m_lexer->getVerb());

}
