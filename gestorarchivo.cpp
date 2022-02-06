#include "gestorarchivo.h"

gestorArchivo::gestorArchivo()
{

}

vector<Arquero> *gestorArchivo::leerArchivo(string pRuta)
{
    ifstream lectura(pRuta, ios::binary);
    string aux, encabezado,fecha, hora;
    int puntaje, ID,RRpuntos;
    Arquero *arq;




    if(lectura.is_open()){
        cout<<"Se abrio bien el archivo" <<endl;

        while (getline(lectura,aux))
        {
            lectura >> fecha >> hora;
            cout << "fecha: " << fecha << endl;
            cout << "hora: " << hora << endl;

            lectura >> ID;
            cout << "nombre: " << ID << endl;
            arq = new Arquero(ID);

            lectura >>puntaje;
            arq->setPuntaje(puntaje,0,puntaje);

            for(int a = 0; a<(int) arqueros.size() * 2 - 1 ; a++)
            {
                lectura >>RRpuntos;
                arq->getRR()[RRpuntos] = 0;
            }
            arqueros.push_back(*arq);
        }
        lectura.close();
        delete (arq);

    }
    else
        cout<<"No se abrio" <<endl;

    return &arqueros;
}

void gestorArchivo::escribirArchivo(vector<Arquero> *pArqueros)
{

    ofstream escritura("../PuntajesOrdenados.txt");
    if(escritura.is_open()){
        cout << "Se creo el archivo de escritura" << endl;
        escritura << "Nombre"
                  <<"\t\t"
                  << "Puntaje"
                  <<"\t\t"
                  << "Plus-Qualify"
                  <<"\n";

        for(int a = pArqueros->size() - 1; a > -1 ;a --)
        {
            escritura << (*pArqueros)[a].getNombre();

            if((*pArqueros)[a].getNombre().length() > 7)
                escritura << "\t";
            else
                escritura <<"\t\t";

            escritura << get<2>((*pArqueros)[a].getPuntaje())
                      << "\t\t";
            escritura << get<1>((*pArqueros)[a].getPuntaje())
                      << "\n";
        }

        escritura.close();

    }
    else
        cout << "Noup" << endl;

}

void gestorArchivo::setCantArqueros(int pCantArqueros)
{
    arqueros.resize(pCantArqueros);
}

