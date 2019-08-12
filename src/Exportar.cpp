#include "Controle.h"

using namespace std;

int main(int argc, char const *argv[])
{
	Controle controle;
	string * arg = new string[argc];
	string arquivo = "A";
	string id_Tratador = "A";
	string id_Veterinario = "A";
	string classe = "A";

	for (int i = 0; i < argc; i++){
		arg[i] = static_cast<string>(argv[i]);
	}

	if(argc == 1){
		cout << "É necessário o nome do documento csv onde serão exportadas os animais." << endl;
		return 0;
	}
	if (argc == 2 or ((arg[1] != "-c") and (arg[1] != "-v") and (arg[1] != "-t"))){
		arquivo = arg[1];
	}
	for (int i = 0; i < argc; i++){
		if((arg[i] == "-v") and (i < (argc - 1)) and (arg[i+1] != "-t" ) and (arg[i+1] != "-c")){
			id_Veterinario = arg[i + 1];
		}
		else if ((arg[i] == "-v")){
			cout << "Argumento inválido: -v" << endl;
			return 0;
		}
		if ((arg[i] == "-t") and (i < (argc - 1)) and (arg[i+1] != "-c" ) and (arg[i+1] != "-v")){
			id_Tratador = arg[i + 1];
		}
		else if (arg[i] == "-t"){
			cout << "Argumento inválido: -t" << endl;
			return 0;
		}
		if ((arg[i] == "-c") and (i < (argc - 1)) and (arg[i+1] != "-t" ) and (arg[i+1] != "-v")){
			classe = arg[i + 1];
		}
		else if ((arg[i] == "-c")) {
			cout << "Argumento inválido: -c" << endl;
			return 0;
		}
		if ((arg[i] == "-c") or (arg[i] == "-v") or (arg[i] == "-t")){
			if (i < (argc - 2)){
				if ((arg[i+2] != "-c") and (arg[i+2] != "-v") and (arg[i+2] != "-t")){
					arquivo = arg[i+2];
				}
			}
		}
	}

	if (arquivo == "A"){
		cout << "Nenhum nome de arquivo inserido." << endl;
		return 1;
	}

	controle.filtro(arquivo, classe, id_Tratador, id_Veterinario);

	delete[] arg;
	return 0;
}