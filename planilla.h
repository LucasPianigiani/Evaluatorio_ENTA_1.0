#ifndef PLANILLA_H
#define PLANILLA_H
#include "arquero.h"
#include "gestorarchivo.h"
#include <vector>
using namespace std;
class Planilla
{
public:
    Planilla();
    Planilla(int CantArqueros);
    void cargarArqueros();
    void ordenarPuntajes();
    void PuntosAdicionales();
    void RondasRobin();
private:
    vector <Arquero> arqueros;
    gestorArchivo gda;
    int cantArqueros = 8;


};






#endif // PLANILLA_H
