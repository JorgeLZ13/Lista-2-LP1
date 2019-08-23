#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H
#include <string>

class FiguraGeometrica
{
    public:
        FiguraGeometrica();
        virtual float calculaArea() = 0;
        virtual std::string getNome() = 0;
        virtual void setNome(std::string)= 0;

    protected:
        std::string nome;
};

#endif // FIGURAGEOMETRICA_H
