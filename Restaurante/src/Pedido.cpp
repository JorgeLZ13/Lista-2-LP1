#include "Pedido.h"

Pedido::Pedido()
{
    numero = 0;
    preco = 0;
}

int Pedido::getNumero()
{
    return numero;
}
void Pedido::setPedido(int n, std::string d, float p)
{
    numero = n;
    descricao = d;
    preco = p;
}
std::string Pedido::getDescricao()
{
        return descricao;
}

float Pedido::getPreco()
{
    return preco;
}

