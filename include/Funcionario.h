#ifndef _FUNCIONARIO_H_
#define _FUNCIONARIO_H_ 

#include <iostream>
#include <string>
#include <sstream>
#include "TratamentoInput.h"

using namespace std;

class Funcionario {
	protected:
		int m_id;
		string m_nome;
		string m_cpf;
		short int m_idade;
		string m_tipo_sanguineo;
		char m_fator_rh;
		string m_especialidade;

	public:
		// Construtores e destrutor
		Funcionario();
		Funcionario(int id, string nome, string cpf, short int idade, 
					string tipo_sanguineo, char fator_rh, string especialidade);
		~Funcionario(); 

		// Métodos Sets
		void set_id(int id);
		void set_nome(string nome);
		void set_cpf(string cpf);
		void set_idade(short int idade);
		void set_tipo_sanguineo(string tipo_sanguineo);
		void set_fator_rh(char fator_rh);
		void set_especialidade(string especialidade);

		// Métodos Gets
		int get_id();
		string get_nome();
		string get_cpf();
		short int get_idade();
		string get_tipo_sanguineo();
		char get_fator_rh();
		string get_especialidade();
		virtual string write() = 0;
		virtual string Tipo() = 0;

		virtual void inicializar_funcionario(int id) = 0;
		virtual void alterar_funcionario() = 0;
		void inicializar(int id);
		void alterar(string atributo);

		friend ostream& operator<<(ostream& os, const Funcionario& f){
			return f.print(os);
		}

	private:
		virtual ostream& print(ostream&)const = 0;
};


#endif