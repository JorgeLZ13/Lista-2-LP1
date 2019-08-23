#include <iostream>
#include "IConta.h"
#include "Conta.h"
#include "ContaEspecial.h"

using namespace std;

int main()
{
    Conta julia("Julian", 100000, 1231, 22000);

    ContaEspecial jorge;
    jorge.setNomeCliente("Jorge");
    jorge.setNumeroConta(1232);
    jorge.setSalarioMensal(15000);
    jorge.setSaldo(20000);
    jorge.definirLimite();

    julia.sacar(1300);
    cout << "Nome do cliente: " << julia.getNomeCliente() << endl;
    cout << "Salario mesal: R$ "<< julia.getSalarioMensal() << endl;
    cout << "Saldo atual: R$ "<< julia.getSaldo() << endl;
    julia.depositar(3000);
    julia.definirLimite();
    cout << "Saldo atual: R$ "<< julia.getSaldo() << endl;
    cout << "Limite: R$" << julia.getLimite() << endl << endl;

    cout << "Nome do cliente: " << jorge.getNomeCliente() << endl;
    cout << "Salario mesal: R$ "<< jorge.getSalarioMensal() << endl;
    cout << "Saldo atual: R$ "<< jorge.getSaldo() << endl;
    jorge.sacar(12000);
    cout << "Saldo atual: R$ "<< jorge.getSaldo() << endl;
    jorge.depositar(2000);
    cout << "Saldo atual: R$ "<< jorge.getSaldo() << endl;
    cout << "Limite: R$" << jorge.getLimite() << endl << endl;

    return 0;
}
