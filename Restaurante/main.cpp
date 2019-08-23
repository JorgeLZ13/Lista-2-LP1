#include <iostream>
#include "Pedido.h"
#include "MesaDeRestaurante.h"
#include "RestauranteCaseiro.h"

using namespace std;

int main()
{
    RestauranteCaseiro m1;
    Pedido p1;

    p1.setPedido(1,"Refri", 6.99);
    m1.adicionaAoPedido(p1, 0);
    p1.setPedido(1,"Batata Frita", 3);
    m1.adicionaAoPedido(p1, 0);
    p1.setPedido(2, "Hamburguer", 7.50);
    m1.adicionaAoPedido(p1,0);


    cout <<"Preco Total = R$ " << m1.calculaTotalRestaurante() << endl;



    return 0;
}
