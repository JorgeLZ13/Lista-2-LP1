#include "Triangulo.h"
using namespace std;

Triangulo::Triangulo()
{
    //ctor
}

float Triangulo::calculaArea()
{
    return (base*altura)/2;
}


void Triangulo::setNome(string nome)
{
    this-> nome = nome;
}

string Triangulo::getNome()
{
    return nome;
}

void Triangulo::setAltura(float altura)
{
    this->altura = altura;
}

void Triangulo::setBase(float base)
{
    this-> base = base;
}

