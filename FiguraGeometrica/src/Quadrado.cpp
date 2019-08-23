#include "Quadrado.h"
using namespace std;

Quadrado::Quadrado()
{
    //ctor
}

float Quadrado::calculaArea()
{
    return base*altura;
}

string Quadrado::getNome()
{
    return nome;
}

void Quadrado::setNome(string nome)
{
    this -> nome = nome;
}

void Quadrado::setAltura(float altura)
{
    this-> altura = altura;
}

void Quadrado::setBase(float base)
{
    this -> base = base;
}
