/*###################################################################
 *#                                                                 #
 *#  PROGRAMA INTEIRAMENTE PROJETADO E DESENVOLVIDO PELO GRADUANDO  #
 *#   LEONARDO EMILY DIAS SANTOS BIDÓ, MATRICULADO NA PONTIFÍCIA    #
 *#     UNIVERSIDADE CATÓLICA DE GOIÁS - 8º PERÍODO DO CURSO DE     #
 *#             CIÊNCIA DA COMPUTAÇÃO - BACHARELADO                 #
 *#                                                                 #
 *###################################################################
*/

#include "mainwindow.h"
#include "db_connect.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MainWindow w;
    w.show();

    return a.exec();
}
