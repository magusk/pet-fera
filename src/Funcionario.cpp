#include "Funcionario.h"
 
using namespace std;

// Construtores e destrutor
Funcionario::Funcionario(){

};

Funcionario::Funcionario (int id, string nome, string cpf, short int idade, string tipo_sanguineo, char fator_rh, string especialidade): m_id(id), m_nome(nome), m_cpf(cpf), m_idade(idade), m_tipo_sanguineo(tipo_sanguineo), m_fator_rh(fator_rh), m_especialidade(especialidade){

};

Funcionario::~Funcionario(){

};

// Métodos Sets
void Funcionario::set_id(int id){
	m_id = id;	
};

void Funcionario::set_nome(string nome){
	m_nome = nome;	
};

void Funcionario::set_cpf(string cpf){
	m_cpf = cpf;	
};

void Funcionario::set_idade(short int idade){
	m_idade = idade;	
};

void Funcionario::set_tipo_sanguineo(string tipo_sanguineo){
	m_tipo_sanguineo = tipo_sanguineo;	
};

void Funcionario::set_fator_rh(char fator_rh){
	m_fator_rh = fator_rh;	
};

void Funcionario::set_especialidade(string especialidade){
	m_especialidade = especialidade;	
};

// Métodos Gets
int Funcionario::get_id(){
	return m_id;
};

string Funcionario::get_nome(){
	return m_nome;
};

string Funcionario::get_cpf(){
	return m_cpf;
};

short int Funcionario::get_idade(){
	return m_idade;
};

string Funcionario::get_tipo_sanguineo(){
	return m_tipo_sanguineo;
};

char Funcionario::get_fator_rh(){
	return m_fator_rh;
};

string Funcionario::get_especialidade(){
	return m_especialidade;
};

void Funcionario::inicializar(int id){
	TratamentoInput input;
	string nome;
	string cpf;
	short int idade;
	string tipo_sanguineo;
	string especialidade;
	char *fator_rh = new char;

	this->set_id(id);

	cout<<"Digite o nome: " << endl;
	nome = input.inputString();
	this->set_nome(nome);

	cout<<"Digite o cpf:" << endl;
	cpf = input.inputString();
	this->set_cpf(cpf);

	cout<<"Digite a idade: " << endl;
	idade = input.inputInt();
	this->set_idade(idade);

	cout<<"Digite o tipo sanguineo: " << endl;
	tipo_sanguineo = input.inputString();
	this->set_tipo_sanguineo(tipo_sanguineo);

	cout << "Digite o fator RH do Funcionario:" << endl;
	fator_rh = input.inputChar();

	while(*fator_rh != '+' && *fator_rh != '-'){
		cout << "Fator RH inválido, digite novamente: " << endl;
		fator_rh = input.inputChar();
	}

	cout << "Fator RH: " << *fator_rh << endl;
	this->set_fator_rh(*fator_rh);


	cout<<"Digite a especialidade: " << endl;
	especialidade = input.inputString();
	this->set_especialidade(especialidade);

	delete[] fator_rh;
};

void Funcionario::alterar(string atributo){
	TratamentoInput input;
	string alt_atributo;
	char *fator_rh = new char;

	if(!atributo.compare("nome")){
		cout<<"Digite o nome: " << endl;
		alt_atributo = input.inputString();
		this->set_nome(alt_atributo);
	}
	else if(!atributo.compare("cpf")){
		cout<<"Digite o cpf: " << endl;
		alt_atributo = input.inputString();
		this->set_cpf(alt_atributo);
	}
	else if(!atributo.compare("idade")){
		cout<<"Digite a idade: " << endl;
		int idade = input.inputInt();
		this->set_idade(idade);
	}
	else if(!atributo.compare("tipo sanguineo")){
		cout<<"Digite o tipo sanguineo: " << endl;
		alt_atributo = input.inputString();
		this->set_tipo_sanguineo(alt_atributo);
	}
	else if(!atributo.compare("fator rh")){
		cout << "Digite o fator RH do Funcionario:" << endl;
		fator_rh = input.inputChar();

		while(*fator_rh != '+' && *fator_rh != '-'){
			cout << "Fator RH inválido, digite novamente: " << endl;
			fator_rh = input.inputChar();
		}
		this->set_fator_rh(*fator_rh);
	}
	else if(!atributo.compare("especialidade")){
		cout<<"Digite a especialidade: " << endl;
		alt_atributo = input.inputString();
		this->set_especialidade(alt_atributo);
	}

	delete[] fator_rh;
};