#ifndef GESTORARCHIVO_H
#define GESTORARCHIVO_H
#include "arquero.h"
#include <fstream>
#include <vector>
class gestorArchivo
{
public:
    gestorArchivo();
    vector<Arquero> * leerArchivo(string pRuta);
    void escribirArchivo(vector<Arquero> * pArqueros);
    void setCantArqueros(int pCantArqueros);


private:
    vector<Arquero>  arqueros;

};

#endif // GESTORARCHIVO_H
