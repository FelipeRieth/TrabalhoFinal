#include "Fornecedor.h"

Fornecedor::Fornecedor() {
}

void Fornecedor::SetCredito(int credito) {
	this->valorCredito = credito;
}

void Fornecedor::SetDivida(int divida) {
		this->valorDivida = divida;
}

int Fornecedor::GetDivida() {
	return valorDivida;
}

int Fornecedor::GetCredito() {
	return valorCredito;
}

int Fornecedor::ObterSaldo() {
	return valorCredito - valorDivida;
}

void Fornecedor::CreateFornecedor() {

	CreatePessoa("fornecedor");

	cout << "Digite o credito do fonecedor: \n";
	cin >> this->valorCredito;

	cout << "Digite a divida do fonecedor: \n";
	cin >> this->valorDivida;
}

void Fornecedor::MostrarFornecedor() {

	MostrarPessoa();

	cout << "\n valor credito: " << GetCredito();
	cout << "\n valor divida: " << GetDivida();
	cout << "\n Saldo: " << ObterSaldo();;

}




