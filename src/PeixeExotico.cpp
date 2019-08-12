#include "PeixeExotico.h"

PeixeExotico::PeixeExotico(){

}
PeixeExotico::PeixeExotico(int id, string nome_cientifico, char sexo, 
			double tamanho, string dieta, shared_ptr<Veterinario> veterinario, 
			shared_ptr<Tratador> tratador, string nome_batismo, string tipo_agua, 
			string autorizacao_ibama, string pais_origem, string cidade_origem):
	Peixe(id, "Gnathostomata", nome_cientifico, sexo, tamanho, dieta, veterinario,
		tratador, nome_batismo, tipo_agua), 
	AnimalExotico(autorizacao_ibama, pais_origem, cidade_origem){

}
PeixeExotico::~PeixeExotico(){

}

void PeixeExotico::set_autorizacao_ibama(string autorizacao_ibama){
	m_autorizacao_ibama = autorizacao_ibama;
};

string PeixeExotico::write(){
	ostringstream str;
	str<<"PeixeExotico;";
	str<<m_id<<";";
	str<<m_classe<<";";
	str<<m_nome_cientifico<<";";
	str<<m_sexo<<";";
	str<<m_tamanho<<";";
	str<<m_dieta<<";";
	str<<m_veterinario->get_id()<<";";
	str<<m_tratador->get_id()<<";";
	str<<m_nome_batismo<<";";
	// Tipo de agua
	str<<m_tipo_agua<<";";
	//Autorização do Ibama
	str<<m_autorizacao_ibama<<";";
	// País de origem
	str<<m_pais_origem<<";";
	// Cidade de origem
	str<<m_cidade_origem<<endl;

	return str.str();

};

string PeixeExotico::Tipo(){
	return "PeixeExotico";
};

ostream& PeixeExotico::print(ostream& os)const{
	os<<"Campo \tTipo de Dados \tValores"<<endl;
	os<<"Identificador Do animal \tInteiro \t"<<m_id<<endl;
	os<<"Classe do animal \tCadeia de caracteres \t"<<m_classe<<endl;
	os<<"Nome científico do animal \tCadeia de caracteres \t"<<m_nome_cientifico<<endl;
	os<<"Sexo do animal \tCaractere \t"<<m_sexo<<endl;
	os<<"Tamanho média em métros \tDecimal \t"<<m_tamanho<<endl;
	os<<"Dieta Predominante \tCadeia de caracteres \t"<<m_dieta<<endl;
	os<<"Veterinário associado \tInteiro \t"<<m_veterinario->get_id()<<endl;
	os<<"Tratador responsável \tInteiro \t"<<m_tratador->get_id()<<endl;
	os<<"Nome de batismo \tCadeia de caracteres \t"<<m_nome_batismo<<endl;
	os<<"Tipo de agua \tCadeia de caracteres \t"<<m_tipo_agua<<endl;
	os<<"Autorização do Ibama \tCadeia de caracteres \t"<<m_autorizacao_ibama<<endl;
	os<<"País de origem \tCadeia de caracteres \t"<<m_pais_origem<<endl;
	os<<"Cidade de origem \tCadeia de caracteres \t"<<m_cidade_origem<<endl;

	return os;
}

void PeixeExotico::inicializar_animal(int id){
	inicializar_peixe(id);
	inicializar_exotico();
};

void PeixeExotico::alterar_animal(string atributo){
	alterar_peixe(atributo);
	alterar_exotico(atributo);
};