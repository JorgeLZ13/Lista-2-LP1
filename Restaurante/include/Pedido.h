#ifndef PEDIDO_H
#define PEDIDO_H
#include <string>


class Pedido
{
    public:
        Pedido();
        int getNumero();
        void setPedido (int, std::string, float);
        std::string getDescricao();
        float getPreco();

    private:
        int numero;
        std::string descricao;
        float preco;
};

#endif // PEDIDO_H
