#ifndef CONTA_H
#define CONTA_H
#include "IConta.h"

class Conta: public IConta
{
    public:
        Conta();
        Conta(std::string nomeCliente, double salarioMensal, int numeroConta, double saldo);
        void sacar(double valor);
        void depositar(double valor);
        void definirLimite();
        void setNomeCliente(std::string nomeCliente);
        void setSalarioMensal(double salarioMensal);
        void setNumeroConta(int numeroConta);
        void setSaldo(double saldo);
        std::string getNomeCliente();
        double getSalarioMensal();
        int getNumeroConta();
        double getSaldo();
        double getLimite();


    protected:
        std::string nomeCliente;
         double salarioMensal;
         int numeroConta;
         double saldo;
         double limite;

};

#endif // CONTA_H
