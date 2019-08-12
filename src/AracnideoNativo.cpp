#include "AracnideoNativo.h"

AracnideoNativo::AracnideoNativo() {

};

AracnideoNativo::AracnideoNativo(int id, string nome_cientifico, char sexo, 
			double tamanho, string dieta, shared_ptr<Veterinario> veterinario, 
			shared_ptr<Tratador> tratador, string nome_batismo, int total_de_mudas, string tipo_veneno, 
			int day, int month, int year, string autorizacao_ibama, string uf_origem):
	Aracnideo(id, "Arachnida", nome_cientifico, sexo, tamanho, dieta, veterinario,
		tratador, nome_batismo, total_de_mudas, tipo_veneno, day, month, year), 
	AnimalNativo(autorizacao_ibama, uf_origem) {

};

AracnideoNativo::~AracnideoNativo() {

};

void AracnideoNativo::set_autorizacao_ibama(string autorizacao_ibama){
	m_autorizacao_ibama = autorizacao_ibama;
};

string AracnideoNativo::write(){
	ostringstream str;
	str<<"AracnideoNativo;";
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
	// Tipo de veneno
	str<<m_tipo_veneno<<";";
	// Última muda
	str<<m_ultima_muda<<";";
	//Autorização do Ibama
	str<<m_autorizacao_ibama<<";";
	// UF de origem
	str<<m_uf_origem<<endl;

	return str.str();
};

string AracnideoNativo::Tipo(){
	return "AracnideoNativo";
};

ostream& AracnideoNativo::print(ostream& os)const{
	os<<"Campo \t\t\t\tTipo de Dados \t\tValores"<<endl;
	os<<"Identificador Do animal   \tInteiro \t\t"<<m_id<<endl;
	os<<"Classe do animal \t\tCadeia de caracteres \t"<<m_classe<<endl;
	os<<"Nome científico do animal \tCadeia de caracteres \t"<<m_nome_cientifico<<endl;
	os<<"Sexo do animal \t\t\tCaractere \t\t"<<m_sexo<<endl;
	os<<"Tamanho média em métros \tDecimal \t\t"<<m_tamanho<<endl;
	os<<"Dieta predominante \t\tCadeia de caracteres \t"<<m_dieta<<endl;
	os<<"Veterinário associado \t\tInteiro \t\t"<<m_veterinario->get_id()<<endl;
	os<<"Tratador responsável \t\tInteiro \t\t"<<m_tratador->get_id()<<endl;
	os<<"Nome de batismo \t\tCadeia de caracteres \t"<<m_nome_batismo<<endl;
	os<<"Total de mudas  \t\tInteiro \t\t\t"<<m_total_de_mudas<<endl;
	os<<"Data da última muda \t\tclasse date \t\t"<<m_ultima_muda<<endl;
	os<<"Tipo de veneno \t\t\tCadeia de caracteres \t"<<m_tipo_veneno<<endl;
	os<<"Autorização do Ibama \t\tCadeia de caracteres \t"<<m_autorizacao_ibama<<endl;
	os<<"UF de origem \t\t\tCadeia de caracteres \t"<<m_uf_origem<<endl;
	return os;
};

void AracnideoNativo::inicializar_animal(int id){
	inicializar_aracnideo(id);
	inicializar_nativo();
};

void AracnideoNativo::alterar_animal(string atributo){
	alterar_aracnideo(atributo);
	alterar_nativo(atributo);
};