#include <string>
#include "Pessoa.hpp"


Pessoa::Pessoa()
{
	
}

Pessoa::Pessoa(string nome, string endereco, string telefone)
{
	this->nome = nome;
	this->endereco = endereco;
	this->telefone = telefone;
}

	void Pessoa::SetNome(string nome) {
		this->nome = nome;
	}

	void Pessoa::SetEndereco(string endereco) {
		this->endereco = endereco;
	}

	void Pessoa::SetTelefone(string telefone) {
		this->telefone = telefone;
	}

	string Pessoa::GetNome() {
		return nome ;
	}

	string Pessoa::GetTelefone() {
		return telefone;
	}

	string Pessoa::GetEndereco() {
		return endereco;
	}

	string Pessoa::ToString() {
		return "Pessoa: " + this->nome + " " + this->endereco + " " + this->telefone;
	}

	void Pessoa::CreatePessoa(string cargo) {

		std::getline(std::cin, nome);
		cout << "Digite o nome do "<< cargo << ": \n";
		std::getline(std::cin, nome);

		cout << "Digite o endereco do " << cargo << ": \n";
		std::getline(std::cin, endereco);

		cout << "Digite o telefone do " << cargo << ": \n";
		std::getline(std::cin, telefone);

		cout << "\n";
	}

	void Pessoa::MostrarPessoa() {
		cout << "\n";
		cout << "\n nome: " << nome;
		cout << "\n telefone: " << telefone;
		cout << "\n endereco: " << endereco;
	}

