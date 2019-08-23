#include <iostream>
#include "SistemaGerenciaFolha.h"
#include "Funcionario.h"

using namespace std;

int main(){

    SistemaGerenciaFolha sgf = SistemaGerenciaFolha();

    Funcionario *assl = new Assalariado();
    Funcionario *com = new Comissionado();
    Funcionario *hor = new Horista();

    assl->setNome("Jorge");
    assl->setMatricula(32);
    ((Assalariado *)assl)->setSalario(3500);

    hor->setNome("Matheus");
    hor->setMatricula(12);
    ((Horista *)hor)->setSalarioPorHora(20);
    ((Horista *)hor)->setHorasTrabalhadas(55);

    com->setNome("Joao");
    com->setMatricula(22);
    ((Comissionado *)com)->setSalarioBase(877);
    ((Comissionado *)com)->setVendasSemanais(200);
    ((Comissionado *)com)->setPercentualComissao(20);

    sgf.setFuncionario(assl);
    sgf.setFuncionario(com);
    sgf.setFuncionario(hor);

    cout << assl->toString();
    cout << com->toString();
    cout << hor->toString() << endl;

    cout << "Pagamento total da folha: " << sgf.calculaValorTotalFolha() << endl;
    cout << "Salario funcionario: " << sgf.consultaSalarioFuncionario(32) << endl;

    try{
        cout << "Salario funcionario: " << sgf.consultaSalarioFuncionario(12) << endl;
    }catch(FuncionarioNaoExisteException e){
        cout << e.what() << endl;
    }
    return 0;
}