#include "db_connect.h"
#include "mainwindow.h"
#include <QDebug>
#include <QtSql>

DB_Connect::DB_Connect()
{
    // CLASSE DE CONEXÃO COM O BANCO DE DADOS LOCAL
    // FAZ A CONEXÃO COM UM GERENCIADOR POSTGRESQL

    Database = QSqlDatabase::addDatabase("QPSQL");

    Database.setHostName("localhost");
    Database.setPort(5432);
    Database.setDatabaseName("Loja");
    Database.setUserName("postgres");
    Database.setPassword("root");

    if(Database.open())
    {
        qDebug() << "Conexão bem sucedida";
    }
    else
    {
        qDebug() << Database.lastError().text();
        qApp->quit();
    }
}
