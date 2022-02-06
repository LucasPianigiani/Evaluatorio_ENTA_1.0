#ifndef ARQUERO_H
#define ARQUERO_H

#include<iostream>
#include<tuple>
#include<vector>
#include<map>
using namespace std;
class Arquero
{
public:
    Arquero();
    Arquero(int ID);

    tuple<int, int, int> &getPuntaje();
    void setPuntaje(int p1,int p2, int p3);

    int getCantX() const;
    void setCantX(int newCantX);

    int getCant10() const;
    void setCant10(int newCant10);

    const string &getCategoria() const;
    void setCategoria(const string &newCategoria);

    const string &getNombre() const;
    void setNombre(const string &newNombre);

    bool operator <(Arquero a1);

//    void setRoundRobin(int ronda, int puntaje);
//    vector<int> getRoundRobin();


    map<int, int> &getRR();
    void setRR(const map<int, int> &newRR);

private:
    string nombre;
    string categoria;
    int cantX,cant10;
    tuple<int,int,int> puntaje;
    map<int,int> RR;


};

#endif // ARQUERO_H
