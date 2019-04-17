#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "db_connect.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

/*
 *  FUNÇÃO QUE FECHA A JANELA PRINCIPAL
*/
void MainWindow::on_pushButton_Close_clicked()
{
    close();
}

/*
 *  VALIDA PRIMEIRAMENTE SE O BANCO DE DADOS FOI ABERTO
 *  FEITO ISSO, A FUNÇÃO DE LISTAR IMPRIME EM TELA A TABELA
 *  DE TODOS OS PRODUTOS CADASTRADOS NO DATABASE.
*/
void MainWindow::on_pushButton_List_clicked()
{
    QSqlQueryModel* model = new QSqlQueryModel(this);
    model->setQuery("SELECT * FROM produto");

    ui->tableView->setModel(model);
    ui->tableView->setColumnWidth(0, 207);
    ui->tableView->setColumnWidth(1, 206);
    ui->tableView->setColumnWidth(2, 206);

    if(model->lastError().text() != " ")
    {
        QMessageBox::critical(this, "Error", model->lastError().text(), QMessageBox::Ok);
        qDebug() << model->lastError().text();
    }
}

/*
 *  FUNÇÃO QUE CHAMA A CLASSE DE CONEXÃO COM O BANCO DE DADOS
 *  RETORNA ERRO DE CONEXÃO CASO NÃO SEJA POSSÍVEL ESTABELECER A CONEXÃO
*/
void MainWindow::on_pushButton_Connect_clicked()
{
    DB_Connect();
    ui->label_dbStatus->setText(" [+] Database connected ");
    ui->label_dbStatus->setStyleSheet("background-color: green; color: white;");
}

/*
 *  FUNÇÃO PARA LIMPAR OS CAMPOS INSERIDOS NAS LINE EDITS E TABLEVIEW
*/
void MainWindow::on_pushButton_Clear_clicked()
{
    QSqlQueryModel* model = new QSqlQueryModel(this);
    model->clear();
    ui->tableView->setModel(model);
    ui->lineEdit_Name->clear();
    ui->lineEdit_Preco->clear();
    ui->lineEdit_Code->clear();
}

/*
 *  VALIDA PRIMEIRAMENTE SE O BANCO DE DADOS FOI ABERTO
 *  A FUNÇÃO RECEBE OS DADOS DAS LINE EDITS E OS ARMAZENA EM VARIÁVEIS
 *  PARA QUE POSSA SER ENVIADA COMO PARÂMETROS NO BANCO DE DADOS.
 *  FEITO ISSO O COMANDO É EXECUTADO E OS DADOS SÃO INSERIDOS NO DATABASE
*/
void MainWindow::on_pushButton_Insert_clicked()
{
    QString Name;
    QString Preco;
    QString Code;

    Name = ui->lineEdit_Name->text();
    Preco = ui->lineEdit_Preco->text();
    Code = ui->lineEdit_Code->text();

    QSqlQuery query;

    if(query.exec("INSERT INTO produto VALUES ("+Code+", '"+Name+"', "+Preco+")"))
    {
        QMessageBox::warning(this, "Insert", "Inserção realizada com sucesso!", QMessageBox::Ok);
        qDebug() << "Inserção realizada com sucesso!";
    }
    else
    {
        QMessageBox::critical(this, "Error", query.lastError().text(), QMessageBox::Ok);
        qDebug() << query.lastError().text();
    }
}

/*
 *  VALIDA PRIMEIRAMENTE SE O BANCO DE DADOS FOI ABERTO
 *  APÓS VALIDADO, O USUÁRIO PODE INFORMAR QUAL PRODUTO DESEJA REMOVER
 *  PASSANDO POR REFERÊNCIA O CÓDIGO DO PRODUTO
*/
void MainWindow::on_pushButton_Remove_clicked()
{
    QString Code;

    Code = ui->lineEdit_Code->text();

    QSqlQuery query;

    if( query.exec("DELETE FROM produto WHERE codigo_produto = "+Code+""))
    {
        QMessageBox::warning(this, "Remove", "Remoção realizada com sucesso!", QMessageBox::Ok);
        qDebug() << "Remoção realizada com sucesso!";
        qDebug() << query.lastError().text();
    }
    else
    {
        QMessageBox::critical(this, "Error", query.lastError().text(), QMessageBox::Ok);
        qDebug() << query.lastError().text();
    }
}

/*
 *  FUNÇÃO QUE FECHA A JANELA PRINCIPAL
*/
void MainWindow::on_actionE_xit_triggered()
{
    close();
}

