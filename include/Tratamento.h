#ifndef _TRATAMENTO_H_
#define _TRATAMENTO_H_

#include <string>
#include <iostream>
#include <memory>
#include <map>
#include "AnfibioDomestico.h"
#include "AnfibioExotico.h"
#include "AnfibioNativo.h"
#include "AracnideoDomestico.h"
#include "AracnideoExotico.h"
#include "AracnideoNativo.h"
#include "AveDomestica.h"
#include "AveExotica.h"
#include "AveNativa.h"
#include "InsetoDomestico.h"
#include "InsetoExotico.h"
#include "InsetoNativo.h"
#include "MamiferoDomestico.h"
#include "MamiferoExotico.h"
#include "MamiferoNativo.h"
#include "ReptilDomestico.h"
#include "ReptilExotico.h"
#include "ReptilNativo.h"
#include "PeixeDomestico.h"
#include "PeixeExotico.h"
#include "PeixeNativo.h"
#include "Tratador.h"
#include "Veterinario.h"

using namespace std;

class Tratamento{
	private:

	public:
		shared_ptr<Animal> Tratamento_Construtor_Animal(string line, map<int , shared_ptr<Funcionario>> &funcionarios);
		shared_ptr<Animal> Tratamento_AnfibioDomestico(string line, map<int , shared_ptr<Funcionario>> &funcionarios);
		shared_ptr<Animal> Tratamento_AnfibioExotico(string line, map<int , shared_ptr<Funcionario>> &funcionarios);
		shared_ptr<Animal> Tratamento_AnfibioNativo(string line, map<int , shared_ptr<Funcionario>> &funcionarios);
		shared_ptr<Animal> Tratamento_AracnideoDomestico(string line, map<int , shared_ptr<Funcionario>> &funcionarios);
		shared_ptr<Animal> Tratamento_AracnideoExotico(string line, map<int , shared_ptr<Funcionario>> &funcionarios);
		shared_ptr<Animal> Tratamento_AracnideoNativo(string line, map<int , shared_ptr<Funcionario>> &funcionarios);
		shared_ptr<Animal> Tratamento_AveDomestica(string line, map<int , shared_ptr<Funcionario>> &funcionarios);
		shared_ptr<Animal> Tratamento_AveExotica(string line, map<int , shared_ptr<Funcionario>> &funcionarios);
		shared_ptr<Animal> Tratamento_AveNativa(string line, map<int , shared_ptr<Funcionario>> &funcionarios);
		shared_ptr<Animal> Tratamento_InsetoDomestico(string line, map<int , shared_ptr<Funcionario>> &funcionarios);
		shared_ptr<Animal> Tratamento_InsetoExotico(string line, map<int , shared_ptr<Funcionario>> &funcionarios);
		shared_ptr<Animal> Tratamento_InsetoNativo(string line, map<int , shared_ptr<Funcionario>> &funcionarios);
		shared_ptr<Animal> Tratamento_MamiferoDomestico(string line, map<int , shared_ptr<Funcionario>> &funcionarios);
		shared_ptr<Animal> Tratamento_MamiferoExotico(string line, map<int , shared_ptr<Funcionario>> &funcionarios);
		shared_ptr<Animal> Tratamento_MamiferoNativo(string line, map<int , shared_ptr<Funcionario>> &funcionarios);
		shared_ptr<Animal> Tratamento_ReptilDomestico(string line, map<int , shared_ptr<Funcionario>> &funcionarios);
		shared_ptr<Animal> Tratamento_ReptilExotico(string line, map<int , shared_ptr<Funcionario>> &funcionarios);
		shared_ptr<Animal> Tratamento_ReptilNativo(string line, map<int , shared_ptr<Funcionario>> &funcionarios);
		shared_ptr<Animal> Tratamento_PeixeDomestico(string line, map<int , shared_ptr<Funcionario>> &funcionarios);
		shared_ptr<Animal> Tratamento_PeixeExotico(string line, map<int , shared_ptr<Funcionario>> &funcionarios);
		shared_ptr<Animal> Tratamento_PeixeNativo(string line, map<int , shared_ptr<Funcionario>> &funcionarios);

		shared_ptr<Funcionario> Tratamento_Construtor_Funcionario(string line);
		shared_ptr<Funcionario> Tratamento_Tratador(string line);
		shared_ptr<Funcionario> Tratamento_Veterinario(string line);

		string * Tratamento_Data(string line);


};

#endif