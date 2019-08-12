#ifndef _TRATADOR_H_
#define _TRATADOR_H_ 

#include <iostream>
#include <string>
#include "Funcionario.h"

using namespace std;

class Tratador: public Funcionario{
	private:
		int m_nivel_de_seguranca;

	public:
		// Construtores e destrutor

		Tratador();
		Tratador(int id, string nome, string cpf, short int idade, 
					string tipo_sanguineo, char fator_rh, 
					string especialidade, int nivel_de_seguranca);
		Tratador(Tratador &Tratador);
		~Tratador();

		// Métodos Sets
		void set_nivel_de_seguranca(int nivel_de_seguranca);
		
		// Métodos Gets
		int get_nivel_de_seguranca();
		string write();
		string Tipo();

		void inicializar_funcionario(int id);
		void alterar_funcionario();
	private:
		ostream& print(ostream& os)const;

};

#endif