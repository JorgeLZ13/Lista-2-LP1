#include "Cirurgiao.h"
#include "Oftalmologista.h"
#include "Otorrino.h"
#include "Ginecologista.h"

int main(){

	Medico *cir = new Cirurgiao();
	Medico *oft = new Oftalmologista();
	Medico *otr = new Otorrino();
	Medico *gin = new Ginecologista();

	cir->setNome("Antonio Nobrega");
	cir->setNomeEspecializacao("Ginecologista");
	cir->setAltura(1.75);
	cir->setPeso(78);

	oft->setNome("Lucas Bezerra");
	oft->setNomeEspecializacao("Cirurgiao");
	oft->setAltura(1.65);
	oft->setPeso(67);

	otr->setNome("Matheus Victor");
	otr->setNomeEspecializacao("Otorrino");
	otr->setAltura(1.80);
	otr->setPeso(81);

	gin->setNome("Maria Luiza");
	gin->setNomeEspecializacao("Oftamologista");
	gin->setAltura(1.63);
	gin->setPeso(69);

	cir->print();
	cir->procedimentoEspecifico();
	oft->print();
	oft->procedimentoEspecifico();
	otr->print();
	otr->procedimentoEspecifico();
	gin->print();
	gin->procedimentoEspecifico();

	delete cir;
	delete oft;
	delete otr;
	delete gin;

	return 0;
}
