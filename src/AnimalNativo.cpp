#include "AnimalNativo.h"

using namespace std;

AnimalNativo::AnimalNativo() {

};

AnimalNativo::AnimalNativo(string autorizacao_ibama, string uf_origem): 
						AnimalSilvestre(autorizacao_ibama), m_uf_origem(uf_origem) {

};

AnimalNativo::~AnimalNativo () {

};

void AnimalNativo::set_uf_origem(string uf_origem) {
	m_uf_origem = uf_origem;
};

string AnimalNativo::get_uf_origem() {
	return m_uf_origem;
};

void AnimalNativo::inicializar_nativo(){
	TratamentoInput input;
	string autorizacao_ibama;
	string uf_origem;

	cout << "Digite a autorização do Ibama: " << endl;
	autorizacao_ibama = input.inputString();
	this->set_autorizacao_ibama(autorizacao_ibama);

	cout << "Digite a UF de origem: " << endl;
	uf_origem = input.inputString();
	this->set_uf_origem(uf_origem);
};

void AnimalNativo::alterar_nativo(string atributo){
	TratamentoInput input;
	if (!atributo.compare("ibama")){
		cout << "Digite a autorização do Ibama: " << endl;
		atributo = input.inputString();
		this->set_autorizacao_ibama(atributo);
	}
	else if (!atributo.compare("uf de origem")){
		cout << "Digite a UF de origem: " << endl;
		atributo = input.inputString();
		this->set_uf_origem(atributo);
	}
};