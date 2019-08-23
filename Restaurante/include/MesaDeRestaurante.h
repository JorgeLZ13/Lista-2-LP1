#ifndef MESADERESTAURANTE_H
#define MESADERESTAURANTE_H
#include "Pedido.h"
#include <iostream>

class MesaDeRestaurante
{
    public:
        MesaDeRestaurante();
        void adicionaAoPedido(Pedido);
        void zerarPedidos();
        float calculaTotal();

    private:
        Pedido pedido[10];
};

#endif // MESADERESTAURANTE_H
