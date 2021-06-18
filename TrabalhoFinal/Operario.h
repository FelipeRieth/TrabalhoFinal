#pragma once
#ifndef Operario_hpp
#define Operario_hpp

#include <iostream>
#include "Empregado.h";

class Operario : public Empregado {

private :
	float valorProducao;
	float comissao;

public:

	float GetValorProducao();

	float GetComissao();

	void SetValorProducao(float v);

	void SetValorComissao(float v);

	float CalcularSalario();

	void CreateOperario();

	void MostrarOperario();

};

#endif // !Operario_hpp
