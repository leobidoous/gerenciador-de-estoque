#ifndef DB_CONNECT_H
#define DB_CONNECT_H

#include <QMainWindow>
#include <QObject>
#include <QWidget>
#include <QDebug>
#include <QtSql>
#include <QMessageBox>

class DB_Connect
{
public:
    DB_Connect();

private:
    QSqlDatabase Database;
};

#endif // DB_CONNECT_H
