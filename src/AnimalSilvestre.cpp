#include "AnimalSilvestre.h"

using namespace std;

AnimalSilvestre::AnimalSilvestre() {

};

AnimalSilvestre::AnimalSilvestre(string autorizacao_ibama): m_autorizacao_ibama(autorizacao_ibama) {

};

AnimalSilvestre::~AnimalSilvestre() {

};

string AnimalSilvestre::get_autorizacao_ibama(){
	return m_autorizacao_ibama;
};