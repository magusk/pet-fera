#include <iostream>
#include "Controle.h"

using namespace std;

int main (){

	Controle controle;
	char * opcao = new char;
	*opcao = 'a';

	// Menu
	while(*opcao != '0'){
		cout << "Digite a opção desejada: " << endl;
		cout << "\t 1 - Adicionar animal; " << endl;
		cout << "\t 2 - Remover animal; " << endl;
		cout << "\t 3 - Alterar animal; " << endl;
		cout << "\t 4 - Consultar animais; " << endl;
		cout << "\t 5 - Consultar animais por funcionário; " << endl;
		cout << "\t 6 - Adicionar funcionário; " << endl;
		cout << "\t 7 - Remover funcionário; " << endl;
		cout << "\t 8 - Alterar funcionário; " << endl;
		cout << "\t 9 - Consultar funcionário; " << endl;
		cout << "\t s - Salvar modificações; " << endl;
		cout << "\t 0 - Sair do programa." << endl;

		cin.clear();
		cin.getline(opcao,20);

		switch (*opcao){
			case '1':
				controle.adicionar_animal();
				break;
			case '2':
				controle.remover_animal();
				break;
			case '3':
				controle.alterar_animal();
				break;
			case '4':
				controle.consultar_animais();
				break;
			case '5':
				controle.consultar_animais_por_funcionario();
				break;
			case '6':
				controle.adicionar_funcionario();
				break;
			case '7':
				controle.remover_funcionario();
				break;
			case '8':
				controle.alterar_funcionario();
				break;
			case '9':
				controle.consultar_funcionario();
				break;
			case 's':
				controle.salvar_alteracoes();
				break;
			case '0':
				cout << "Até Logo." << endl;
				break;
			default:
				cout << "Nenhuma opção válida detectada, por favor tente novamente." << endl;
				break;
		}
	}
	return 0;
}