#include "AnfibioExotico.h"

AnfibioExotico::AnfibioExotico(){

}
AnfibioExotico::AnfibioExotico(int id, string nome_cientifico, char sexo, 
			double tamanho, string dieta, shared_ptr<Veterinario> veterinario, 
			shared_ptr<Tratador> tratador, string nome_batismo, int total_de_mudas,
			int day, int month, int year, string autorizacao_ibama, string pais_origem, string cidade_origem):
	Anfibio(id, "Amphibia", nome_cientifico, sexo, tamanho, dieta, veterinario,
	tratador, nome_batismo, total_de_mudas, day, month, year), 
	AnimalExotico(autorizacao_ibama, pais_origem, cidade_origem){

}
AnfibioExotico::~AnfibioExotico(){}

void AnfibioExotico::set_autorizacao_ibama(string autorizacao_ibama){
	m_autorizacao_ibama = autorizacao_ibama;
};

string AnfibioExotico::write(){
	ostringstream str;
	str<<"AnfibioExotico;";
	str<<m_id<<";";
	str<<m_classe<<";";
	str<<m_nome_cientifico<<";";
	str<<m_sexo<<";";
	str<<m_tamanho<<";";
	str<<m_dieta<<";";
	str<<m_veterinario->get_id()<<";";
	str<<m_tratador->get_id()<<";";
	str<<m_nome_batismo<<";";
	str<<m_total_de_mudas<<";";
	str<<m_ultima_muda<<";";
	//Autorização do Ibama
	str<<m_autorizacao_ibama<<";";
	// País de origem
	str<<m_pais_origem<<";";
	// Cidade de origem
	str<<m_cidade_origem<<endl;
	return str.str();
}

string AnfibioExotico::Tipo(){
	return "AnfibioExotico";
};

ostream& AnfibioExotico::print(ostream& os)const{
	os<<"Campo \t\t\t\tTipo de Dados \t\tValores"<<endl;
	os<<"Identificador Do animal    \tInteiro \t\t"<<m_id<<endl;
	os<<"Classe do animal \t\tCadeia de caracteres \t"<<m_classe<<endl;
	os<<"Nome científico do animal \tCadeia de caracteres \t"<<m_nome_cientifico<<endl;
	os<<"Sexo do animal \t\t\tCaractere \t\t"<<m_sexo<<endl;
	os<<"Tamanho média em métros \tDecimal \t\t"<<m_tamanho<<endl;
	os<<"Dieta Predominante \t\tCadeia de caracteres \t"<<m_dieta<<endl;
	os<<"Veterinário associado \t\tInteiro \t\t"<<m_veterinario->get_id()<<endl;
	os<<"Tratador responsável \t\tInteiro \t\t"<<m_tratador->get_id()<<endl;
	os<<"Nome de batismo \t\tCadeia de caracteres \t"<<m_nome_batismo<<endl;
	os<<"Total de mudas \t\t\tInteiro \t\t"<<m_total_de_mudas<<endl;
	os<<"Data da última muda \t\tclasse date \t\t"<<m_ultima_muda<<endl;
	os<<"Autorização do Ibama \t\tCadeia de caracteres \t"<<m_autorizacao_ibama<<endl;
	os<<"País de origem \t\tCadeia de caracteres \t"<<m_pais_origem<<endl;
	os<<"Cidade de origem \t\tCadeia de caracteres \t"<<m_cidade_origem<<endl;
	return os;
}

void AnfibioExotico::inicializar_animal(int id){
	inicializar_anfibio(id);
	inicializar_exotico();
};

void AnfibioExotico::alterar_animal(string atributo){
	alterar_anfibio(atributo);
	alterar_exotico(atributo);
};