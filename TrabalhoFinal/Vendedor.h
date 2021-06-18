#pragma once
#ifndef Vendedor_hpp
#define Vendedor_hpp

#include <iostream>
#include "Empregado.h"

class Vendedor : public Empregado {

private :

	float valorVendas;
	float comissao;

public:

	float GetValorVendas();

	float GetComissao();

	void SetValorVendas(float v);

	void SetComissao(float v);

	float CalcularSalario();

	void CreateVendedor();

	void MostrarVendedor();

};

#endif // !Vendedor_hpp
