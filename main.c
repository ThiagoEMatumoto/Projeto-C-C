#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <STDIO.H> 


void titulo (){
	printf("            __   ____  __ __  _____  ____  _____                                                  \n");  
	printf("          /  ] /    T|  T  T/ ___/ /    T/ ___/                                                   \n"); 
	printf("         /  / Y  o  ||  |  (   \\_ Y  o  (   \\_                                                  \n");   
	printf("        /  /  |     ||  |  |\\__  T|     |\\__  T                                                 \n");   
	printf("       /   \\_ |  _  ||  :  |/  \\ ||  _  |/  \\ |                                                \n");    
	printf("       \\     ||  |  |l     |\\    ||  |  |\\    |                                                \n");   
	printf("        \\____jl__j__j \\__,_j\\___jl__j__j \\___j                                                \n");   
	printf("                                                                                                  \n");
	printf("                  ___                                                                             \n");
	printf("                 /  _]                                                                            \n");
	printf("                /  [_                                                                             \n");
	printf("               Y    _]                                                                            \n");  
	printf("              |   [_                                                                              \n");
	printf("              |     T                                                                             \n");
	printf("              l_____j                                                                             \n");
	printf("                                                                                                  \n");
	printf("    __   ___   ____    _____   ___   ___   __ __    ___  ____     __  ____   ____  _____          \n"); 
	printf("   /  ] /   \\ |    \\  / ___/  /  _] /   \\ |  T  T  /  _]|    \\   /  ]l    j /    T/ ___/      \n");    
	printf("  /  / Y     Y|  _  Y(   \\_  /  [_ Y     Y|  |  | /  [_ |  _  Y /  /  |  T Y  o  (   \\_         \n");  
	printf(" /  /  |  O  ||  |  | \\__  TY    _]|  Q  ||  |  |Y    _]|  |  |/  /   |  | |     |\\__  T        \n");    
	printf("/   \\_ |     ||  |  | /  \\ ||   [_ |     ||  :  ||   [_ |  |  /   \\_  |  | |  _  |/  \\ |      \n");      
	printf("\\     |l     !|  |  | \\    ||     Tl     |l     ||     T|  |  \\     | j  l |  |  |\\    |      \n");      
	printf("\\____j \\___/ l__j__j  \\___jl_____j \\__,_j \\__,_jl_____jl__j__j\\____j|____jl__j__j \\___j    \n");         
	return;                                                                                              
}


void limpa_tela(){
	system("pause");
	system("cls");
	return;
}


void linha_na_tela(){
	printf("--------------------------------------------------------------------------------------------\n"); 
	return;
}


void elenco(){
	printf("        ___________.__                              		\n");
	printf("       \\_   _____/|  |   ____   ____   ____  ____  		\n");
	printf("         |    __)_ |  | _/ __ \\ /    \\_/ ___\\/  _ \\ 	\n");
	printf("         |        \\|  |_\\  ___/|   |  \\  \\__(  <_> )	\n");
	printf("        /_________/|____/\\_____>___|__/\\_____>____/ 		\n");
	return;
}


void prefacio(){
	printf("				 ___ ___ ___  ___ //   __  _  _  	\n"); 
	printf("				| o \\ o \\ __|| __|/ \\ / _|| |/ \\ \n"); 
	printf("				|  _/   / _| | _|| o ( (_ | ( o )		\n"); 
	printf("				|_| |_|\\\\___||_| |_n_|\\__||_|\\_/ \n");
	return;
}


void causas_consequencias(){
	printf("  __   _   _ _  __  _   __   ___    __ _  _  _  __  ___ _   _ _  /^\\  _  _  __  _   _   __  	     	\n"); 
	printf(" / _| / \\ | | |/ _|/ \\ / _| | __|  / _/ \\| \\| |/ _|| __/ \\ | | || __|| \\| |/ _|| | / \\ / _| 		\n"); 
	printf("( (_ | o || U |\\_ \\ o |\\_ \\ | _|  ( (( o ) \\\\ |\\_ \\| _( o )| U || _| | \\\\ ( (_ | || o |\\_ \\ \n"); 
	printf(" \\__||_n_||___||__/_n_||__/ |___|  \\__\\_/|_|\\_||__/|___\\_,7|___||___||_|\\_|\\__||_||_n_||__/ 		\n"); 
	return;
}

void bug_final(){
	printf("0 1 0 1 1 0 1 1 V O C E 0 0 0 1 1 1 0 1 0 1 0 1 0 0 1 0 1 1 0 1 0 1 0 1 0 0 0 1 0 1 0 1 0 0 1 0 1 0 0 0 0 1 0 \n");
	printf("1 0 0 0 1 1 0 1 0 1 0 1 1 1 0 1 0 1 0 1 0 0 1 0 1 1 0 1 0 1 0 1 0 0 1 0 1 0 0 1 0 1 0 1 0 0 1 0 1 0 0 0 0 1 0 \n");
	printf("0 1 0 1 1 0 1 1 0 0 0 1 1 1 0 1 1 0 1 0 1 0 0 1 0 1 1 0 1 0 1 0 1 0 0 0 1 0 1 0 1 0 0 N A O 1 0 1 0 0 0 0 1 0 \n");
	printf("1 0 0 1 0 1 0 1 1 0 0 1 1 1 0 1 0 1 0 1 1 0 0 1 0 0 1 0 1 1 0 1 0 1 0 1 0 0 0 1 0 1 0 1 0 0 1 0 1 0 0 0 0 1 0 \n");
	printf("1 0 0 1 0 1 0 1 0 1 0 1 M E R E C E 0 1 0 1 0 1 0 0 1 0 1 1 0 1 0 1 0 1 0 0 0 1 0 1 0 1 0 0 1 0 1 0 0 0 0 1 0 \n");
	printf("0 0 1 1 0 1 0 1 1 0 1 0 1 1 0 1 0 1 0 1 0 0 1 0 1 1 0 0 1 0 1 1 0 1 0 1 0 0 0 1 0 1 0 1 0 0 1 0 1 0 0 0 0 1 0 \n");
	printf("0 1 0 1 1 0 1 1 0 0 0 1 1 1 0 1 0 1 0 0 1 0 1 1 0 1 0 1 0 1 0 0 0 1 0 1 0 1 0 0 1 0 1 0 0 P E R D A O 0 0 1 0 \n");
	printf("0 1 0 1 1 0 1 1 0 0 0 1 1 1 0 1 0 1 0 1 0 1 0 1 0 0 1 0 1 1 0 1 0 1 0 1 0 0 0 1 0 1 0 1 0 0 1 0 1 0 0 0 0 1 0 \n");
	printf("0 1 0 1 1 0 1 1 0 0 0 1 1 1 0 1 0 1 0 1 0 0 1 0 1 1 0 1 0 1 0 1 0 1 0 1 0 0 0 1 0 1 0 1 0 0 1 0 1 0 0 0 0 1 0 \n");
	printf("1 0 1 0 1 0 1 0 0 1 0 1 1 0 1 0 0 1 0 0 1 0 1 0 1 0 1 0 0 1 0 1 1 0 1 0 0 1 0 1 0 1 1 0 1 0 1 0 1 1 0 1 0 0 0 \n");
	return;
}




int main(int argc, char *argv[]) {
	
	char nome[15];
	char opc;
	
	//////////////////////////////////
	// 1°QUADRO 
	//////////////////////////////////
	
	setlocale(LC_ALL,"Portuguese");
	
	//////////////////////////////////
	// COLOCAR NOME DO JOGADOR
	//////////////////////////////////
	
	titulo();
	limpa_tela();
	printf("\n");
	printf("Informe o nome do seu personagem [até 15 caracteres]-> ");
	gets(nome);
	printf("\n");
	
	///////////////////////////////////////
	// ELENCO DOS PERSONAGENS DA HISTÓRIA 
	///////////////////////////////////////

	elenco();
	linha_na_tela();                                                
	printf("\n");
	printf("%s - rico ranzinza \n", nome);
	printf("Nathan Souza - mordomo da casa \n");
	printf("Maria Clara - chefe das empregadas \n");
	printf("Jisele Mendes - nova empregada \n");
	linha_na_tela();    
	limpa_tela();	
	
	//////////////////////////////////
	// PREFÁCIO
	//////////////////////////////////
	int dificuldade = 0;
	
	linha_na_tela();  	
	prefacio();                  
	linha_na_tela();    
	printf("Você, %s, é um homem rico, ranzinza e carrega um grande amargor pela vida.\n ", nome);
	printf("Mora em uma enorme mansão e possui muitos funcionários. Por não ter empatia exige que seus \n");
	printf("Funcionários fiquem até antes de você dormir e estejam na mansão antes que você acorde.\n");
	printf("Um dia, quando mal-humorado, libera seus funcionários no meio da madrugada e começa a fazer \n");
	printf("sua rotina antes de dormir... \n");
	printf("Antes de entrar em seu quarto, vai em direção ao cofre de sua casa \n");
	printf("Para abrir o cofre será necessário descobrir o número secreto: \n");
	do {
	linha_na_tela();   
	printf("Escolha o nível de segurança do cofre: \n");
	printf("[1] -> Fácil \n");
	printf("[2] -> Médio \n");
	printf("[3] -> Difícil \n");
	scanf("%d", &dificuldade);
	system("cls");
	} while (dificuldade!=1 && dificuldade!=2 && dificuldade!=3);
	/////////////////
	// CONFIGURANDO A RAND PARA NÚMEROS ALEATÓRIOS
	//////////////////////////////////////////////	
	int segundos = time(0);
	
	srand(segundos);
	
	int numero_tentativas = 0;
	
	switch (dificuldade){
		case 1 :
			numero_tentativas = 20;
			break;
		
		case 2 :
			numero_tentativas = 12;
			break;
		
		case 3 :
			numero_tentativas = 6;
			break;
		
		default :
			system("color 4");
			printf("Erro 002 - dificuldade não econtrada \n");
			break;
		
	}
		
	int auxiliar = rand();
	
	int valor = auxiliar % 100;
	
	int chute, i;
	
		//////////////////////
		// DINAMICA DO JOGO
		//////////////////////	
	for (i = 1; i<=numero_tentativas; i++ ){
		
		printf("Está é sua %d° tentativa de %d \n", i, numero_tentativas);
		printf("Qual o número do cofre -> ");
		scanf("%d", &chute);
	
		if (chute < 0){
			printf("Numero inválido -> colocar um valor maior que 0 \n");
			i --;
			limpa_tela();
			continue;
		}
			///////////////////////////////
			//  VITÓRIA OU DERROTA
			//////////////////////////////
		if (chute == valor){
			printf("Você observou sua riqueza, uma quatidade inestimada de ouro \n");
			printf("e lembra do quanto custou para ter esse dinheiro. \n");
			printf("De maneira incociente sua conciência pesa, mas segue sua rotina. \n");
			printf("Você fecha o cofre e segue para o seu quarto \n");
			linha_na_tela();
			limpa_tela();
			break;
		} else {
			if (chute < valor){
				printf("Coloque um valor mais alto \n");
				limpa_tela();
			}	
			if (chute > valor){
				printf("Coloque um valor mais baixo \n");
				limpa_tela();
			} 
		}
	
	}

	if (chute != valor){
		
		printf("As vezes é o sono, com a idade a memória fica fraca \n");
		printf("Quem sabe no dia seguinte consiga abrir novamente \n");
		linha_na_tela();
		limpa_tela();
	}
	//////////////////////////////////
	// 2°QUADRO 
	//////////////////////////////////

	linha_na_tela();    
	causas_consequencias();
	linha_na_tela();    
	printf("Você depois de mais um dia seguindo sua vida normalmente, com todo seu \n");
	printf("amargor pelos outros. Decide deitar-se e pensar no decorrer da sua vida \n");
	printf("e as coisas que te preocupam talvez seja um sintoma da idade...\n");
	printf(" Mas você não para de pensar. \n");
	printf("O que faz a sua conciência pesar ?\n");
	linha_na_tela();   
	limpa_tela();

	//////////////////////////////////
	// VALIDAÇÃO DE ESCOLHA
	//////////////////////////////////
	do {
		linha_na_tela();   
		printf("Você, %s, deseja ir para:\n", nome);
		printf("a-) Futuro\n");
		printf("b-) Passado\n");
		printf("c-) Presente\n");
		scanf("%c", &opc);
		system("cls");
	} while (opc!='a' && opc!='b' && opc!='c');
	
	switch(opc){
	case'a':
		linha_na_tela();    
		printf("Você decidiu ir ao futuro\n");
		linha_na_tela();    
		limpa_tela();
		linha_na_tela();    
		printf("Você leva sua pesada consciência ao travesseiro e dormece \n");
		printf("Sua consciência se perde mas volta rapidamente\n");
		printf("O brilho do dia clareia sua visão \n");
		printf("O cansaço e a sensação de não ter dormido é grande.\n");
		printf(" Ao lado de sua cama dura e rangente está Maria Clara, chefe das empregadas \n");
		linha_na_tela();   
		limpa_tela();
		break;
	case'b':
		linha_na_tela();    
		printf("Você decidiu ir ao passado\n");
		linha_na_tela();    
		limpa_tela();
		linha_na_tela();    
		printf("Você leva sua pesada consciência ao travesseiro e adormece \n");
		printf("Sua consciência se perde mas volta rapidamente\n");
		printf("O brilho do dia clareia sua visão \n");
		printf("O cansaço e a sensação de não ter dormido é grande.\n");
		printf("Ao lado de sua macia, seu mordomo e amigo de infância, Nathan. \n");
		linha_na_tela();   
		limpa_tela();
		break;
	case'c':
		linha_na_tela();   
		printf("Você decidiu ficar no presente\n");
		linha_na_tela();    
		limpa_tela();
		linha_na_tela();   
		printf("Você leva sua pesada consciência ao travesseiro e adormece\n");
		printf("Sua consciência se perde mas volta rapidamente\n");
		printf("O brilho do dia clareia sua visão \n");
		printf("O cansaço e a sensação de não ter dormido é grande.\n");
		printf("Tudo está como deveria ser, uma única coisa não estava normal. \n");
		printf("Ao lado de sua cama estava sua nova funcionária, Jisele. \n");
		linha_na_tela();    
		limpa_tela();
		break;
	default:
		printf("Erro 201 - variável não encontrada \n");
		return 0;
		break;
	}
	
	//////////////////////////////////
	// 3°QUADRO 
	//////////////////////////////////
		printf("Você não se importa com a pessoa que está ao lado de sua cama \n");
		printf("A sensação de não ter dormido o irrita \n");
		printf("Ei! Você que está parado, me traga uma água agora \n");
	
	
	//////////////////////////////////
	// 4°QUADRO 
	//////////////////////////////////
		printf("No entanto a figura rapidamente responde:\n");
	switch(opc){
		
	case'a': 
		linha_na_tela();    
		printf("Maria Clara: Pois pegue você! Escória! Pensa que sou sua funcionária?\n");
		linha_na_tela();   
		limpa_tela();
		break;
		
	case'b':
		linha_na_tela();    
		printf("Nathan: Você não era assim, o que aconteceu com você ?\n");
		linha_na_tela();   
		limpa_tela();
		break;
	
	case'c':
		linha_na_tela();    
		printf("Jisele: Bem que falaram o quanto você era um bicho preguiça!\n");
		linha_na_tela();   
		limpa_tela(); 
		break;
	
	default:
		system("color 4");
		printf("Erro 401 - variável inválida \n");
		return 0;
		break;
	}
	
	//////////////////////////////////
	// 5°QUADRO 
	//////////////////////////////////
	
	switch(opc){
		
	case'a': 
		linha_na_tela();    
		printf("%s: Que atrevimento é esse? Te coloco na rua sem pensar duas vezes!\n", nome);
		printf("Maria Clara: Atrevimento são suas atitudes!\n");
		printf("Maria Clara: Não percebe nem com quem está falando %s!\n", nome);
		printf("Maria Clara: Olhe para a sua volta, você não está no lugar que estava antes\n");
		linha_na_tela();    
		limpa_tela();
	break;
	
	case'b':
		linha_na_tela();    
		printf("%s: Exato, seja rápido e sem problemas no caminho, essa fase já se foi\n", nome);
		printf("Nathan: Já se foi? Não sente esse cheiro nostálgico no ar ? %s\n", nome);
		printf("Nathan: Consegue escutar esse som ? Não percebe ? \n");
		printf("Nathan: Por que não saímos um pouco lá fora \n");	
		linha_na_tela();    
		limpa_tela();
	break;
	
	case'c':
		linha_na_tela();   
		printf("%s: Acha que só por que você é nova aqui não te expulso? Já que me conhece bem, deveria saber!\n", nome);
		printf("Jisele: Arrogante, cego e inconsequente, exatamente como falam. \n");
		printf("Jisele: Não consegue nem diferenciar o que mudou a sua volta. \n");
		linha_na_tela();    
		limpa_tela();
	break;
	
	default:
		system("color 4");
		printf("Erro 501 - variável inválida \n");
		return 0;
		break;
	}

	///////////////////////////////////
	// 6°QUADRO 
	//////////////////////////////////
	switch(opc){
		
	case'a': 
		linha_na_tela();    
		printf("%s: O QUE ACONTECEU COM MINHA CASA? POR QUE ELA ESTÁ DESTRUIDA? \n", nome);
		printf("Maria Clara: Por enquanto? nada..Mas é o destino dela, caso tudo continue igual\n");
		printf("Maria Clara: Talvez eu devesse te alertar que tudo é culpa sua, mas voce já sabe\n");
		printf("Maria Clara: Pare de tentar se esconder atrás de mentiras\n");
		printf("%s: Como eu iria saber? \n", nome);
		printf("Maria Clara: Você se conhece melhor que ninguém, não serei eu que irei explicar\n");
		printf("Maria Clara: Aceitará o futuro, ou irá enfrentá-lo?\n");
		linha_na_tela();   
		limpa_tela();
	break;
	
	case'b':
		linha_na_tela();   
		printf("%s: Ma-Mas que lugar é esse?", nome);
		printf("Nathan: Não reconhece? Não sente cheiro de infância? O som do sorveteiro na esquina \n", nome);
		printf("Nathan: Vamos ouça! Os carros tão raros, mas a paisagem tão incrível\n");
		printf("Nathan: Não sente saudade não é? Tudo antes era mais colorido e foi ficando mais cinza\n");
		printf("Nathan: Inclusive você, não acha?\n");
		printf("Nathan: Se você não sente saudade de quem você já foi, talvez sinta dessa antiga vizinhança\n");
		printf("Nathan: Tudo mais colorido, sem dores, apenas nós dois na rua brincando\n");	
		printf("Nathan: Você sente falta?\n");
		linha_na_tela();    
		limpa_tela();
	break;
	
	case'c':
		linha_na_tela();   
		printf("%s: Mas nada mudou!\n", nome);
		printf("Jisele: Olhe novamente \n");
		printf("Jisele: Percebe? Sua casa está indo rumo ao fim, bem como você \n");
		printf("%s: Mas minha casa...como?\n", nome);
		printf("Jisele: Suas ações levaram a isso! Tudo que vier a acontecer a SUA casa\n");
		printf("SEUS funcionários e SUAS relações, são culpa sua, não percebe? \n");
		printf("Jisele: Não deseja a mudança, %s ? \n", nome);
		linha_na_tela();    
		limpa_tela();
	break;
		
	default:
		system("color 4");
		printf("Erro 601 - variável inválida \n");
		return 0;
		break;
	}

	//////////////////////////////////
	// 7°QUADRO 
	//////////////////////////////////	
	
	int decisao;
	
	printf("Talvez o que os fantasma tentam te falar, possuam algum fundo de razão\n");
	printf("Pensar nunca foi seu forte, do contrário, não estaria aqui\n");
	printf("Você aceita o que o fantasma te fala?\n");
	printf("[1] Sim \n");
	printf("[2] Não \n");
	scanf("%d", &decisao );

	switch(opc){
		
	case 'a':  
		linha_na_tela();   
		if (decisao == 1) {
			printf("%s: Sinto muito por ter te colocado nessa situação Maria \n", nome);
			printf("%s: Agradeço pelos seus esforços dentro de minha casa \n", nome);
		}
		if (decisao == 2){
			printf("%s: Isso é mentira sua, brincadeira de mal gosto \n", nome);
			printf("%s: É tudo asneiras! Tipico de gente de sangue ruim \n", nome);
		}
		linha_na_tela();    
		limpa_tela();
	break;
	
	case 'b':
		linha_na_tela();    
		if (decisao == 1){
			printf("%s: Me tornei desse jeito para me proteger \n", nome);
			printf("%s: Não foi minha intenção mudar nossa amizade, sinto falta da gente \n", nome);
			printf("%s: Nathan, não te afastei por querer, perdão.\n", nome);
		}
		
		if (decisao == 2){
			printf("%s: Me tornei desse jeito para me proteger \n", nome);
			printf("%s: Você não entende, era necessário !\n", nome);
			printf("%s: O que vivemos ficou no passado! \n", nome);	
		}
		
		linha_na_tela();   
		limpa_tela();
	break;
	
	case 'c':
		linha_na_tela();  
		if (decisao == 1){
			printf("%s: Não tive um passado fácil Jisele\n", nome);
			printf("%s: Mas também não posso descontar o que aconteceu em vocês\n", nome);
			printf("%s: Desculpa por causar transtornos em suas vidas\n", nome);	
		}
		
		if (decisao == 2){
			printf("%s: Mas o que você tem a ver com as minhas ações\n", nome);
			printf("%s: O que tudo isso tem a ver comigo? É tudo culpa de vocês! \n", nome);
			printf("%s: Ponha-se em seu lugar Jisele\n", nome);	
		}
		
		linha_na_tela();   	
		limpa_tela();
	break;
	
	default:
		system("color 4");
		printf("Erro 701 - variável inválida \n");
		return 0;
		break;
	}

	//////////////////////////////////
	// 8°QUADRO 
	//////////////////////////////////
		linha_na_tela();  
		printf("Mas e você? \n");
		linha_na_tela();  
		limpa_tela();
		linha_na_tela();  
		printf("Mudou para chegar onde chegou? \n");
		linha_na_tela();  	
		limpa_tela();
		linha_na_tela();  
		printf("Você se arrepende das mudanças? \n");
		linha_na_tela();  
		limpa_tela();
		linha_na_tela();  
		printf("Sente falta do passado? \n");
		linha_na_tela();  
		limpa_tela();
		linha_na_tela();  
		printf("O que te custou suas mudanças? \n");
		linha_na_tela();  	
		limpa_tela();
		
	//////////////////////////////////
	// 9°QUADRO 
	//////////////////////////////////
	int pergunta;
	 	
	switch(opc){
		
	case'a':  
		linha_na_tela();  
		if (decisao == 1){
			printf("Maria Clara: Até me emociona sua auto-reflexão \n");
			printf("Maria Clara: Mas isso não muda aquilo que você fez \n");	
			printf("Maria Clara: Mas é um passo, para quem saber mudar o que você vê em sua volta\n");
			printf("Maria Clara: Te dou o direito a uma pergunta, pense bem ao escolher: \n");
			printf("[1] -> Como faço para sair daqui? \n");
			printf("[2] -> Tudo aqui é real? \n");
			printf("[3] -> Eu estou morto? \n");
			scanf("%d", &pergunta);
			limpa_tela();
			break;
		}
		
		if (decisao == 2){
			printf("Maria Clara: Por0 1  qu 0e eu1 0 0 espera1va algo d0e você? \n");
			printf("Maria Clara: A 0 1 c 1 h 0 q0 1 ue 0 err0 es1 0 1tá 0e 1 0m 1 0m 1m, maldição %s !\n", nome);	
			printf("Maria Clara: 1 0 0 1z 1 0 e s0 1 1 a1 0ch 1e foi 1 0 1 1 1 0, foi p1 0 o 1 0 d 1 es1 0 1dício...\n");	
			bug_final();
			return 0;	
		}
		
		linha_na_tela();    
		limpa_tela();
	break;
	
	case'b':
		linha_na_tela();    
		if (decisao == 1){
			printf("Nathan: Escute a voz da razão!\n");
			printf("Nathan: O que passou, passou, o que importa é o agora, e o que você pode \n");
			printf("Nathan: fazer hoje, o passado já foi, e o futuro ainda não chegou. \n");	
			printf("Nathan: Mas já fico feliz por você perceber, e por tentar melhorar. \n");	
			printf("Nathan: Será que posso te ajudar? Você tem alguma pergunta ? \n");
			printf("[1] -> Como faço para sair daqui? \n");
			printf("[2] -> Tudo aqui é real? \n");
			printf("[3] -> Eu estou morto? \n");
			scanf("%d", &pergunta);
			limpa_tela();
			break;
			
		}
		
		if (decisao == 2)	{
			printf("Nathan: M 0 1as que c0 beça 0ca %s !\n", nome);
			printf("Nathan: Q 0u 1 0 1an 1tas 0 0 1 0veze 1 0s v0 ê precisa 1 0 1 0 0 errar?\n");
			printf("Nathan: 1 0 0 d0 qu0 ac0nt 1 c 1 u f01 culp 1 0 1 1 sua!\n");	
			printf("Nathan: 1 1 1 0 d 1 sp1 rd1 ce1  meu t 1 p 0  1aqui?\n");
			bug_final();
			return 0;
		}
		
		linha_na_tela();   
		limpa_tela();
	break;
	
	case'c':
		linha_na_tela();  
		if (decisao == 1){
			printf("Jisele: Finalmente um pouco de bom senso do patrão, hein! \n");
			printf("Jisele: Cometemos erros sim %s\n", nome);
			printf("Jisele: Mas continuar neles é burrice\n");
			printf("Jisele: Fico feliz que tenha pensado um pouco mais\n");
			printf("Jisele: Quem sabé há esperança... você têm alguma pergunta? \n");
			printf("[1] -> Como faço para sair daqui? \n");
			printf("[2] -> Tudo aqui é real? \n");
			printf("[3] -> Eu estou morto? \n");
			scanf("%d", &pergunta);
			limpa_tela();
			break;
		}
		
		if (decisao == 2)	{
			printf("Jisele: Nã0 1 0 vê a s 1 tuaçã 0 1m qu1 s1 encontra?!\n");
			printf("Jisele: 1 0 1 1 pr 1 c1 0 1 sava tanto de d 1 0 nhe 1 0r 0 qu1 0 m 1 0 sujeitei a isso?\n");
			printf("Jisele: 1 0 1 1 1n 0 ao0 0 1 0 1 1 0  a 1 0gu 0 0ent 1 1o m 1 0 1s!\n");
			bug_final();
			return 0;
		}
		
		linha_na_tela();   	
		limpa_tela();
	break;
	
	default:
		system("color 4");
		printf("Erro 701 - variável inválida \n");
		return 0;
		break;
	}

	//////////////////////////////////
	// 10°QUADRO 
	//////////////////////////////////

	switch(opc){
		
	case'a':  
		linha_na_tela();  
		if (pergunta == 1){
			printf("Maria Clara: Sair da onde? Você não foi em nenhum lugar \n");
			printf("Maria Clara: Você continua  no mesmo lugar em que sempre esteve \n");	
		}
			
		if (pergunta == 2){
			printf("Maria Clara: Tudo aquilo que é real está a um passo de transformar-se em irreal \n");
			printf("Maria Clara: Tudo aquilo que é irreal está a um passo se transformar-se em real \n");
			printf("Maria Clara: No fim são só detalhes \n");
		}
		if (pergunta == 3){
			printf("Maria Clara: A morte é um eterno estado de negação \n");
		
		}
		linha_na_tela();    
		limpa_tela();
	break;
	
	case'b':
		linha_na_tela();    
		if (pergunta == 1){
			printf("Nathan: Sair? Não é possível fugir do seu passado \n");
			printf("Nathan: Estara sempre com você, faz parte do seu ser \n");
			printf("Nathan: Não é possível sair de si mesmo \n");
		}
				
		if (pergunta == 2)	{
			printf("Nathan: Depende, qual a sua relação com o seu passado ? \n");
			printf("Nathan: Quanto a sua visão sobre as coisas se aproximam da realidade ?\n");
			printf("Nathan: Você decide se isso tudo foi real ou não \n");		
		}

		if (pergunta == 3){
			printf("Nathan: A morte é um eterno estado de negação \n");
		}
		linha_na_tela();   
		limpa_tela();
	break;
	
	case'c':
		linha_na_tela();  
		if (pergunta == 1){
			printf("Jisele: Pensei que a casa fosse sua \n");
			printf("Jisele: Não sabe a saída da própria casa ?\n");
			
		}
			
		if (pergunta == 2)	{
			printf("Jisele: Como não poderia ser ? Melhor perguntando... \n");
			printf("Jisele: Essa é a sua realidade ? \n");
		}
			
		if (pergunta == 3){
			printf("Jisele: A morte é um eterno estado de negação \n");
		}
		
		linha_na_tela();   	
		limpa_tela();
	break;
	
	default:
		system("color 4");
		printf("Erro 1001 - variável inválida \n");
		return 0;
		break;
	}
	

	//////////////////////////////////
	// 11°QUADRO 
	//////////////////////////////////
 
	linha_na_tela(); 
 	//Como a resposta dos fantasmas serão sempre vagas, a reação mudar seria meio ?????
 	printf("Mas que droga de respostas são essas?\n");
 	printf("Isso nem sequer faz sentido!\n");
 	linha_na_tela();  
	limpa_tela();
	printf("Na verdade...será que eles me entenderam?\n");
	linha_na_tela(); 
	limpa_tela();

 
 
	//////////////////////////////////
	// 12°QUADRO 
	//////////////////////////////////
	int irritar;
	
	linha_na_tela(); 
	printf("Você não sente que já passou tempo demais aqui?\n");
	printf("Tanto tempo para nada? isso não te aborrece?\n");
	printf("Você não quer sair daqui? Essa angústia que não passa\n");
	printf("Sair daqui...Nem que seja por mal\n");
	printf("Ninguem te diz nada aqui...Você se irrita?\n");
	printf("[1] Sim, me irrito\n");
	printf("[2] não, talvez eu devesse pensar melhor\n");
	scanf("%d", &irritar);
	
	switch(opc){
		
	case 'a':  
		linha_na_tela();  
		if (irritar == 1){
			printf("%s: Mas que desgraça! Nada aqui presta!\n", nome);
			printf("%s: Achei que você Maria, estaria aqui para me ajudar!\n", nome);
			printf("%s: Que você suma daqui!\n", nome);
		}
		
		if (irritar == 2)	{
			printf("%s: Maria...Pensamentos vem e vão, mas você acha que...\n", nome);
			printf("%s: Existem coisas imperdoáveis?\n", nome);
		}		
	break;
	
	case 'b':
		linha_na_tela();    
		if (irritar == 1){
			printf("%s: Diga-me Nathan! Que raio de situação é essa?\n", nome);
			printf("%s: Você era para ser meu amigo! Não o oposto!\n", nome);
			printf("%s: Desde que cheguei aqui não ouvi nada de útil!\n", nome);
			printf("%s: Que você suma!\n", nome);	
		}
			
		if (irritar == 2){	
			printf("%s: Velho amigo...O tempo não foi generoso comigo\n", nome);
			printf("%s: Obrigado por sempre ter estado comigo, mesmo nos piores momentos!\n", nome);
		}
	break;
	
	case 'c':
		linha_na_tela();  
		if (irritar == 1 ){
			printf("%s: Quanta baboseira vinda de uma novata! Não suporto você!\n", nome);
			printf("%s: Só me surgem desgraças! Até mesmo nessa idade!\n", nome);	
		}
		
		if (irritar == 2){
			printf("%s: Haha..Até mesmo alguém nova aqui é capaz de me ajudar, não é?\n", nome);
			printf("%s: Não há motivo para fúria...Acho que já entendi...Ou pelo menos acho!\n", nome);
		}
	break;
	
	default:
		system("color 4"); 
		printf("Erro 1201 - variável inválida \n");
		return 0;
	break;
		linha_na_tela();    
		limpa_tela();
	}
	//////////////////////////////////
	// 13°QUADRO 
	//////////////////////////////////


	switch(opc){
		
		case'a': 
			linha_na_tela();    
			printf("%s: Mas em fim, me responda logo \n", nome);
			printf("%s: Como cheguei nessa situação?...\n", nome);
			printf("Maria Clara: Me diga você, já te aguentei tanto! Mesmo te odiando\n");
			printf("Maria Clara: Foi insuportável!\n");
			printf("Maria Clara: Você sempre me maltratou, mas fui a única que segui sem hesitar\n");		
			printf("Maria Clara: valeria a pena se arrepender realmente?\n");
			printf("Maria Clara: Acho que você não tem um coração capaz de sentir pena\n");
			linha_na_tela();    
			limpa_tela();
		break;
		
		case'b':
			linha_na_tela();    
			printf("%s: Mas em fim, me responda logo \n", nome);
			printf("%s: Que fundo de poço é esse?? \n", nome);
			printf("Nathan: Respire fundo, velho amigo! Só não podemos mudar quem somos \n", nome);
			printf("Nathan: Quando morremos, até lá você tem tempo para refletir \n");
			printf("Nathan: Uma sensação diferente inunda seu peito, como se sente?\n");
			printf("Nathan: está aberto a mudanças? \n");
			linha_na_tela();   
			limpa_tela();
		break;
		
		case 'c':
			linha_na_tela();   
			printf("%s: Mas enfim, me responda logo \n", nome);
			printf("%s: Como?...Tudo isso ocorreu?...\n", nome);
			printf("Jisele: Tudo parecia melhor quando comecei a trabalhar, mas não era assim\n");
			printf("Jisele: Você parecia ser uma boa pessoa e não esse monstro, fui enganada?\n");
			printf("Jisele: Passei por poucas e boas, e hoje já não sei se quero continuar\n");
			printf("Jisele: Isso me enoja\n");
			linha_na_tela();  
			limpa_tela();
		break;
	
		default:
			system("color 4");
			printf("Erro 1301 - variável inválida \n");
			return 0;
		break;
	}
	
	//////////////////////////////////
	// 14°QUADRO 
	//////////////////////////////////
		linha_na_tela();
	printf(" No fim... Somos todos humanos \n");
	linha_na_tela();
	limpa_tela();
	printf(" Não somos perfeitos, nos adaptamos às necessidades \n");	
	linha_na_tela();
	limpa_tela();
	linha_na_tela();
	printf(" Mas os fins justificam os meios ? \n");	
	linha_na_tela();
	limpa_tela();
	linha_na_tela();
	printf(" O passado nos tornou o que somos hoje \n");	
	linha_na_tela();
	limpa_tela();
	linha_na_tela();
	printf(" O futuro é reflexo do fazemos hoje  \n");	
	linha_na_tela();
	limpa_tela();
	linha_na_tela();
	printf(" O hoje é aquilo que a gente pode controlar mas é onde a gente menos enxerga \n");	
	linha_na_tela();
	limpa_tela();
	linha_na_tela();
	printf(" Mas existe espaço para o arrependimento ?  \n");	
	printf(" Mas arrependimento pelo que ? \n");
	printf(" O ontem é o hoje de antigamente, e o futuro é hoje de amanhã \n");
	printf(" No fim, concordamos, o arrependimento é apenas do hoje que já que virá \n");
	linha_na_tela();
	limpa_tela();
	linha_na_tela();
	printf(" Demoramos para refletir e entender nossos erros \n");	
	printf(" No fim, nos perguntamos - Por que só agora ? \n");
	printf(" Por quê não ontem? Já é tarde de mais \n");
	printf(" Por que não amanhã? Prorrogar a reflexão \n");
	linha_na_tela();
	limpa_tela();
	linha_na_tela();
	printf(" No fim, dói, não é ? \n");	
	printf(" De qualquer maneira vai doer \n");
	linha_na_tela();
	limpa_tela();
	linha_na_tela();
	printf(" A dor de uma ferida aberta\n");	
	printf(" Uma ferida mal curada, sangra  \n");
	printf(" Mas só sangra em cima de quem não tem culpa de nada \n");
	printf(" E manchamos os outros com nosso sangue de feridas mal cicatrizadas \n");
	linha_na_tela();
	limpa_tela();
	linha_na_tela();
	printf(" Merecemos uma segunda chance? \n");
	printf("[1] Sim \n");
	printf("[2] Não \n");
	scanf("%d", &decisao );
	limpa_tela();
	//////////////////////////////////
	// 15°QUADRO 
	//////////////////////////////////
	if (decisao == 1){
		linha_na_tela();  
		printf(" A auto piedade é um grande passo para conseguir seguir em frente \n");
		printf(" Perdoar-se é o momento mais difícil da trajetória \n");
		linha_na_tela();  
		limpa_tela();
		printf("  Toc\n");
		linha_na_tela();  
		limpa_tela();
		printf("  Toc Toc\n");
		linha_na_tela();  
		limpa_tela();
		printf("  Toc Toc toc \n");
		linha_na_tela();  
		limpa_tela();
		printf("Maria Clara: Bom dia, senhor %s  \n", nome);
		printf("Maria Clara: Já 11 horas, o senhor deve estar com fome \n");
		printf("Maria Clara: Estamos esperando suas ordens  \n");
	}
		
	if (decisao == 2){
		linha_na_tela();  
		printf(" É normal, achar que não merece perdão \n");
		printf(" Mas a retratação, a mudança, a evolução. ela só para quando desistimos \n");
		printf(" Perdoar-se também faz parte da trajetória \n");
			linha_na_tela();  
		limpa_tela();
		printf("  Toc\n");
		linha_na_tela();  
		limpa_tela();
		printf("  Toc Toc\n");
		linha_na_tela();  
		limpa_tela();
		printf("  Toc Toc toc \n");
		linha_na_tela();  
		limpa_tela();
		printf("Maria Clara: Bom dia, senhor %s  \n", nome);
		printf("Maria Clara: Já 11 horas, o senhor deve estar com fome \n");
		printf("Maria Clara: Estamos esperando suas ordens  \n");
	}
	
		
	linha_na_tela();   
	limpa_tela();
	

 	//////////////////////////////////
	// 16°QUADRO 
	//////////////////////////////////

	printf("%s: Ma-Maria? O que está fazendo aqui?\n", nome);
	printf("Maria: Ora patrão, apenas trabalhando\n");
	printf("Maria: Já é quase 12h\n");
	printf("%s: Pois hoje será especial! Hoje faremos um almoço!\n", nome);
	printf("Nathan: Olá %s, estou escutando seus gritos, algo ocorreu?\n", nome);
	printf("%s: Nathan! Velho amigo! Se sente ao meu lado hoje!\n", nome);
	printf("Nathan: Sou seu mordomo, senhor...Algo ocorreu?\n");
	printf("%s: Jamais diga isso! Você é meu amigo, sempre foi\n", nome);
	printf("Chame a todos para esse banquete!\n");
	printf("Jisele: Senhor, já iniciei os preparativos para o almoço\n");
	printf("%s: Sou grato Jisele! Está convidadissima para hoje!\n", nome);
	printf("Jisele: Obrigado senhor!\n");
	printf("%s: Sinto que deveria ter sido diferente com vocês três... \n", nome);
	
	linha_na_tela();   
	limpa_tela();

	printf("%s: Bom...Como talvez estranhem, quero dizer que\n", nome);
	printf("passei por trampos e barrancos, situações inesqueciveis\n");
	printf("como se cada um tivesse feito parte de minhas memórias\n");
	printf("Nathan: Psiu, Maria! Tem algo de estranho? ou é só impressão?\n");
	printf("Maria: Talvez o nirvana tenha sido atingido hahaha\n");
	printf("Jisele: Shiiu pessoal! Algo importante está acontecendo\n");
	printf("Maria: Olha a boca em novata\n");
	printf("Nathan: Ok ok dona estagiaria\n");
	printf("Jisele: Des-Desculpe! Não foi a intenção, é que nunca vi isso antes\n");
	printf("%s: Algo tão deslubrante, não acham? A possibilidade de enxergar tudo\n", nome);
	printf("Por isso agradeço a cada um de vocês que estão aqui hoje\n");
	printf("No nosso imenso banquete!\n");
	printf("Nathan: Valeu! Velho amigo\n");
	printf("Jisele: Agradecida %s\n", nome);
	printf("Maria: Obrigado patrão!\n");
	printf("%s: Eu que tenho que agradecer a vocês...Nunca será o bastante\n", nome);
	printf("%s: Talvez não saibam, mas talvez graças a um, dois ou três de vocês\n", nome);
	printf("%s: Eu sou outra pessoa\n", nome);
	printf("%s: Enfrentei minhas causas e consequências, hoje meremos descanso!\n", nome);
	printf("%s: Pois então! Comam e bebam o quanto aguentarem! É por minha conta!\n", nome);
	linha_na_tela();   
	limpa_tela();
	linha_na_tela(); 
	printf("Jogo criado por Thiago Eji Matumoto e Vitor Soares Coelho \n");
	printf("--------------------------------The end-----------------------------------------");
	return 0;
	
}



