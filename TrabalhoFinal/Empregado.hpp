#pragma once
#ifndef Empregado_hpp
#define Empregado_hpp
#include "Pessoa.hpp"

class Empregado : public Pessoa {

private:
	int codigoSetor;
	float salarioBase;
	float imposto;

public:

	Empregado();

	void SetCodigoSetor(int codigo);
	void SetSalarioBase(float salario);
	void SetImposto(float imposto);

	int GetCodigoSetor();
	float GetSalarioBase();
	float GetImposto();


};

#endif

