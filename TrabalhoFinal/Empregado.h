#pragma once
#ifndef Empregado_hpp
#define Empregado_hpp
#include <iostream>
#include "Pessoa.hpp"
using namespace std;

class Empregado : public Pessoa {

protected:

	int codigoSetor;
	float salarioBase;
	float impostos;

public:

	Empregado();
	
	void SetCodigoSetor(int c);
	void SetSalarioBase(float c);
	void SetImpostos(float c);

	int GetCodigoSetor();
	float GetSalarioBase();
	float Getimpostos();

	virtual float CalcularSalario();

	void CreateEmpregado(string cargo);

	void MostrarEmpregado();

};

#endif // !Empregado_hpp
