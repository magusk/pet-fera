#include "PeixeNativo.h"

PeixeNativo::PeixeNativo(){

}
PeixeNativo::PeixeNativo(int id, string nome_cientifico, char sexo, 
			double tamanho, string dieta, shared_ptr<Veterinario> veterinario, 
			shared_ptr<Tratador> tratador, string nome_batismo, string tipo_agua, 
			string autorizacao_ibama, string uf_origem):
	Peixe(id, "Gnathostomata", nome_cientifico, sexo, tamanho, dieta, veterinario,
		tratador, nome_batismo, tipo_agua), 
	AnimalNativo(autorizacao_ibama, uf_origem){

}
PeixeNativo::~PeixeNativo(){

}

void PeixeNativo::set_autorizacao_ibama(string autorizacao_ibama){
	m_autorizacao_ibama = autorizacao_ibama;
};

string PeixeNativo::write(){
	ostringstream str;
	str<<"PeixeNativo;";
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
	// UF de origem
	str<<m_uf_origem<<endl;

	return str.str();

};

string PeixeNativo::Tipo(){
	return "PeixeNativo";
};

ostream& PeixeNativo::print(ostream& os)const{
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
	os<<"UF de origem \tCadeia de caracteres \t"<<m_uf_origem<<endl;

	return os;
}

void PeixeNativo::inicializar_animal(int id){
	inicializar_peixe(id);
	inicializar_nativo();
};

void PeixeNativo::alterar_animal(string atributo){
	alterar_peixe(atributo);
	alterar_nativo(atributo);
};