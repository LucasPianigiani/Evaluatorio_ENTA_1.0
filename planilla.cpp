#include "planilla.h"
#include <algorithm>

Planilla::Planilla()
{

}

Planilla::Planilla(int CantArqueros)
{
   gda.setCantArqueros(CantArqueros);
}

void Planilla::cargarArqueros()
{
    arqueros = *gda.leerArchivo("Prueba_1.txt");
    sort(arqueros.begin(), arqueros.end());

    for(int a = arqueros.size() - 1 ; a > -1  ;a --)
    {
        cout << arqueros[a].getNombre()<<endl;
        cout << get<2>(arqueros[a].getPuntaje()) << endl;
    }

}

void Planilla::ordenarPuntajes()
{
    gda.escribirArchivo(&arqueros);
}

void Planilla::PuntosAdicionales()
{
    for( auto &arquero : arqueros)
    {
       if(get<2>(arquero.getPuntaje()) >= 640)
       {
           get<1>(arquero.getPuntaje()) = 3;
       }
       else if(get<2>(arquero.getPuntaje()) >= 630)
       {
           get<1>(arquero.getPuntaje()) = 2;
       }
       else if(get<2>(arquero.getPuntaje()) >= 620)
      {
          get<1>(arquero.getPuntaje()) = 1;
      }
    }
}

void Planilla::RondasRobin()
{
    for(int a = 1; a<(int)arqueros.size();a++)
    {
//       partido(arquero[0],arquero[a]);



    }




}
