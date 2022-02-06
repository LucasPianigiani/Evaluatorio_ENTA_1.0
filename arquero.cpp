#include "arquero.h"

Arquero::Arquero()
{

}

Arquero::Arquero(int ID)
{
  switch(ID){
  case 1:
      nombre = "Lucas";
      break;
  case 2:
      nombre = "Damian";
      break;
  case 3:
      nombre = "Guadalupe";
      break;
  case 4:
      nombre = "Juan Pablo";
      break;
  case 5:
      nombre = "Tomas";
      break;
  case 6:
      nombre = "Paola";
      break;
  case 7:
      nombre = "Matias";
      break;
  case 8:
      nombre = "Octavio";
      break;
  }
}

 tuple<int, int, int> &Arquero::getPuntaje()
{
    return puntaje;
}

void Arquero::setPuntaje(int p1, int p2, int p3)
{
    get<0>(puntaje) = p1;
    get<1>(puntaje) = p2;
    get<2>(puntaje) = p3;
}

int Arquero::getCantX() const
{
    return cantX;
}

void Arquero::setCantX(int newCantX)
{
    cantX = newCantX;
}

int Arquero::getCant10() const
{
    return cant10;
}

void Arquero::setCant10(int newCant10)
{
    cant10 = newCant10;
}

const string &Arquero::getCategoria() const
{
    return categoria;
}

void Arquero::setCategoria(const string &newCategoria)
{
    categoria = newCategoria;
}

const string &Arquero::getNombre() const
{
    return nombre;
}

void Arquero::setNombre(const string &newNombre)
{
    nombre = newNombre;
}

bool Arquero::operator  < (Arquero a1)
{
    return (get<2>(this->getPuntaje()) < get<2>(a1.getPuntaje()));
}

 map<int, int> &Arquero::getRR()
{
    return RR;
}

void Arquero::setRR(const map<int, int> &newRR)
{
    RR = newRR;
}
