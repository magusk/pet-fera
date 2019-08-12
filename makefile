# makefile do projeto corrida de sapos
project_name = bin/PetFera

# Arquivos .o
o_archives = build/Funcionario.o build/Animal.o build/Tratador.o\
			 build/Veterinario.o build/Mamifero.o build/Anfibio.o build/Aracnideo.o build/date.o\
			 build/Reptil.o build/Ave.o build/Inseto.o build/Peixe.o build/AnfibioDomestico.o build/AnfibioNativo.o\
			 build/AnfibioExotico.o build/AracnideoDomestico.o build/AracnideoNativo.o\
			 build/AracnideoExotico.o build/InsetoDomestico.o build/InsetoNativo.o\
			 build/InsetoExotico.o build/MamiferoDomestico.o build/MamiferoNativo.o\
			 build/MamiferoExotico.o build/PeixeDomestico.o build/PeixeNativo.o\
			 build/PeixeExotico.o build/ReptilDomestico.o build/ReptilNativo.o \
			 build/ReptilExotico.o build/AveDomestica.o build/AveNativa.o build/AveExotica.o \
			 build/AnimalDomestico.o build/AnimalSilvestre.o build/AnimalNativo.o build/AnimalExotico.o \
			 build/Controle.o build/Tratamento.o build/TratamentoInput.o build/ExcecoesInput.o

o_lib_archives = build/_Funcionario.o build/_Animal.o build/_Tratador.o\
			 build/_Veterinario.o build/_Mamifero.o build/_Anfibio.o build/_Aracnideo.o build/_date.o\
			 build/_Reptil.o build/_Ave.o build/_Inseto.o build/_Peixe.o build/_AnfibioDomestico.o build/_AnfibioNativo.o\
			 build/_AnfibioExotico.o build/_AracnideoDomestico.o build/_AracnideoNativo.o\
			 build/_AracnideoExotico.o build/_InsetoDomestico.o build/_InsetoNativo.o\
			 build/_InsetoExotico.o build/_MamiferoDomestico.o build/_MamiferoNativo.o\
			 build/_MamiferoExotico.o build/_PeixeDomestico.o build/_PeixeNativo.o\
			 build/_PeixeExotico.o build/_ReptilDomestico.o build/_ReptilNativo.o \
			 build/_ReptilExotico.o build/_AveDomestica.o build/_AveNativa.o build/_AveExotica.o \
			 build/_AnimalDomestico.o build/_AnimalSilvestre.o build/_AnimalNativo.o build/_AnimalExotico.o \
			 build/_Controle.o build/_Tratamento.o build/_TratamentoInput.o build/_ExcecoesInput.o


# Compilador
cc=g++

# flags/ etiquetas para o Compilador
CC_FLAGS=-O0         \
         -Wall       \
         -g          \
         -std=c++11  \
         -I include   \

CC_LIB_FLAGS = -O0         \
         -Wall       \
         -c          \
         -std=c++11  \
         -I include   \
         -fPIC


text = 	"Como executar o programa: <make PetFera> ou <./bin/PetFera>"

#Os objetivos all, main.o e Sapo.o são para a compilação
all: $(project_name)
	@echo $(text)

$(project_name): $(o_archives) build/main.o
	$(cc) $(CC_FLAGS) $(o_archives) build/main.o -o $(project_name)

build/main.o: src/main.cpp
	$(cc) $(CC_FLAGS) src/main.cpp -c && mv main.o build

build/Funcionario.o: src/Funcionario.cpp
	$(cc) $(CC_FLAGS) src/Funcionario.cpp -c && mv Funcionario.o build

build/Animal.o: src/Animal.cpp
	$(cc) $(CC_FLAGS) src/Animal.cpp -c && mv Animal.o build

build/Tratador.o: src/Tratador.cpp
	$(cc) $(CC_FLAGS) src/Tratador.cpp -c && mv Tratador.o build
	
build/Veterinario.o: src/Veterinario.cpp
	$(cc) $(CC_FLAGS) src/Veterinario.cpp -c && mv Veterinario.o build

build/Mamifero.o: src/Mamifero.cpp
	$(cc) $(CC_FLAGS) src/Mamifero.cpp -c && mv Mamifero.o build

build/Inseto.o: src/Inseto.cpp
	$(cc) $(CC_FLAGS) src/Inseto.cpp -c && mv Inseto.o build

build/Anfibio.o: src/Anfibio.cpp
	$(cc) $(CC_FLAGS) src/Anfibio.cpp -c && mv Anfibio.o build

build/Aracnideo.o: src/Aracnideo.cpp
	$(cc) $(CC_FLAGS) src/Aracnideo.cpp -c && mv Aracnideo.o build

build/date.o: src/date.cpp
	$(cc) $(CC_FLAGS) src/date.cpp -c && mv date.o build

build/Reptil.o: src/Reptil.cpp
	$(cc) $(CC_FLAGS) src/Reptil.cpp -c && mv Reptil.o build

build/Ave.o: src/Ave.cpp
	$(cc) $(CC_FLAGS) src/Ave.cpp -c && mv Ave.o build

build/Peixe.o: src/Peixe.cpp
	$(cc) $(CC_FLAGS) src/Peixe.cpp -c && mv Peixe.o build

build/AnfibioDomestico.o: src/AnfibioDomestico.cpp
	$(cc) $(CC_FLAGS) src/AnfibioDomestico.cpp -c && mv AnfibioDomestico.o build

build/AnfibioNativo.o: src/AnfibioNativo.cpp
	$(cc) $(CC_FLAGS) src/AnfibioNativo.cpp -c && mv AnfibioNativo.o build

build/AnfibioExotico.o: src/AnfibioExotico.cpp
	$(cc) $(CC_FLAGS) src/AnfibioExotico.cpp -c && mv AnfibioExotico.o build

build/AracnideoDomestico.o: src/AracnideoDomestico.cpp
	$(cc) $(CC_FLAGS) src/AracnideoDomestico.cpp -c && mv AracnideoDomestico.o build

build/AracnideoNativo.o: src/AracnideoNativo.cpp
	$(cc) $(CC_FLAGS) src/AracnideoNativo.cpp -c && mv AracnideoNativo.o build

build/AracnideoExotico.o: src/AracnideoExotico.cpp
	$(cc) $(CC_FLAGS) src/AracnideoExotico.cpp -c && mv AracnideoExotico.o build

build/InsetoDomestico.o: src/InsetoDomestico.cpp
	$(cc) $(CC_FLAGS) src/InsetoDomestico.cpp -c && mv InsetoDomestico.o build

build/InsetoNativo.o: src/InsetoNativo.cpp
	$(cc) $(CC_FLAGS) src/InsetoNativo.cpp -c && mv InsetoNativo.o build

build/InsetoExotico.o: src/InsetoExotico.cpp
	$(cc) $(CC_FLAGS) src/InsetoExotico.cpp -c && mv InsetoExotico.o build

build/MamiferoDomestico.o: src/MamiferoDomestico.cpp
	$(cc) $(CC_FLAGS) src/MamiferoDomestico.cpp -c && mv MamiferoDomestico.o build

build/MamiferoNativo.o: src/MamiferoNativo.cpp
	$(cc) $(CC_FLAGS) src/MamiferoNativo.cpp -c && mv MamiferoNativo.o build

build/MamiferoExotico.o: src/MamiferoExotico.cpp
	$(cc) $(CC_FLAGS) src/MamiferoExotico.cpp -c && mv MamiferoExotico.o build

build/PeixeDomestico.o: src/PeixeDomestico.cpp
	$(cc) $(CC_FLAGS) src/PeixeDomestico.cpp -c && mv PeixeDomestico.o build

build/PeixeNativo.o: src/PeixeNativo.cpp
	$(cc) $(CC_FLAGS) src/PeixeNativo.cpp -c && mv PeixeNativo.o build

build/PeixeExotico.o: src/PeixeExotico.cpp
	$(cc) $(CC_FLAGS) src/PeixeExotico.cpp -c && mv PeixeExotico.o build

build/ReptilDomestico.o: src/ReptilDomestico.cpp
	$(cc) $(CC_FLAGS) src/ReptilDomestico.cpp -c && mv ReptilDomestico.o build

build/ReptilNativo.o: src/ReptilNativo.cpp
	$(cc) $(CC_FLAGS) src/ReptilNativo.cpp -c && mv ReptilNativo.o build

build/ReptilExotico.o: src/ReptilExotico.cpp
	$(cc) $(CC_FLAGS) src/ReptilExotico.cpp -c && mv ReptilExotico.o build

build/AveDomestica.o: src/AveDomestica.cpp
	$(cc) $(CC_FLAGS) src/AveDomestica.cpp -c && mv AveDomestica.o build

build/AveNativa.o: src/AveNativa.cpp
	$(cc) $(CC_FLAGS) src/AveNativa.cpp -c && mv AveNativa.o build

build/AveExotica.o: src/AveExotica.cpp
	$(cc) $(CC_FLAGS) src/AveExotica.cpp -c && mv AveExotica.o build

build/AnimalDomestico.o: src/AnimalDomestico.cpp
	$(cc) $(CC_FLAGS) src/AnimalDomestico.cpp -c && mv AnimalDomestico.o build

build/AnimalSilvestre.o: src/AnimalSilvestre.cpp
	$(cc) $(CC_FLAGS) src/AnimalSilvestre.cpp -c && mv AnimalSilvestre.o build

build/AnimalNativo.o: src/AnimalNativo.cpp
	$(cc) $(CC_FLAGS) src/AnimalNativo.cpp -c && mv AnimalNativo.o build

build/AnimalExotico.o: src/AnimalExotico.cpp
	$(cc) $(CC_FLAGS) src/AnimalExotico.cpp -c && mv AnimalExotico.o build

build/Controle.o: src/Controle.cpp
	$(cc) $(CC_FLAGS) src/Controle.cpp -c && mv Controle.o build

build/Tratamento.o: src/Tratamento.cpp
	$(cc) $(CC_FLAGS) src/Tratamento.cpp -c && mv Tratamento.o build

build/TratamentoInput.o: src/TratamentoInput.cpp
	$(cc) $(CC_FLAGS) src/TratamentoInput.cpp -c && mv TratamentoInput.o build

build/ExcecoesInput.o: src/ExcecoesInput.cpp
	$(cc) $(CC_FLAGS) src/ExcecoesInput.cpp -c && mv ExcecoesInput.o build

# Criar extrator
Exportar: $(o_archives) build/Exportar.o
	$(cc) $(CC_FLAGS) $(o_archives) build/Exportar.o -o Exportar

build/Exportar.o: src/Exportar.cpp
	$(cc) $(CC_FLAGS) src/Exportar.cpp -c && mv Exportar.o build

#Criação de biblioteca
PetFera.so: $(o_lib_archives)
	$(cc) -shared -o PetFera.so $(o_archives) && mv PetFera.so lib

build/_TratamentoInput.o: src/TratamentoInput.cpp
	$(cc) $(CC_LIB_FLAGS) src/TratamentoInput.cpp && mv TratamentoInput.o build

build/_Funcionario.o: src/Funcionario.cpp
	$(cc) $(CC_LIB_FLAGS) src/Funcionario.cpp && mv Funcionario.o build

build/_Animal.o: src/Animal.cpp
	$(cc) $(CC_LIB_FLAGS) src/Animal.cpp && mv Animal.o build

build/_Tratador.o: src/Tratador.cpp
	$(cc) $(CC_LIB_FLAGS) src/Tratador.cpp && mv Tratador.o build
	
build/_Veterinario.o: src/Veterinario.cpp
	$(cc) $(CC_LIB_FLAGS) src/Veterinario.cpp && mv Veterinario.o build

build/_Mamifero.o: src/Mamifero.cpp
	$(cc) $(CC_LIB_FLAGS) src/Mamifero.cpp && mv Mamifero.o build

build/_Inseto.o: src/Inseto.cpp
	$(cc) $(CC_LIB_FLAGS) src/Inseto.cpp && mv Inseto.o build

build/_Anfibio.o: src/Anfibio.cpp
	$(cc) $(CC_LIB_FLAGS) src/Anfibio.cpp && mv Anfibio.o build

build/_Aracnideo.o: src/Aracnideo.cpp
	$(cc) $(CC_LIB_FLAGS) src/Aracnideo.cpp && mv Aracnideo.o build

build/_date.o: src/date.cpp
	$(cc) $(CC_LIB_FLAGS) src/date.cpp && mv date.o build

build/_Reptil.o: src/Reptil.cpp
	$(cc) $(CC_LIB_FLAGS) src/Reptil.cpp && mv Reptil.o build

build/_Ave.o: src/Ave.cpp
	$(cc) $(CC_LIB_FLAGS) src/Ave.cpp && mv Ave.o build

build/_Peixe.o: src/Peixe.cpp
	$(cc) $(CC_LIB_FLAGS) src/Peixe.cpp && mv Peixe.o build

build/_AnfibioDomestico.o: src/AnfibioDomestico.cpp
	$(cc) $(CC_LIB_FLAGS) src/AnfibioDomestico.cpp && mv AnfibioDomestico.o build

build/_AnfibioNativo.o: src/AnfibioNativo.cpp
	$(cc) $(CC_LIB_FLAGS) src/AnfibioNativo.cpp && mv AnfibioNativo.o build

build/_AnfibioExotico.o: src/AnfibioExotico.cpp
	$(cc) $(CC_LIB_FLAGS) src/AnfibioExotico.cpp && mv AnfibioExotico.o build

build/_AracnideoDomestico.o: src/AracnideoDomestico.cpp
	$(cc) $(CC_LIB_FLAGS) src/AracnideoDomestico.cpp && mv AracnideoDomestico.o build

build/_AracnideoNativo.o: src/AracnideoNativo.cpp
	$(cc) $(CC_LIB_FLAGS) src/AracnideoNativo.cpp && mv AracnideoNativo.o build

build/_AracnideoExotico.o: src/AracnideoExotico.cpp
	$(cc) $(CC_LIB_FLAGS) src/AracnideoExotico.cpp && mv AracnideoExotico.o build

build/_InsetoDomestico.o: src/InsetoDomestico.cpp
	$(cc) $(CC_LIB_FLAGS) src/InsetoDomestico.cpp && mv InsetoDomestico.o build

build/_InsetoNativo.o: src/InsetoNativo.cpp
	$(cc) $(CC_LIB_FLAGS) src/InsetoNativo.cpp && mv InsetoNativo.o build

build/_InsetoExotico.o: src/InsetoExotico.cpp
	$(cc) $(CC_LIB_FLAGS) src/InsetoExotico.cpp && mv InsetoExotico.o build

build/_MamiferoDomestico.o: src/MamiferoDomestico.cpp
	$(cc) $(CC_LIB_FLAGS) src/MamiferoDomestico.cpp && mv MamiferoDomestico.o build

build/_MamiferoNativo.o: src/MamiferoNativo.cpp
	$(cc) $(CC_LIB_FLAGS) src/MamiferoNativo.cpp && mv MamiferoNativo.o build

build/_MamiferoExotico.o: src/MamiferoExotico.cpp
	$(cc) $(CC_LIB_FLAGS) src/MamiferoExotico.cpp && mv MamiferoExotico.o build

build/_PeixeDomestico.o: src/PeixeDomestico.cpp
	$(cc) $(CC_LIB_FLAGS) src/PeixeDomestico.cpp && mv PeixeDomestico.o build

build/_PeixeNativo.o: src/PeixeNativo.cpp
	$(cc) $(CC_LIB_FLAGS) src/PeixeNativo.cpp && mv PeixeNativo.o build

build/_PeixeExotico.o: src/PeixeExotico.cpp
	$(cc) $(CC_LIB_FLAGS) src/PeixeExotico.cpp && mv PeixeExotico.o build

build/_ReptilDomestico.o: src/ReptilDomestico.cpp
	$(cc) $(CC_LIB_FLAGS) src/ReptilDomestico.cpp && mv ReptilDomestico.o build

build/_ReptilNativo.o: src/ReptilNativo.cpp
	$(cc) $(CC_LIB_FLAGS) src/ReptilNativo.cpp && mv ReptilNativo.o build

build/_ReptilExotico.o: src/ReptilExotico.cpp
	$(cc) $(CC_LIB_FLAGS) src/ReptilExotico.cpp && mv ReptilExotico.o build

build/_AveDomestica.o: src/AveDomestica.cpp
	$(cc) $(CC_LIB_FLAGS) src/AveDomestica.cpp && mv AveDomestica.o build

build/_AveNativa.o: src/AveNativa.cpp
	$(cc) $(CC_LIB_FLAGS) src/AveNativa.cpp && mv AveNativa.o build

build/_AveExotica.o: src/AveExotica.cpp
	$(cc) $(CC_LIB_FLAGS) src/AveExotica.cpp && mv AveExotica.o build

build/_AnimalDomestico.o: src/AnimalDomestico.cpp
	$(cc) $(CC_LIB_FLAGS) src/AnimalDomestico.cpp && mv AnimalDomestico.o build

build/_AnimalSilvestre.o: src/AnimalSilvestre.cpp
	$(cc) $(CC_LIB_FLAGS) src/AnimalSilvestre.cpp && mv AnimalSilvestre.o build

build/_AnimalNativo.o: src/AnimalNativo.cpp
	$(cc) $(CC_LIB_FLAGS) src/AnimalNativo.cpp && mv AnimalNativo.o build

build/_AnimalExotico.o: src/AnimalExotico.cpp
	$(cc) $(CC_LIB_FLAGS) src/AnimalExotico.cpp && mv AnimalExotico.o build

build/_Controle.o: src/Controle.cpp
	$(cc) $(CC_LIB_FLAGS) src/Controle.cpp && mv Controle.o build

build/_Tratamento.o: src/Tratamento.cpp
	$(cc) $(CC_LIB_FLAGS) src/Tratamento.cpp && mv Tratamento.o build

build/_ExcecoesInput.o: src/ExcecoesInput.cpp
	$(cc) $(CC_LIB_FLAGS) src/ExcecoesInput.cpp && mv ExcecoesInput.o build

PetFera: $(project_name)
	./bin/PetFera

#Remove os arquivos .o da pasta
clean:
	rm -rf build/*.o

teste:
	rm -rf build/main.o