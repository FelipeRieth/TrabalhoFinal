#include "Vendedor.h"

float Vendedor::GetValorVendas() {
	return valorVendas;
}

float Vendedor::GetComissao() {
	return comissao;
}

void Vendedor::SetValorVendas(float v) {
	valorVendas = v;
}

void Vendedor::SetComissao(float v) {
	comissao = v;
}

float Vendedor::CalcularSalario() {
	return GetSalarioBase() - Getimpostos() + GetComissao();
}

void Vendedor::CreateVendedor() {

	CreateEmpregado("vendedor");

	cout << "Digite o valor de vendas do vendedor: \n";
	cin >> this->valorVendas;

	cout << "Digite a comissao do vendedor: \n";
	cin >> this->comissao;
}

void Vendedor::MostrarVendedor() {

	MostrarEmpregado();

	cout << "\n Valor de vendas: " <<valorVendas;
	cout << "\n Comissao: " << comissao;


}
