#include "AnimalExotico.h"

using namespace std;

AnimalExotico::AnimalExotico() {

};

AnimalExotico::AnimalExotico(string autorizacao_ibama, string pais_origem, string cidade_origem): 
						AnimalSilvestre(autorizacao_ibama), m_pais_origem(pais_origem), m_cidade_origem(cidade_origem) {

};

AnimalExotico::~AnimalExotico () {

};

void AnimalExotico::set_pais_origem(string pais_origem) {
	m_pais_origem = pais_origem;
};

void AnimalExotico::set_cidade_origem(string cidade_origem) {
	m_cidade_origem = cidade_origem;
};

string AnimalExotico::get_pais_origem() {
	return m_pais_origem;
};

string AnimalExotico::get_cidade_origem() {
	return m_cidade_origem;
};

void AnimalExotico::inicializar_exotico(){
	TratamentoInput input;
	string autorizacao_ibama;
	string pais_origem;
	string cidade_origem;

	cout << "Digite a autorização do Ibama: " << endl;
	autorizacao_ibama = input.inputString();
	this->set_autorizacao_ibama(autorizacao_ibama);

	cout << "Digite o país de origem: " << endl;
	pais_origem = input.inputString();
	this->m_pais_origem = (pais_origem);

	cout << "Digite a cidade de origem: " << endl;
	cidade_origem = input.inputString();
	this->set_cidade_origem(cidade_origem);
};

void AnimalExotico::alterar_exotico(string atributo){
	TratamentoInput input;
	if (!atributo.compare("ibama")){
		cout << "Digite a autorização do Ibama: " << endl;
		atributo = input.inputString();
		this->set_autorizacao_ibama(atributo);
	}
	else if (!atributo.compare("pais de origem")){
		cout << "Digite o país de origem: " << endl;
		atributo = input.inputString();
		this->m_pais_origem = (atributo);
	}
	else if (!atributo.compare("cidade de origem")){
		cout << "Digite a cidade de origem: " << endl;
		atributo = input.inputString();
		this->set_cidade_origem(atributo);
	}
};