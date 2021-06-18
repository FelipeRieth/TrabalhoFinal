#include <iostream>
#include <string>
#include <list>
#include <typeinfo>

#include "Fornecedor.h"
#include "Vendedor.h"
#include "Administrador.h"
#include "Empregado.h"
#include "Operario.h"
using namespace std;

int resposta;
std::list<Pessoa> listaPessoas;
std::list<Administrador> listaAdministradores;
std::list<Empregado> listaEmpregados;
std::list<Fornecedor> listaForncedores;
std::list<Operario> listaOperarios;
std::list<Vendedor> listaVendedores;


void ListarPessoas() {


    std::list<Administrador>::iterator ita;
    for (ita = listaAdministradores.begin(); ita != listaAdministradores.end(); ++ita) {
        ita->MostrarPessoa();
    }

    std::list<Empregado>::iterator ite;
    for (ite = listaEmpregados.begin(); ite != listaEmpregados.end(); ++ite) {
        ite->MostrarPessoa();
    }

    std::list<Fornecedor>::iterator itf;
    for (itf = listaForncedores.begin(); itf != listaForncedores.end(); ++itf) {
        itf->MostrarPessoa();
    }

    std::list<Operario>::iterator ito;
    for (ito = listaOperarios.begin(); ito != listaOperarios.end(); ++ito) {
        ito->MostrarPessoa();
    }

    std::list<Pessoa>::iterator it;
    for (it = listaPessoas.begin(); it != listaPessoas.end(); ++it) {
        it->MostrarPessoa();
    }

    std::list<Vendedor>::iterator itv;
    for (itv = listaVendedores.begin(); itv != listaVendedores.end(); ++itv) {
        itv->MostrarPessoa();
    }


}

void ListarFuncionarios() {

    std::list<Administrador>::iterator ita;
    for (ita = listaAdministradores.begin(); ita != listaAdministradores.end(); ++ita) {
        ita->MostrarAdministrador();
    }

    std::list<Empregado>::iterator ite;
    for (ite = listaEmpregados.begin(); ite != listaEmpregados.end(); ++ite) {
        ite->MostrarEmpregado();
    }

    std::list<Operario>::iterator ito;
    for (ito = listaOperarios.begin(); ito != listaOperarios.end(); ++ito) {
        ito->MostrarOperario();
    }  

    std::list<Vendedor>::iterator itv;
    for (itv = listaVendedores.begin(); itv != listaVendedores.end(); ++itv) {
        itv->MostrarVendedor();
    }

    
}

void ListarFornecedores() {
    std::list<Fornecedor>::iterator itf;
    for (itf = listaForncedores.begin(); itf != listaForncedores.end(); ++itf) {
        itf->MostrarFornecedor();
    }


}

void IncluirPessoa() {
    
    cout << "Quem voce deseja incluir?" <<
        "\n 1- Administrador" <<
        "\n 2- Empregador" <<
        "\n 3- Fornecedor" <<
        "\n 4- Operario" <<
        "\n 5- Pessoa" <<
        "\n 6- Vendedor\n\n";


    cin >> resposta;



    switch (resposta)
    {
        case 1: {Administrador a;
            a.CreateAdministrador();
            listaAdministradores.push_back(a);
            break;
        }

        case 2: {Empregado c;
            c.CreateEmpregado("empregado");
            listaEmpregados.push_back(c);
            break;
        }
        case 3: { Fornecedor f;
            f.CreateFornecedor();
            listaForncedores.push_back(f);
            break;
        }
        case 4: {Operario o;
            o.CreateOperario();
            listaOperarios.push_back(o);
            break;
        }

        case 5: { Pessoa p;
            p.CreatePessoa("pessoa");
            listaPessoas.push_back(p);
            break;
        }

        case 6: { Vendedor v;
            v.CreateVendedor();
            listaVendedores.push_back(v);
            break;
        }

    }

    cout << "Cadastro finalizado! \n";


}

void AtualizaPessoa() {

    string nome;
    std::getline(std::cin, nome);
    cout << "Digite o nome da pessoa que deseja atualizar:\n";
    std::getline(std::cin, nome);

    //Busca pelo nome em todas as listas
    std::list<Administrador>::iterator ita;
    for (ita = listaAdministradores.begin(); ita != listaAdministradores.end(); ++ita) {
        if (ita->GetNome() == nome) {
            ita->CreateAdministrador();
            return;
        }
    }

    std::list<Empregado>::iterator ite;
    for (ite = listaEmpregados.begin(); ite != listaEmpregados.end(); ++ite) {
        if (ite->GetNome() == nome) {
            ite->CreateEmpregado("empregado");
            return;
        }
    }

    std::list<Fornecedor>::iterator itf;
    for (itf = listaForncedores.begin(); itf != listaForncedores.end(); ++itf) {
        if (itf->GetNome() == nome) {
            itf->CreateFornecedor();
            return;
        }
    }

    std::list<Operario>::iterator ito;
    for (ito = listaOperarios.begin(); ito != listaOperarios.end(); ++ito) {
        if (ito->GetNome() == nome) {
            ito->CreateOperario();
            return;
        }
    }

    std::list<Pessoa>::iterator it;
    for (it = listaPessoas.begin(); it != listaPessoas.end(); ++it) {
        if (it->GetNome() == nome) {
            it->CreatePessoa("pessoa");
            return;
        }
    }

    std::list<Vendedor>::iterator itv;
    for (itv = listaVendedores.begin(); itv != listaVendedores.end(); ++itv) {
        if (itv->GetNome() == nome) {
            itv->CreateVendedor();
            return;
        }
    }

    cout << "Não encontrou esse nome";




}

void Relatorios() {
    cout << "Escolha um relatorio: " <<
        "\n 1- Mostrar todas as pessoas" <<
        "\n 2- Mostrar todos os fornecedores" <<
        "\n 3- Mostrar todos os empregados\n";
    cin >> resposta;

    switch (resposta)
    {
    case 1: { ListarPessoas(); break; }
    case 2: { ListarFornecedores(); break; }
    case 3: { ListarFuncionarios(); break; }

    default: cout << "Opcao invalida";
        break;
    }
}



int main()
{
    do {       
        cout << "\n";
        cout << "O que deseja fazer?" <<
            "\n 1- Incluir pessoa" <<
            "\n 2- Atualizar pessoa" <<
            "\n 3- Relatorios\n";

        cin >> resposta;

        switch (resposta)
        {
        case 1:  IncluirPessoa(); break;
        case 2:  AtualizaPessoa(); break;
        case 3:  Relatorios(); break;

        default: cout << "Opcao invalida";
            break;
        }

        cout << "\n";

    } while (true);
    
    
}
