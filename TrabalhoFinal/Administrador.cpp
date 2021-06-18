#include <iostream>
#include <string>
#include "Administrador.h"

void Administrador::SetAjudaDeCusto(float v) {
	ajudaDeCusto = v;
}

float Administrador::GetAjudaDeCusto() {
	return ajudaDeCusto;
}

float Administrador::CalcularSalario() {
	return GetSalarioBase() - Getimpostos() + GetAjudaDeCusto();
}

string Administrador::ToString() {

	return "Administrador: \n nome: " + nome +
		"\n Endereco" + endereco +
		"\n Telefone: " + telefone +
		"\n Salario: " + std::to_string(this->CalcularSalario()) +
		"\n Ajuda de custo: " + std::to_string(ajudaDeCusto);
}


void Administrador::CreateAdministrador() {

	CreateEmpregado("Administrador");

	 cout << "Digite a ajuda de custo do administrador: \n";
	 cin >> this->ajudaDeCusto;

	 

}

void Administrador::MostrarAdministrador() {
	MostrarEmpregado();
	cout << "\n Ajuda de custo: " << ajudaDeCusto;

}





