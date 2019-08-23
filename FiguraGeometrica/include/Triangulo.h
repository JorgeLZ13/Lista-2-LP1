#ifndef TRIANGULO_H
#define TRIANGULO_H
#include "FiguraGeometrica.h"


class Triangulo: public FiguraGeometrica
{
    public:
        Triangulo();
        float calculaArea();
        void setNome(std::string nome);
        std::string getNome();
        void setAltura(float);
        void setBase(float);

    private:
        float base;
        float altura;
};

#endif // TRIANGULO_H
