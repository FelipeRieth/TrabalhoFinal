#include <iostream>
#include "Empregado.h";

Empregado::Empregado() {

}


int Empregado::GetCodigoSetor(){
	return codigoSetor;
}

float Empregado::GetSalarioBase() {
	return salarioBase;
}

float Empregado::Getimpostos() {
	return impostos;
}

void Empregado::SetCodigoSetor(int c) {
	codigoSetor = c;
}

void Empregado::SetImpostos(float c) {
	impostos = c;
}

void Empregado::SetSalarioBase(float c) {
	salarioBase = c;
}

float Empregado::CalcularSalario() {
	return salarioBase - impostos;
}

void Empregado::CreateEmpregado(string cargo) {

	CreatePessoa(cargo);

	cout << "Digite o codigo do setor do "<< cargo <<": \n";
	cin >> this->codigoSetor;

	cout << "Digite o salarioBase do " << cargo << ": \n";
	cin >> this->salarioBase;

	cout << "Digite os impostos do " << cargo << ": \n";
	cin >> this->impostos;

}

void Empregado::MostrarEmpregado() {
	MostrarPessoa();

	cout << "\n Codigo setor: " << codigoSetor;
	cout << "\n Salario base: " << salarioBase;
	cout << "\n Impostos: " << impostos;
	cout << "\n Salario final: " << CalcularSalario();
}
