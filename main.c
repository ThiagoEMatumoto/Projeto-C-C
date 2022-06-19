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
	// 1�QUADRO 
	//////////////////////////////////
	
	setlocale(LC_ALL,"Portuguese");
	
	//////////////////////////////////
	// COLOCAR NOME DO JOGADOR
	//////////////////////////////////
	
	titulo();
	limpa_tela();
	printf("\n");
	printf("Informe o nome do seu personagem [at� 15 caracteres]-> ");
	gets(nome);
	printf("\n");
	
	///////////////////////////////////////
	// ELENCO DOS PERSONAGENS DA HIST�RIA 
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
	// PREF�CIO
	//////////////////////////////////
	int dificuldade = 0;
	
	linha_na_tela();  	
	prefacio();                  
	linha_na_tela();    
	printf("Voc�, %s, � um homem rico, ranzinza e carrega um grande amargor pela vida.\n ", nome);
	printf("Mora em uma enorme mans�o e possui muitos funcion�rios. Por n�o ter empatia exige que seus \n");
	printf("Funcion�rios fiquem at� antes de voc� dormir e estejam na mans�o antes que voc� acorde.\n");
	printf("Um dia, quando mal-humorado, libera seus funcion�rios no meio da madrugada e come�a a fazer \n");
	printf("sua rotina antes de dormir... \n");
	printf("Antes de entrar em seu quarto, vai em dire��o ao cofre de sua casa \n");
	printf("Para abrir o cofre ser� necess�rio descobrir o n�mero secreto: \n");
	do {
	linha_na_tela();   
	printf("Escolha o n�vel de seguran�a do cofre: \n");
	printf("[1] -> F�cil \n");
	printf("[2] -> M�dio \n");
	printf("[3] -> Dif�cil \n");
	scanf("%d", &dificuldade);
	system("cls");
	} while (dificuldade!=1 && dificuldade!=2 && dificuldade!=3);
	/////////////////
	// CONFIGURANDO A RAND PARA N�MEROS ALEAT�RIOS
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
			printf("Erro 002 - dificuldade n�o econtrada \n");
			break;
		
	}
		
	int auxiliar = rand();
	
	int valor = auxiliar % 100;
	
	int chute, i;
	
		//////////////////////
		// DINAMICA DO JOGO
		//////////////////////	
	for (i = 1; i<=numero_tentativas; i++ ){
		
		printf("Est� � sua %d� tentativa de %d \n", i, numero_tentativas);
		printf("Qual o n�mero do cofre -> ");
		scanf("%d", &chute);
	
		if (chute < 0){
			printf("Numero inv�lido -> colocar um valor maior que 0 \n");
			i --;
			limpa_tela();
			continue;
		}
			///////////////////////////////
			//  VIT�RIA OU DERROTA
			//////////////////////////////
		if (chute == valor){
			printf("Voc� observou sua riqueza, uma quatidade inestimada de ouro \n");
			printf("e lembra do quanto custou para ter esse dinheiro. \n");
			printf("De maneira incociente sua conci�ncia pesa, mas segue sua rotina. \n");
			printf("Voc� fecha o cofre e segue para o seu quarto \n");
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
		
		printf("As vezes � o sono, com a idade a mem�ria fica fraca \n");
		printf("Quem sabe no dia seguinte consiga abrir novamente \n");
		linha_na_tela();
		limpa_tela();
	}
	//////////////////////////////////
	// 2�QUADRO 
	//////////////////////////////////

	linha_na_tela();    
	causas_consequencias();
	linha_na_tela();    
	printf("Voc� depois de mais um dia seguindo sua vida normalmente, com todo seu \n");
	printf("amargor pelos outros. Decide deitar-se e pensar no decorrer da sua vida \n");
	printf("e as coisas que te preocupam talvez seja um sintoma da idade...\n");
	printf(" Mas voc� n�o para de pensar. \n");
	printf("O que faz a sua conci�ncia pesar ?\n");
	linha_na_tela();   
	limpa_tela();

	//////////////////////////////////
	// VALIDA��O DE ESCOLHA
	//////////////////////////////////
	do {
		linha_na_tela();   
		printf("Voc�, %s, deseja ir para:\n", nome);
		printf("a-) Futuro\n");
		printf("b-) Passado\n");
		printf("c-) Presente\n");
		scanf("%c", &opc);
		system("cls");
	} while (opc!='a' && opc!='b' && opc!='c');
	
	switch(opc){
	case'a':
		linha_na_tela();    
		printf("Voc� decidiu ir ao futuro\n");
		linha_na_tela();    
		limpa_tela();
		linha_na_tela();    
		printf("Voc� leva sua pesada consci�ncia ao travesseiro e dormece \n");
		printf("Sua consci�ncia se perde mas volta rapidamente\n");
		printf("O brilho do dia clareia sua vis�o \n");
		printf("O cansa�o e a sensa��o de n�o ter dormido � grande.\n");
		printf(" Ao lado de sua cama dura e rangente est� Maria Clara, chefe das empregadas \n");
		linha_na_tela();   
		limpa_tela();
		break;
	case'b':
		linha_na_tela();    
		printf("Voc� decidiu ir ao passado\n");
		linha_na_tela();    
		limpa_tela();
		linha_na_tela();    
		printf("Voc� leva sua pesada consci�ncia ao travesseiro e adormece \n");
		printf("Sua consci�ncia se perde mas volta rapidamente\n");
		printf("O brilho do dia clareia sua vis�o \n");
		printf("O cansa�o e a sensa��o de n�o ter dormido � grande.\n");
		printf("Ao lado de sua macia, seu mordomo e amigo de inf�ncia, Nathan. \n");
		linha_na_tela();   
		limpa_tela();
		break;
	case'c':
		linha_na_tela();   
		printf("Voc� decidiu ficar no presente\n");
		linha_na_tela();    
		limpa_tela();
		linha_na_tela();   
		printf("Voc� leva sua pesada consci�ncia ao travesseiro e adormece\n");
		printf("Sua consci�ncia se perde mas volta rapidamente\n");
		printf("O brilho do dia clareia sua vis�o \n");
		printf("O cansa�o e a sensa��o de n�o ter dormido � grande.\n");
		printf("Tudo est� como deveria ser, uma �nica coisa n�o estava normal. \n");
		printf("Ao lado de sua cama estava sua nova funcion�ria, Jisele. \n");
		linha_na_tela();    
		limpa_tela();
		break;
	default:
		printf("Erro 201 - vari�vel n�o encontrada \n");
		return 0;
		break;
	}
	
	//////////////////////////////////
	// 3�QUADRO 
	//////////////////////////////////
		printf("Voc� n�o se importa com a pessoa que est� ao lado de sua cama \n");
		printf("A sensa��o de n�o ter dormido o irrita \n");
		printf("Ei! Voc� que est� parado, me traga uma �gua agora \n");
	
	
	//////////////////////////////////
	// 4�QUADRO 
	//////////////////////////////////
		printf("No entanto a figura rapidamente responde:\n");
	switch(opc){
		
	case'a': 
		linha_na_tela();    
		printf("Maria Clara: Pois pegue voc�! Esc�ria! Pensa que sou sua funcion�ria?\n");
		linha_na_tela();   
		limpa_tela();
		break;
		
	case'b':
		linha_na_tela();    
		printf("Nathan: Voc� n�o era assim, o que aconteceu com voc� ?\n");
		linha_na_tela();   
		limpa_tela();
		break;
	
	case'c':
		linha_na_tela();    
		printf("Jisele: Bem que falaram o quanto voc� era um bicho pregui�a!\n");
		linha_na_tela();   
		limpa_tela(); 
		break;
	
	default:
		system("color 4");
		printf("Erro 401 - vari�vel inv�lida \n");
		return 0;
		break;
	}
	
	//////////////////////////////////
	// 5�QUADRO 
	//////////////////////////////////
	
	switch(opc){
		
	case'a': 
		linha_na_tela();    
		printf("%s: Que atrevimento � esse? Te coloco na rua sem pensar duas vezes!\n", nome);
		printf("Maria Clara: Atrevimento s�o suas atitudes!\n");
		printf("Maria Clara: N�o percebe nem com quem est� falando %s!\n", nome);
		printf("Maria Clara: Olhe para a sua volta, voc� n�o est� no lugar que estava antes\n");
		linha_na_tela();    
		limpa_tela();
	break;
	
	case'b':
		linha_na_tela();    
		printf("%s: Exato, seja r�pido e sem problemas no caminho, essa fase j� se foi\n", nome);
		printf("Nathan: J� se foi? N�o sente esse cheiro nost�lgico no ar ? %s\n", nome);
		printf("Nathan: Consegue escutar esse som ? N�o percebe ? \n");
		printf("Nathan: Por que n�o sa�mos um pouco l� fora \n");	
		linha_na_tela();    
		limpa_tela();
	break;
	
	case'c':
		linha_na_tela();   
		printf("%s: Acha que s� por que voc� � nova aqui n�o te expulso? J� que me conhece bem, deveria saber!\n", nome);
		printf("Jisele: Arrogante, cego e inconsequente, exatamente como falam. \n");
		printf("Jisele: N�o consegue nem diferenciar o que mudou a sua volta. \n");
		linha_na_tela();    
		limpa_tela();
	break;
	
	default:
		system("color 4");
		printf("Erro 501 - vari�vel inv�lida \n");
		return 0;
		break;
	}

	///////////////////////////////////
	// 6�QUADRO 
	//////////////////////////////////
	switch(opc){
		
	case'a': 
		linha_na_tela();    
		printf("%s: O QUE ACONTECEU COM MINHA CASA? POR QUE ELA EST� DESTRUIDA? \n", nome);
		printf("Maria Clara: Por enquanto? nada..Mas � o destino dela, caso tudo continue igual\n");
		printf("Maria Clara: Talvez eu devesse te alertar que tudo � culpa sua, mas voce j� sabe\n");
		printf("Maria Clara: Pare de tentar se esconder atr�s de mentiras\n");
		printf("%s: Como eu iria saber? \n", nome);
		printf("Maria Clara: Voc� se conhece melhor que ningu�m, n�o serei eu que irei explicar\n");
		printf("Maria Clara: Aceitar� o futuro, ou ir� enfrent�-lo?\n");
		linha_na_tela();   
		limpa_tela();
	break;
	
	case'b':
		linha_na_tela();   
		printf("%s: Ma-Mas que lugar � esse?", nome);
		printf("Nathan: N�o reconhece? N�o sente cheiro de inf�ncia? O som do sorveteiro na esquina \n", nome);
		printf("Nathan: Vamos ou�a! Os carros t�o raros, mas a paisagem t�o incr�vel\n");
		printf("Nathan: N�o sente saudade n�o �? Tudo antes era mais colorido e foi ficando mais cinza\n");
		printf("Nathan: Inclusive voc�, n�o acha?\n");
		printf("Nathan: Se voc� n�o sente saudade de quem voc� j� foi, talvez sinta dessa antiga vizinhan�a\n");
		printf("Nathan: Tudo mais colorido, sem dores, apenas n�s dois na rua brincando\n");	
		printf("Nathan: Voc� sente falta?\n");
		linha_na_tela();    
		limpa_tela();
	break;
	
	case'c':
		linha_na_tela();   
		printf("%s: Mas nada mudou!\n", nome);
		printf("Jisele: Olhe novamente \n");
		printf("Jisele: Percebe? Sua casa est� indo rumo ao fim, bem como voc� \n");
		printf("%s: Mas minha casa...como?\n", nome);
		printf("Jisele: Suas a��es levaram a isso! Tudo que vier a acontecer a SUA casa\n");
		printf("SEUS funcion�rios e SUAS rela��es, s�o culpa sua, n�o percebe? \n");
		printf("Jisele: N�o deseja a mudan�a, %s ? \n", nome);
		linha_na_tela();    
		limpa_tela();
	break;
		
	default:
		system("color 4");
		printf("Erro 601 - vari�vel inv�lida \n");
		return 0;
		break;
	}

	//////////////////////////////////
	// 7�QUADRO 
	//////////////////////////////////	
	
	int decisao;
	
	printf("Talvez o que os fantasma tentam te falar, possuam algum fundo de raz�o\n");
	printf("Pensar nunca foi seu forte, do contr�rio, n�o estaria aqui\n");
	printf("Voc� aceita o que o fantasma te fala?\n");
	printf("[1] Sim \n");
	printf("[2] N�o \n");
	scanf("%d", &decisao );

	switch(opc){
		
	case 'a':  
		linha_na_tela();   
		if (decisao == 1) {
			printf("%s: Sinto muito por ter te colocado nessa situa��o Maria \n", nome);
			printf("%s: Agrade�o pelos seus esfor�os dentro de minha casa \n", nome);
		}
		if (decisao == 2){
			printf("%s: Isso � mentira sua, brincadeira de mal gosto \n", nome);
			printf("%s: � tudo asneiras! Tipico de gente de sangue ruim \n", nome);
		}
		linha_na_tela();    
		limpa_tela();
	break;
	
	case 'b':
		linha_na_tela();    
		if (decisao == 1){
			printf("%s: Me tornei desse jeito para me proteger \n", nome);
			printf("%s: N�o foi minha inten��o mudar nossa amizade, sinto falta da gente \n", nome);
			printf("%s: Nathan, n�o te afastei por querer, perd�o.\n", nome);
		}
		
		if (decisao == 2){
			printf("%s: Me tornei desse jeito para me proteger \n", nome);
			printf("%s: Voc� n�o entende, era necess�rio !\n", nome);
			printf("%s: O que vivemos ficou no passado! \n", nome);	
		}
		
		linha_na_tela();   
		limpa_tela();
	break;
	
	case 'c':
		linha_na_tela();  
		if (decisao == 1){
			printf("%s: N�o tive um passado f�cil Jisele\n", nome);
			printf("%s: Mas tamb�m n�o posso descontar o que aconteceu em voc�s\n", nome);
			printf("%s: Desculpa por causar transtornos em suas vidas\n", nome);	
		}
		
		if (decisao == 2){
			printf("%s: Mas o que voc� tem a ver com as minhas a��es\n", nome);
			printf("%s: O que tudo isso tem a ver comigo? � tudo culpa de voc�s! \n", nome);
			printf("%s: Ponha-se em seu lugar Jisele\n", nome);	
		}
		
		linha_na_tela();   	
		limpa_tela();
	break;
	
	default:
		system("color 4");
		printf("Erro 701 - vari�vel inv�lida \n");
		return 0;
		break;
	}

	//////////////////////////////////
	// 8�QUADRO 
	//////////////////////////////////
		linha_na_tela();  
		printf("Mas e voc�? \n");
		linha_na_tela();  
		limpa_tela();
		linha_na_tela();  
		printf("Mudou para chegar onde chegou? \n");
		linha_na_tela();  	
		limpa_tela();
		linha_na_tela();  
		printf("Voc� se arrepende das mudan�as? \n");
		linha_na_tela();  
		limpa_tela();
		linha_na_tela();  
		printf("Sente falta do passado? \n");
		linha_na_tela();  
		limpa_tela();
		linha_na_tela();  
		printf("O que te custou suas mudan�as? \n");
		linha_na_tela();  	
		limpa_tela();
		
	//////////////////////////////////
	// 9�QUADRO 
	//////////////////////////////////
	int pergunta;
	 	
	switch(opc){
		
	case'a':  
		linha_na_tela();  
		if (decisao == 1){
			printf("Maria Clara: At� me emociona sua auto-reflex�o \n");
			printf("Maria Clara: Mas isso n�o muda aquilo que voc� fez \n");	
			printf("Maria Clara: Mas � um passo, para quem saber mudar o que voc� v� em sua volta\n");
			printf("Maria Clara: Te dou o direito a uma pergunta, pense bem ao escolher: \n");
			printf("[1] -> Como fa�o para sair daqui? \n");
			printf("[2] -> Tudo aqui � real? \n");
			printf("[3] -> Eu estou morto? \n");
			scanf("%d", &pergunta);
			limpa_tela();
			break;
		}
		
		if (decisao == 2){
			printf("Maria Clara: Por0 1  qu 0e eu1 0 0 espera1va algo d0e voc�? \n");
			printf("Maria Clara: A 0 1 c 1 h 0 q0 1 ue 0 err0 es1 0 1t� 0e 1 0m 1 0m 1m, maldi��o %s !\n", nome);	
			printf("Maria Clara: 1 0 0 1z 1 0 e s0 1 1 a1 0ch 1e foi 1 0 1 1 1 0, foi p1 0 o 1 0 d 1 es1 0 1d�cio...\n");	
			bug_final();
			return 0;	
		}
		
		linha_na_tela();    
		limpa_tela();
	break;
	
	case'b':
		linha_na_tela();    
		if (decisao == 1){
			printf("Nathan: Escute a voz da raz�o!\n");
			printf("Nathan: O que passou, passou, o que importa � o agora, e o que voc� pode \n");
			printf("Nathan: fazer hoje, o passado j� foi, e o futuro ainda n�o chegou. \n");	
			printf("Nathan: Mas j� fico feliz por voc� perceber, e por tentar melhorar. \n");	
			printf("Nathan: Ser� que posso te ajudar? Voc� tem alguma pergunta ? \n");
			printf("[1] -> Como fa�o para sair daqui? \n");
			printf("[2] -> Tudo aqui � real? \n");
			printf("[3] -> Eu estou morto? \n");
			scanf("%d", &pergunta);
			limpa_tela();
			break;
			
		}
		
		if (decisao == 2)	{
			printf("Nathan: M 0 1as que c0 be�a 0ca %s !\n", nome);
			printf("Nathan: Q 0u 1 0 1an 1tas 0 0 1 0veze 1 0s v0 � precisa 1 0 1 0 0 errar?\n");
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
			printf("Jisele: Finalmente um pouco de bom senso do patr�o, hein! \n");
			printf("Jisele: Cometemos erros sim %s\n", nome);
			printf("Jisele: Mas continuar neles � burrice\n");
			printf("Jisele: Fico feliz que tenha pensado um pouco mais\n");
			printf("Jisele: Quem sab� h� esperan�a... voc� t�m alguma pergunta? \n");
			printf("[1] -> Como fa�o para sair daqui? \n");
			printf("[2] -> Tudo aqui � real? \n");
			printf("[3] -> Eu estou morto? \n");
			scanf("%d", &pergunta);
			limpa_tela();
			break;
		}
		
		if (decisao == 2)	{
			printf("Jisele: N�0 1 0 v� a s 1 tua�� 0 1m qu1 s1 encontra?!\n");
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
		printf("Erro 701 - vari�vel inv�lida \n");
		return 0;
		break;
	}

	//////////////////////////////////
	// 10�QUADRO 
	//////////////////////////////////

	switch(opc){
		
	case'a':  
		linha_na_tela();  
		if (pergunta == 1){
			printf("Maria Clara: Sair da onde? Voc� n�o foi em nenhum lugar \n");
			printf("Maria Clara: Voc� continua  no mesmo lugar em que sempre esteve \n");	
		}
			
		if (pergunta == 2){
			printf("Maria Clara: Tudo aquilo que � real est� a um passo de transformar-se em irreal \n");
			printf("Maria Clara: Tudo aquilo que � irreal est� a um passo se transformar-se em real \n");
			printf("Maria Clara: No fim s�o s� detalhes \n");
		}
		if (pergunta == 3){
			printf("Maria Clara: A morte � um eterno estado de nega��o \n");
		
		}
		linha_na_tela();    
		limpa_tela();
	break;
	
	case'b':
		linha_na_tela();    
		if (pergunta == 1){
			printf("Nathan: Sair? N�o � poss�vel fugir do seu passado \n");
			printf("Nathan: Estara sempre com voc�, faz parte do seu ser \n");
			printf("Nathan: N�o � poss�vel sair de si mesmo \n");
		}
				
		if (pergunta == 2)	{
			printf("Nathan: Depende, qual a sua rela��o com o seu passado ? \n");
			printf("Nathan: Quanto a sua vis�o sobre as coisas se aproximam da realidade ?\n");
			printf("Nathan: Voc� decide se isso tudo foi real ou n�o \n");		
		}

		if (pergunta == 3){
			printf("Nathan: A morte � um eterno estado de nega��o \n");
		}
		linha_na_tela();   
		limpa_tela();
	break;
	
	case'c':
		linha_na_tela();  
		if (pergunta == 1){
			printf("Jisele: Pensei que a casa fosse sua \n");
			printf("Jisele: N�o sabe a sa�da da pr�pria casa ?\n");
			
		}
			
		if (pergunta == 2)	{
			printf("Jisele: Como n�o poderia ser ? Melhor perguntando... \n");
			printf("Jisele: Essa � a sua realidade ? \n");
		}
			
		if (pergunta == 3){
			printf("Jisele: A morte � um eterno estado de nega��o \n");
		}
		
		linha_na_tela();   	
		limpa_tela();
	break;
	
	default:
		system("color 4");
		printf("Erro 1001 - vari�vel inv�lida \n");
		return 0;
		break;
	}
	

	//////////////////////////////////
	// 11�QUADRO 
	//////////////////////////////////
 
	linha_na_tela(); 
 	//Como a resposta dos fantasmas ser�o sempre vagas, a rea��o mudar seria meio ?????
 	printf("Mas que droga de respostas s�o essas?\n");
 	printf("Isso nem sequer faz sentido!\n");
 	linha_na_tela();  
	limpa_tela();
	printf("Na verdade...ser� que eles me entenderam?\n");
	linha_na_tela(); 
	limpa_tela();

 
 
	//////////////////////////////////
	// 12�QUADRO 
	//////////////////////////////////
	int irritar;
	
	linha_na_tela(); 
	printf("Voc� n�o sente que j� passou tempo demais aqui?\n");
	printf("Tanto tempo para nada? isso n�o te aborrece?\n");
	printf("Voc� n�o quer sair daqui? Essa ang�stia que n�o passa\n");
	printf("Sair daqui...Nem que seja por mal\n");
	printf("Ninguem te diz nada aqui...Voc� se irrita?\n");
	printf("[1] Sim, me irrito\n");
	printf("[2] n�o, talvez eu devesse pensar melhor\n");
	scanf("%d", &irritar);
	
	switch(opc){
		
	case 'a':  
		linha_na_tela();  
		if (irritar == 1){
			printf("%s: Mas que desgra�a! Nada aqui presta!\n", nome);
			printf("%s: Achei que voc� Maria, estaria aqui para me ajudar!\n", nome);
			printf("%s: Que voc� suma daqui!\n", nome);
		}
		
		if (irritar == 2)	{
			printf("%s: Maria...Pensamentos vem e v�o, mas voc� acha que...\n", nome);
			printf("%s: Existem coisas imperdo�veis?\n", nome);
		}		
	break;
	
	case 'b':
		linha_na_tela();    
		if (irritar == 1){
			printf("%s: Diga-me Nathan! Que raio de situa��o � essa?\n", nome);
			printf("%s: Voc� era para ser meu amigo! N�o o oposto!\n", nome);
			printf("%s: Desde que cheguei aqui n�o ouvi nada de �til!\n", nome);
			printf("%s: Que voc� suma!\n", nome);	
		}
			
		if (irritar == 2){	
			printf("%s: Velho amigo...O tempo n�o foi generoso comigo\n", nome);
			printf("%s: Obrigado por sempre ter estado comigo, mesmo nos piores momentos!\n", nome);
		}
	break;
	
	case 'c':
		linha_na_tela();  
		if (irritar == 1 ){
			printf("%s: Quanta baboseira vinda de uma novata! N�o suporto voc�!\n", nome);
			printf("%s: S� me surgem desgra�as! At� mesmo nessa idade!\n", nome);	
		}
		
		if (irritar == 2){
			printf("%s: Haha..At� mesmo algu�m nova aqui � capaz de me ajudar, n�o �?\n", nome);
			printf("%s: N�o h� motivo para f�ria...Acho que j� entendi...Ou pelo menos acho!\n", nome);
		}
	break;
	
	default:
		system("color 4"); 
		printf("Erro 1201 - vari�vel inv�lida \n");
		return 0;
	break;
		linha_na_tela();    
		limpa_tela();
	}
	//////////////////////////////////
	// 13�QUADRO 
	//////////////////////////////////


	switch(opc){
		
		case'a': 
			linha_na_tela();    
			printf("%s: Mas em fim, me responda logo \n", nome);
			printf("%s: Como cheguei nessa situa��o?...\n", nome);
			printf("Maria Clara: Me diga voc�, j� te aguentei tanto! Mesmo te odiando\n");
			printf("Maria Clara: Foi insuport�vel!\n");
			printf("Maria Clara: Voc� sempre me maltratou, mas fui a �nica que segui sem hesitar\n");		
			printf("Maria Clara: valeria a pena se arrepender realmente?\n");
			printf("Maria Clara: Acho que voc� n�o tem um cora��o capaz de sentir pena\n");
			linha_na_tela();    
			limpa_tela();
		break;
		
		case'b':
			linha_na_tela();    
			printf("%s: Mas em fim, me responda logo \n", nome);
			printf("%s: Que fundo de po�o � esse?? \n", nome);
			printf("Nathan: Respire fundo, velho amigo! S� n�o podemos mudar quem somos \n", nome);
			printf("Nathan: Quando morremos, at� l� voc� tem tempo para refletir \n");
			printf("Nathan: Uma sensa��o diferente inunda seu peito, como se sente?\n");
			printf("Nathan: est� aberto a mudan�as? \n");
			linha_na_tela();   
			limpa_tela();
		break;
		
		case 'c':
			linha_na_tela();   
			printf("%s: Mas enfim, me responda logo \n", nome);
			printf("%s: Como?...Tudo isso ocorreu?...\n", nome);
			printf("Jisele: Tudo parecia melhor quando comecei a trabalhar, mas n�o era assim\n");
			printf("Jisele: Voc� parecia ser uma boa pessoa e n�o esse monstro, fui enganada?\n");
			printf("Jisele: Passei por poucas e boas, e hoje j� n�o sei se quero continuar\n");
			printf("Jisele: Isso me enoja\n");
			linha_na_tela();  
			limpa_tela();
		break;
	
		default:
			system("color 4");
			printf("Erro 1301 - vari�vel inv�lida \n");
			return 0;
		break;
	}
	
	//////////////////////////////////
	// 14�QUADRO 
	//////////////////////////////////
		linha_na_tela();
	printf(" No fim... Somos todos humanos \n");
	linha_na_tela();
	limpa_tela();
	printf(" N�o somos perfeitos, nos adaptamos �s necessidades \n");	
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
	printf(" O futuro � reflexo do fazemos hoje  \n");	
	linha_na_tela();
	limpa_tela();
	linha_na_tela();
	printf(" O hoje � aquilo que a gente pode controlar mas � onde a gente menos enxerga \n");	
	linha_na_tela();
	limpa_tela();
	linha_na_tela();
	printf(" Mas existe espa�o para o arrependimento ?  \n");	
	printf(" Mas arrependimento pelo que ? \n");
	printf(" O ontem � o hoje de antigamente, e o futuro � hoje de amanh� \n");
	printf(" No fim, concordamos, o arrependimento � apenas do hoje que j� que vir� \n");
	linha_na_tela();
	limpa_tela();
	linha_na_tela();
	printf(" Demoramos para refletir e entender nossos erros \n");	
	printf(" No fim, nos perguntamos - Por que s� agora ? \n");
	printf(" Por qu� n�o ontem? J� � tarde de mais \n");
	printf(" Por que n�o amanh�? Prorrogar a reflex�o \n");
	linha_na_tela();
	limpa_tela();
	linha_na_tela();
	printf(" No fim, d�i, n�o � ? \n");	
	printf(" De qualquer maneira vai doer \n");
	linha_na_tela();
	limpa_tela();
	linha_na_tela();
	printf(" A dor de uma ferida aberta\n");	
	printf(" Uma ferida mal curada, sangra  \n");
	printf(" Mas s� sangra em cima de quem n�o tem culpa de nada \n");
	printf(" E manchamos os outros com nosso sangue de feridas mal cicatrizadas \n");
	linha_na_tela();
	limpa_tela();
	linha_na_tela();
	printf(" Merecemos uma segunda chance? \n");
	printf("[1] Sim \n");
	printf("[2] N�o \n");
	scanf("%d", &decisao );
	limpa_tela();
	//////////////////////////////////
	// 15�QUADRO 
	//////////////////////////////////
	if (decisao == 1){
		linha_na_tela();  
		printf(" A auto piedade � um grande passo para conseguir seguir em frente \n");
		printf(" Perdoar-se � o momento mais dif�cil da trajet�ria \n");
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
		printf("Maria Clara: J� 11 horas, o senhor deve estar com fome \n");
		printf("Maria Clara: Estamos esperando suas ordens  \n");
	}
		
	if (decisao == 2){
		linha_na_tela();  
		printf(" � normal, achar que n�o merece perd�o \n");
		printf(" Mas a retrata��o, a mudan�a, a evolu��o. ela s� para quando desistimos \n");
		printf(" Perdoar-se tamb�m faz parte da trajet�ria \n");
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
		printf("Maria Clara: J� 11 horas, o senhor deve estar com fome \n");
		printf("Maria Clara: Estamos esperando suas ordens  \n");
	}
	
		
	linha_na_tela();   
	limpa_tela();
	

 	//////////////////////////////////
	// 16�QUADRO 
	//////////////////////////////////

	printf("%s: Ma-Maria? O que est� fazendo aqui?\n", nome);
	printf("Maria: Ora patr�o, apenas trabalhando\n");
	printf("Maria: J� � quase 12h\n");
	printf("%s: Pois hoje ser� especial! Hoje faremos um almo�o!\n", nome);
	printf("Nathan: Ol� %s, estou escutando seus gritos, algo ocorreu?\n", nome);
	printf("%s: Nathan! Velho amigo! Se sente ao meu lado hoje!\n", nome);
	printf("Nathan: Sou seu mordomo, senhor...Algo ocorreu?\n");
	printf("%s: Jamais diga isso! Voc� � meu amigo, sempre foi\n", nome);
	printf("Chame a todos para esse banquete!\n");
	printf("Jisele: Senhor, j� iniciei os preparativos para o almo�o\n");
	printf("%s: Sou grato Jisele! Est� convidadissima para hoje!\n", nome);
	printf("Jisele: Obrigado senhor!\n");
	printf("%s: Sinto que deveria ter sido diferente com voc�s tr�s... \n", nome);
	
	linha_na_tela();   
	limpa_tela();

	printf("%s: Bom...Como talvez estranhem, quero dizer que\n", nome);
	printf("passei por trampos e barrancos, situa��es inesqueciveis\n");
	printf("como se cada um tivesse feito parte de minhas mem�rias\n");
	printf("Nathan: Psiu, Maria! Tem algo de estranho? ou � s� impress�o?\n");
	printf("Maria: Talvez o nirvana tenha sido atingido hahaha\n");
	printf("Jisele: Shiiu pessoal! Algo importante est� acontecendo\n");
	printf("Maria: Olha a boca em novata\n");
	printf("Nathan: Ok ok dona estagiaria\n");
	printf("Jisele: Des-Desculpe! N�o foi a inten��o, � que nunca vi isso antes\n");
	printf("%s: Algo t�o deslubrante, n�o acham? A possibilidade de enxergar tudo\n", nome);
	printf("Por isso agrade�o a cada um de voc�s que est�o aqui hoje\n");
	printf("No nosso imenso banquete!\n");
	printf("Nathan: Valeu! Velho amigo\n");
	printf("Jisele: Agradecida %s\n", nome);
	printf("Maria: Obrigado patr�o!\n");
	printf("%s: Eu que tenho que agradecer a voc�s...Nunca ser� o bastante\n", nome);
	printf("%s: Talvez n�o saibam, mas talvez gra�as a um, dois ou tr�s de voc�s\n", nome);
	printf("%s: Eu sou outra pessoa\n", nome);
	printf("%s: Enfrentei minhas causas e consequ�ncias, hoje meremos descanso!\n", nome);
	printf("%s: Pois ent�o! Comam e bebam o quanto aguentarem! � por minha conta!\n", nome);
	linha_na_tela();   
	limpa_tela();
	linha_na_tela(); 
	printf("Jogo criado por Thiago Eji Matumoto e Vitor Soares Coelho \n");
	printf("--------------------------------The end-----------------------------------------");
	return 0;
	
}



