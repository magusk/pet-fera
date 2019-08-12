#include "MamiferoNativo.h"

MamiferoNativo::MamiferoNativo(){

}
MamiferoNativo::MamiferoNativo(int id, string nome_cientifico, char sexo, 
			double tamanho, string dieta, shared_ptr<Veterinario> veterinario, 
			shared_ptr<Tratador> tratador, string nome_batismo, string cor_do_pelo, 
			string autorizacao_ibama, string uf_origem):
	Mamifero(id, "Mammalia", nome_cientifico, sexo, tamanho, dieta, veterinario,
		tratador, nome_batismo, cor_do_pelo), 
	AnimalNativo(autorizacao_ibama, uf_origem){

}
MamiferoNativo::~MamiferoNativo(){

}

void MamiferoNativo::set_autorizacao_ibama(string autorizacao_ibama){
	m_autorizacao_ibama = autorizacao_ibama;
};

string MamiferoNativo::write(){
	ostringstream str;
	str<<"MamiferoNativo;";
	str<<m_id<<";";
	str<<m_classe<<";";
	str<<m_nome_cientifico<<";";
	str<<m_sexo<<";";
	str<<m_tamanho<<";";
	str<<m_dieta<<";";
	str<<m_veterinario->get_id()<<";";
	str<<m_tratador->get_id()<<";";
	str<<m_nome_batismo<<";";
	// Cor dos pelos
	str<<m_cor_do_pelo<<";";
	//Autorização do Ibama
	str<<m_autorizacao_ibama<<";";
	// UF de origem
	str<<m_uf_origem<<endl;

	return str.str();
};

string MamiferoNativo::Tipo(){
	return "MamiferoNativo";
};

ostream& MamiferoNativo::print(ostream& os)const{
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
	os<<"Cor do pelo \t\t\tCadeia de caracteres \t"<<m_cor_do_pelo<<endl;
	os<<"Autorização do Ibama \t\tCadeia de caracteres \t"<<m_autorizacao_ibama<<endl;
	os<<"UF de origem \t\t\tCadeia de caracteres \t"<<m_uf_origem<<endl;
	return os;
}

void MamiferoNativo::inicializar_animal(int id){
	inicializar_mamifero(id);
	inicializar_nativo();
};

void MamiferoNativo::alterar_animal(string atributo){
	alterar_mamifero(atributo);
	alterar_nativo(atributo);
};