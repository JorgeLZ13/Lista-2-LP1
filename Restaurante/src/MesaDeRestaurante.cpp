#include "MesaDeRestaurante.h"


MesaDeRestaurante::MesaDeRestaurante()
{
    //ctor
}

void MesaDeRestaurante::adicionaAoPedido(Pedido p)
{
    for(int i=0; i<10; i++){
        if(pedido[i].getNumero() == 0){
            pedido[i] = p;
            break;
        }
    }
}


void MesaDeRestaurante::zerarPedidos()
{
    for (int i =0; i< 10 ; i++){
        pedido[i].setPedido(0, " ", 0);
    }
}

float MesaDeRestaurante::calculaTotal()
{
    float total = 0;

    for (int i =0; i<10; i++){
        total =total + (pedido[i].getPreco()*pedido[i].getNumero()) ;
    }
    return total;
}



