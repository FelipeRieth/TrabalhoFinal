#include "Operario.h"

float Operario::GetValorProducao() {
	return valorProducao;
}

float Operario::GetComissao() {
	return comissao;
}

float Operario::CalcularSalario() {
	return GetSalarioBase() - Getimpostos() + comissao;
}
void Operario::SetValorProducao(float v) {
	this->valorProducao = v;
}
void Operario::SetValorComissao(float v) {
	this->comissao = v;
}

void Operario::CreateOperario() {

	CreateEmpregado("operario");

	cout << "Digite o valor de producao do operario: \n";
	cin >> this->valorProducao;

	cout << "Digite a comissao do operario: \n";
	cin >> this->comissao;

}

void Operario::MostrarOperario() {
	MostrarEmpregado();
	cout << "\n Valor de producao: " << valorProducao;
	cout << "\n Comissao: " << comissao;
}

