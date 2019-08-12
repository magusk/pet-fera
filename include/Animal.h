#ifndef _ANIMAL_H_
#define _ANIMAL_H_

#include <iostream>
#include <string>
#include <sstream>
#include <memory>
#include "TratamentoInput.h"
#include "Veterinario.h"
#include "Tratador.h" 

using namespace std; 

class Animal {
	protected:
		int m_id;
		string m_classe;
		string m_nome_cientifico;
		char m_sexo;
		double m_tamanho;
		string m_dieta;
		shared_ptr<Veterinario> m_veterinario;
		shared_ptr<Tratador> m_tratador;
		string m_nome_batismo;
		TratamentoInput input;

	public:
		Animal();
		Animal(int id, string classe, string nome_cientifico, char sexo, 
				double tamanho, string dieta, shared_ptr<Veterinario> veterinario, 
				shared_ptr<Tratador> tratador, string nome_batismo);
		~Animal();


		void set_m_id(int id);
		void set_m_classe(string classe);
		void set_m_nome_cientifico(string nome_cientifico);
		void set_m_sexo(char sexo);
		void set_m_tamanho(double tamanho);
		void set_m_dieta(string dieta);
		void set_m_veterinario(shared_ptr<Veterinario> veterinario);
		void set_m_tratador(shared_ptr<Tratador> tratador);
		void set_m_nome_batismo(string nome_batismo);

		int get_m_id() const;
		string get_m_classe() const;
		string get_m_nome_cientifico() const;
		char get_m_sexo() const;
		double get_m_tamanho() const; 
		string get_m_dieta() const;
		Veterinario get_m_veterinario();
		Tratador get_m_tratador();
		string get_m_nome_batismo() const;

		virtual string write() = 0;
		virtual string Tipo() = 0;
		virtual void inicializar_animal(int id) = 0;
		virtual void alterar_animal(string atributo) = 0;
		void inicializar(string classe, int id);
		void alterar(string atributo);

		friend ostream& operator<<(ostream& os, const Animal& a){
			return a.print(os);
		}

	private:
		virtual ostream& print(ostream&)const = 0;
};

#endif