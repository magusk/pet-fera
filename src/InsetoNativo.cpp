#include "InsetoNativo.h"

InsetoNativo::InsetoNativo() {

};

InsetoNativo::InsetoNativo(int id, string nome_cientifico, char sexo, 
			double tamanho, string dieta, shared_ptr<Veterinario> veterinario, 
			shared_ptr<Tratador> tratador, string nome_batismo, int total_de_mudas, string tipo_metamorfose, 
			int day, int month, int year, string autorizacao_ibama, string uf_origem):
	Inseto(id, "Insecta", nome_cientifico, sexo, tamanho, dieta, veterinario,
		tratador, nome_batismo, total_de_mudas, tipo_metamorfose, day, month, year), 
	AnimalNativo(autorizacao_ibama, uf_origem) {

};

InsetoNativo::~InsetoNativo() {

};

void InsetoNativo::set_autorizacao_ibama(string autorizacao_ibama){
	m_autorizacao_ibama = autorizacao_ibama;
};

string InsetoNativo::write(){
	ostringstream str;
	str<<"InsetoNativo;";
	str<<m_id<<";"; 
	str<<m_classe<<";";
	str<<m_nome_cientifico<<";";
	str<<m_sexo<<";";
	str<<m_tamanho<<";";
	str<<m_dieta<<";";
	str<<m_veterinario->get_id()<<";";
	str<<m_tratador->get_id()<<";";
	str<<m_nome_batismo<<";";
	// Total de Mudas
	str<<m_total_de_mudas<<";";
	// Tipo de metamorfose
	str<<m_tipo_metamorfose<<";";
	// Última muda
	str<<m_ultima_muda<<";";
	//Autorização do Ibama
	str<<m_autorizacao_ibama<<";";
	// UF de origem
	str<<m_uf_origem<<endl;
	

	return str.str();
};

string InsetoNativo::Tipo(){
	return "InsetoNativo";
};

ostream& InsetoNativo::print(ostream& os)const{
	os<<"Campo \tTipo de Dados \tValores"<<endl;
	os<<"Identificador Do animal \tInteiro \t"<<m_id<<endl;
	os<<"Classe do animal \tCadeia de caracteres \t"<<m_classe<<endl;
	os<<"Nome científico do animal \tCadeia de caracteres \t"<<m_nome_cientifico<<endl;
	os<<"Sexo do animal \tCaractere \t"<<m_sexo<<endl;
	os<<"Tamanho média em métros\tDecimal\t"<<m_tamanho<<endl;
	os<<"Dieta Predominante \tCadeia de caracteres \t"<<m_dieta<<endl;
	os<<"Veterinário associado \tInteiro \t"<<m_veterinario->get_id()<<endl;
	os<<"Tratador responsável \tInteiro \t"<<m_tratador->get_id()<<endl;
	os<<"Nome de batismo \tCadeia de caracteres \t"<<m_nome_batismo<<endl;
	os<<"Total de mudas \tInteiro \t"<<m_total_de_mudas<<endl;
	os<<"Data da última muda \tclasse date \t"<<m_ultima_muda<<endl;
	os<<"Tipo de metamorfose \tCadeia de caracteres \t"<<m_tipo_metamorfose<<endl;
	os<<"Autorização do Ibama \tCadeia de caracteres \t"<<m_autorizacao_ibama<<endl;
	os<<"UF de origem \tCadeia de caracteres \t"<<m_uf_origem<<endl;

	return os;
};

void InsetoNativo::inicializar_animal(int id){
	inicializar_inseto(id);
	inicializar_nativo();
};

void InsetoNativo::alterar_animal(string atributo){
	alterar_inseto(atributo);
	alterar_nativo(atributo);
};