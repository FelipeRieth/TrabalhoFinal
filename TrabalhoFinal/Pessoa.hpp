#ifndef Pessoa_hpp
#define Pessoa_hpp
#include <iostream>
using namespace std;


class Pessoa {


protected:

	string nome;
	string endereco;
	string telefone;



public:

	Pessoa();
	Pessoa(string nome, string endereco, string telefone);

	void SetNome(string nome);
	void SetEndereco(string endereco);
	void SetTelefone(string telefone);

	string GetNome();
	string GetEndereco();
	string GetTelefone();


	void CreatePessoa(string cargo);
	virtual string ToString();

	void MostrarPessoa();


		

};

#endif