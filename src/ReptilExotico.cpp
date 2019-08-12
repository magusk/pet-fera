#include "ReptilExotico.h"

ReptilExotico::ReptilExotico(){

}
ReptilExotico::ReptilExotico(int id, string nome_cientifico, char sexo, 
			double tamanho, string dieta, shared_ptr<Veterinario> veterinario, 
			shared_ptr<Tratador> tratador, string nome_batismo, bool venenoso,
			string tipo_veneno, string autorizacao_ibama, string pais_origem, string cidade_origem):
	Reptil(id, "Reptilia", nome_cientifico, sexo, tamanho, dieta, veterinario,
		tratador, nome_batismo, venenoso, tipo_veneno), 
	AnimalExotico(autorizacao_ibama, pais_origem, cidade_origem){

}
ReptilExotico::~ReptilExotico(){

}

void ReptilExotico::set_autorizacao_ibama(string autorizacao_ibama){
	m_autorizacao_ibama = autorizacao_ibama;
};

string ReptilExotico::write(){

	ostringstream str;
	str<<"ReptilExotico;";
	str<<m_id<<";";
	str<<m_classe<<";";
	str<<m_nome_cientifico<<";";
	str<<m_sexo<<";";
	str<<m_tamanho<<";";
	str<<m_dieta<<";";
	str<<m_veterinario->get_id()<<";";
	str<<m_tratador->get_id()<<";";
	str<<m_nome_batismo<<";";
	// Se é venenoso
	str<<m_venenoso<<";";
	// Tipo de veneno
	str<<m_tipo_veneno<<";";
	//Autorização do Ibama
	str<<m_autorizacao_ibama<<";";
	// País de origem
	str<<m_pais_origem<<";";
	// Cidade de origem
	str<<m_cidade_origem<<endl;

	return str.str();
};

string ReptilExotico::Tipo(){
	return "ReptilExotico";
};

ostream& ReptilExotico::print(ostream& os)const{
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
	os<<"Venenoso \t\t\tbooleano \t\t"<<m_venenoso<<endl;
	os<<"Tipo de veneno  \t\tCadeia de caracteres \t"<<m_tipo_veneno<<endl;
	os<<"Autorização do Ibama \t\tCadeia de caracteres \t"<<m_autorizacao_ibama<<endl;
	os<<"País de origem \t\tCadeia de caracteres \t"<<m_pais_origem<<endl;
	os<<"Cidade de origem \t\tCadeia de caracteres \t"<<m_cidade_origem<<endl;
	return os;
}

void ReptilExotico::inicializar_animal(int id){
	inicializar_reptil(id);
	inicializar_exotico();
};

void ReptilExotico::alterar_animal(string atributo){
	alterar_reptil(atributo);
	alterar_exotico(atributo);
};