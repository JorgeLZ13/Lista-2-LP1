#include <iostream>
#include "FiguraGeometrica.h"
#include "Triangulo.h"
#include "Quadrado.h"
#include "Circulo.h"

using namespace std;

int main()
{
    Circulo *fig1 = new Circulo();
    Triangulo *fig2 = new Triangulo();
    Quadrado *fig3 = new Quadrado();

    fig2->setNome("Triangulo");
    fig2->setAltura(10);
    fig2->setBase(10);

    fig3->setNome("Quadrado");
    fig3->setAltura(10);
    fig3->setBase(10);

    fig1->setNome("Circulo");
    fig1->setRaio(10);

    //cout <<"Area do " <<fig[0]->getNome() << " = " << fig[0] ->calculaArea(10, 10) << endl;
    //cout <<"Area do " <<fig[1]->getNome() << " = " << fig[1] ->calculaArea(10, 10) << endl;
    cout <<"Area do " <<fig1->getNome() << " = " << fig1->calculaArea() << endl;
    cout <<"Area do " <<fig2->getNome() << " = " << fig2->calculaArea() << endl;
    cout <<"Area do " <<fig3->getNome() << " = " << fig3->calculaArea() << endl;


    return 0;
}
