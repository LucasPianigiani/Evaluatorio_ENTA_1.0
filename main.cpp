#include <QApplication>
#include "gestorarchivo.h"
#include "arquero.h"
#include "planilla.h"
int main(int argc, char *argv[])
{
   QApplication a(argc, argv);

   int cantidad = 0 ;
   cout <<"Prueba 1.2"<< endl;
   cout << "Ingrese la cantidad de arqueros inscriptos"<<endl;
   cin >> cantidad;
    Planilla planilla(cantidad);
    planilla.cargarArqueros();
    planilla.PuntosAdicionales();
    planilla.ordenarPuntajes();


    return a.exec();
}
