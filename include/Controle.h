#ifndef CONTROLE_H
#define CONTROLE_H

#include <iostream>
#include <fstream>
#include <exception>
#include <map>
#include <list>

#include "Tratamento.h"

using namespace std;

	class Controle{
		private:
			map<int, shared_ptr<Animal>> animais_m;
			map<int, shared_ptr<Funcionario>> funcionarios_m;
			Tratamento tratamento;
			int id;

			void definir_responsavel(shared_ptr<Animal> &bicho, string funcao);
			void criar_animal(shared_ptr<Animal> &bicho, string classe);
			void criar_animal_nativo(shared_ptr<AnimalNativo> &bicho);
			void criar_animal_exotico(shared_ptr<AnimalExotico> &bicho);

		public:
			Controle();
			Controle(map<int, Animal> a, map<int, Funcionario> f);
			~Controle();
			
			int is_number(char * number);
			
			void adicionar_animal();
			void remover_animal();
			void alterar_animal();
			void consultar_animais();
			void consultar_animais_por_funcionario();
			void salvar_alteracoes();
			
			void adicionar_funcionario();
			void remover_funcionario();
			void alterar_funcionario();
			void consultar_funcionario();
			bool funcionario_valido();
			int definir_id();
			void filtro(string arquivo, string classe = "A",string id_Tratador = "A", string id_Veterinario = "A");

};
#endif