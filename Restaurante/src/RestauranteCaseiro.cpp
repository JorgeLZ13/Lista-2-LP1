#include "RestauranteCaseiro.h"


RestauranteCaseiro::RestauranteCaseiro()
{
    //ctor
}

void RestauranteCaseiro::adicionaAoPedido(Pedido p, int m)
{
    mesa[m].adicionaAoPedido(p);
}

float RestauranteCaseiro::calculaTotalRestaurante()
{
    float total = 0;
    for(int i = 0; i<10; i++){
        total += mesa[i].calculaTotal();
    }
    return total;
}
