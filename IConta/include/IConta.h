#ifndef ICONTA_H
#define ICONTA_H
#include <string>
#include <iostream>

class IConta
{
    public:
        IConta();
        virtual void sacar(double valor) = 0;
        virtual void depositar(double valor) = 0;

    protected:
};

#endif // ICONTA_H
