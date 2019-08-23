#ifndef QUADRADO_H
#define QUADRADO_H
#include "FiguraGeometrica.h"

class Quadrado: public FiguraGeometrica
{
    public:
        Quadrado();
        float calculaArea();
        std::string getNome();
        void setNome(std::string);
        void setAltura(float altura);
        void setBase(float base);

    private:
        float base;
        float altura;
};

#endif // QUADRADO_H
