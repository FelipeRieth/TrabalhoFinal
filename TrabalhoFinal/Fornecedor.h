#pragma once
#ifndef Fornecedor_hpp
#define Fornecedor_hpp
#include "Pessoa.hpp"

class Fornecedor : public Pessoa {

private:

	int valorCredito;
	int valorDivida;

public:
	Fornecedor();

	int GetCredito();
	int GetDivida();
	int ObterSaldo();

	void SetCredito(int credito);
	void SetDivida(int divida);

	void CreateFornecedor();

	void MostrarFornecedor();
};

#endif