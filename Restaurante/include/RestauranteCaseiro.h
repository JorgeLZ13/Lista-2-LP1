#ifndef RESTAURANTECASEIRO_H
#define RESTAURANTECASEIRO_H
#include "MesaDeRestaurante.h"

class RestauranteCaseiro
{
    public:
        RestauranteCaseiro();
        void adicionaAoPedido(Pedido, int);
        float calculaTotalRestaurante();
        void print(int);

    private:
        MesaDeRestaurante mesa[10];
};

#endif // RESTAURANTECASEIRO_H
