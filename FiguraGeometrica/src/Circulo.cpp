#include "Circulo.h"
using namespace std;

Circulo::Circulo()
{
    //ctor
}
float Circulo::calculaArea()
{
    return (3.14*(raio*raio));
}

string Circulo::getNome()
{
    return nome;
}

void Circulo::setNome(string nome)
{
    this -> nome = nome;
}
void Circulo::setRaio(float raio)
{
    this -> raio = raio;
}
