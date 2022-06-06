#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
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
	
	linha_na_tela();  	
	prefacio();                  
	linha_na_tela();    
	printf("Voc�, %s, � um homem rico, ranzinza e carrega um grande amargor pela vida.\n ", nome);
	printf("Mora em uma enorme mans�o e possui muitos funcion�rios. Por n�o ter empatia exige que seus \n");
	printf("Funcion�rios fiquem at� antes de voc� dormir e estejam na mans�o antes que voc� acorde.\n");
	printf("Um dia, quando mal-humorado, libera seus funcion�rios no meio da madrugada e come�a a fazer \n");
	printf("sua rotina antes de dormir... \n");
	linha_na_tela();   
	limpa_tela();
	
	//////////////////////////////////
	// 2�QUADRO 
	//////////////////////////////////
	setlocale(LC_ALL,"Portuguese");
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
	linha_na_tela();  
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
		printf("Jisele: N�o deseja a mudan�a, %s ? ", nome);
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
	printf("Voc� aceita o que o fantasma te fala? Ou ainda assim..Nega?\n");
	printf("[1] Sim \n");
	printf("[2] N�o \n");
	scanf("%d", &decisao );

	switch(opc){
		
	case 'a':  
		linha_na_tela();   
		if (decisao == 1)
			printf("%s: Sinto muito por ter te colocado nessa situa��o Maria \n", nome);
			printf("%s: Agrade�o pelos seus esfor�os dentro de minha casa \n", nome);
		if (decisao == 2)
			printf("%s: Isso � mentira sua, brincadeira de mal gosto \n", nome);
			printf("%s: � tudo asneiras! Tipico de gente de sangue ruim \n", nome);
		linha_na_tela();    
		limpa_tela();
	break;
	
	case 'b':
		linha_na_tela();    
		if (decisao == 1)
			printf("%s: Me tornei desse jeito para me proteger \n", nome);
			printf("%s: N�o foi minha inten��o mudar nossa amizade, sinto falta da gente \n", nome);
			printf("%s: Nathan, n�o te afastei por querer, perd�o.\n", nome);
		if (decisao == 2)
			printf("%s: Me tornei desse jeito para me proteger \n", nome);
			printf("%s: Voc� n�o entende, era necess�rio !\n", nome);
			printf("%s: O que vivemos ficou no passado!", nome);
		linha_na_tela();   
		limpa_tela();
	break;
	
	case 'c':
		linha_na_tela();  
		if (decisao == 1)
			printf("%s: N�o tive um passado f�cil Jisele\n", nome);
			printf("%s: Mas tamb�m n�o posso descontar o que aconteceu em voc�s\n", nome);
			printf("%s: Desculpa por causar transtornos em suas vidas\n", nome);
		if (decisao == 2)
			printf("%s: Mas o que voc� tem a ver com as minhas a��es\n", nome);
			printf("%s: O que tudo isso tem a ver comigo? � tudo culpa de voc�s! \n", nome);
			printf("%s: Ponha-se em seu lugar Jisele\n", nome);
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
		
	switch(opc){
		
	case'a':  
		linha_na_tela();  
		if (decisao == 1)
			printf("Maria Clara: At� me emociona sua auto-reflex�o \n");
			printf("Maria Clara: Mas isso n�o muda aquilo que voc� fez \n");	
			printf("Maria Clara: Mas � um passo, para quem saber mudar o que voc� v� em sua volta");
			printf("Maria Clara: Te dou o direito a uma pergunta, pense bem ao escolher: ");
		
		if (decisao == 2)	
			
			
		linha_na_tela();    
		limpa_tela();
	break;
	
	case'b':
		linha_na_tela();    
		if (decisao == 1)
			
		
		if (decisao == 2)	
			
			
		linha_na_tela();   
		limpa_tela();
	break;
	
	case'c':
		linha_na_tela();  
		if (decisao == 1)
			
		
		if (decisao == 2)	
			
			
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



	//////////////////////////////////
	// 11�QUADRO 
	//////////////////////////////////
 
 
 
	//////////////////////////////////
	// 12�QUADRO 
	//////////////////////////////////



	//////////////////////////////////
	// 13�QUADRO 
	//////////////////////////////////


	switch(opc){
		
		case'a': 
			linha_na_tela();    
			printf("%s: Como cheguei nessa situa��o?...\n", nome);
			printf("Maria Clara: Me diga voc�, j� te aguentei tanto! Mesmo te odiando\n");
			printf("Maria Clara: Foi insuport�vel!\n");
			printf("Voc� sempre me maltratou, mas fui a �nica que segui sem hesitar\n");		
			printf("valeria a pena se arrepender realmente?\n");
			printf("Maria Clara: Acho que voc� n�o tem um cora��o capaz de sentir pena\n");
			linha_na_tela();    
			limpa_tela();
		break;
		
		case'b':
			linha_na_tela();    
			printf("%s: Que fundo de po�o � esse??", nome);
			printf("Nathan: Respire fundo, velho amigo! S� n�o podemos mudar quem somos \n", nome);
			printf("Quando morremos, at� l� voc� tem tempo para refletir \n");
			printf("Uma sensa��o diferente inunda seu peito, como se sente?\n");
			printf("est� aberto a mudan�as? \n");
			linha_na_tela();   
			limpa_tela();
		break;
		
		case'c':
			linha_na_tela();   
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
	}
	//////////////////////////////////
	// 14�QUADRO 
	//////////////////////////////////
	
	
	//////////////////////////////////
	// 15�QUADRO 
	//////////////////////////////////
	
	
 	//////////////////////////////////
	// 16�QUADRO 
	//////////////////////////////////







