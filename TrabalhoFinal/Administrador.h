#pragma once
#ifndef Administrador_hpp
#define Administrador_hpp
#include "Empregado.h"

class Administrador : public Empregado {

private:
	float ajudaDeCusto;

public:

	float GetAjudaDeCusto();

	void SetAjudaDeCusto(float v);

	float CalcularSalario();

	void CreateAdministrador();

	string ToString();

	void MostrarAdministrador();



};

#endif // !Administrador_hpp
