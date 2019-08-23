#include "Conta.h"

using namespace std;

Conta::Conta()
{
    //ctor
}

Conta::Conta(std::string nomeCliente, double salarioMensal, int numeroConta, double saldo)
{
        this->nomeCliente = nomeCliente;
        this ->salarioMensal = salarioMensal;
        this->numeroConta = numeroConta;
        this->saldo = saldo;
}

void Conta::sacar(double valor)
{
        if((saldo - valor) > 0)
        {
            saldo -= valor;
            cout << "Saque realizado com sucesso" << endl;
        }else{
            cout << "Saldo insuficiente" << endl;
        }
}

void Conta::depositar(double valor)
{
        if(valor >0)
        {
            saldo += valor;
            cout << "Deposito realizado com sucesso" << endl;
        }
}

void Conta::definirLimite()
{
        limite = 2*salarioMensal;
}

void Conta::setNomeCliente(std::string nomeCliente)
{
        this-> nomeCliente = nomeCliente;
}

void Conta::setSalarioMensal(double salarioMensal)
{
    this->salarioMensal = salarioMensal;
}

void Conta::setNumeroConta(int numeroConta)
{
    this-> numeroConta = numeroConta;
}

void Conta::setSaldo(double saldo)
{
    this-> saldo = saldo;
}

string Conta::getNomeCliente()
{
        return nomeCliente;
}

double Conta::getSalarioMensal()
{
        return salarioMensal;
}

int Conta::getNumeroConta()
{
        return numeroConta;
}

double Conta::getSaldo()
{
        return saldo;
}

double Conta::getLimite()
{
        return limite;
}
