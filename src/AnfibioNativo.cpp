#include "AnfibioNativo.h"

AnfibioNativo::AnfibioNativo(){

}
AnfibioNativo::AnfibioNativo(int id, string nome_cientifico, char sexo, 
			double tamanho, string dieta, shared_ptr<Veterinario> veterinario, 
			shared_ptr<Tratador> tratador, string nome_batismo, int total_de_mudas,
			int day, int month, int year, string autorizacao_ibama, string uf_origem):
	Anfibio(id, "Amphibia", nome_cientifico, sexo, tamanho, dieta, veterinario,
		tratador, nome_batismo, total_de_mudas, day, month, year),
	AnimalNativo(autorizacao_ibama, uf_origem){

}
AnfibioNativo::~AnfibioNativo(){}

void AnfibioNativo::set_autorizacao_ibama(string autorizacao_ibama){
	m_autorizacao_ibama = autorizacao_ibama;
};

string AnfibioNativo::write(){
	ostringstream str;
	str<<"AnfibioNativo;";
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
	// UF de origem
	str<<m_uf_origem<<endl;

	return str.str();

};

string AnfibioNativo::Tipo(){
	return "AnfibioNativo";
};

ostream& AnfibioNativo::print(ostream& os)const{
	os<<"Campo \t\t\t\tTipo de Dados \t\tValores"<<endl;
	os<<"Identificador Do animal   \tInteiro \t\t"<<m_id<<endl;
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
	os<<"UF de origem  \t\t\tCadeia de caracteres \t"<<m_uf_origem<<endl;
	return os;
}

void AnfibioNativo::inicializar_animal(int id){
	inicializar_anfibio(id);
	inicializar_nativo();
};

void AnfibioNativo::alterar_animal(string atributo){
	alterar_anfibio(atributo);
	alterar_nativo(atributo);
};