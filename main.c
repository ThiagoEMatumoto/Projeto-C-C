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
	
	linha_na_tela();  	
	prefacio();                  
	linha_na_tela();    
	printf("Você, %s, é um homem rico, ranzinza e carrega um grande amargor pela vida.\n ", nome);
	printf("Mora em uma enorme mansão e possui muitos funcionários. Por não ter empatia exige que seus \n");
	printf("Funcionários fiquem até antes de você dormir e estejam na mansão antes que você acorde.\n");
	printf("Um dia, quando mal-humorado, libera seus funcionários no meio da madrugada e começa a fazer \n");
	printf("sua rotina antes de dormir... \n");
	linha_na_tela();   
	limpa_tela();
	
	//////////////////////////////////
	// 2°QUADRO 
	//////////////////////////////////
	setlocale(LC_ALL,"Portuguese");
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
	linha_na_tela();  
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
		printf("Jisele: Não deseja a mudança, %s ? ", nome);
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
	printf("Você aceita o que o fantasma te fala? Ou ainda assim..Nega?\n");
	printf("[1] Sim \n");
	printf("[2] Não \n");
	scanf("%d", &decisao );

	switch(opc){
		
	case 'a':  
		linha_na_tela();   
		if (decisao == 1)
			printf("%s: Sinto muito por ter te colocado nessa situação Maria \n", nome);
			printf("%s: Agradeço pelos seus esforços dentro de minha casa \n", nome);
		if (decisao == 2)
			printf("%s: Isso é mentira sua, brincadeira de mal gosto \n", nome);
			printf("%s: É tudo asneiras! Tipico de gente de sangue ruim \n", nome);
		linha_na_tela();    
		limpa_tela();
	break;
	
	case 'b':
		linha_na_tela();    
		if (decisao == 1)
			printf("%s: Me tornei desse jeito para me proteger \n", nome);
			printf("%s: Não foi minha intenção mudar nossa amizade, sinto falta da gente \n", nome);
			printf("%s: Nathan, não te afastei por querer, perdão.\n", nome);
		if (decisao == 2)
			printf("%s: Me tornei desse jeito para me proteger \n", nome);
			printf("%s: Você não entende, era necessário !\n", nome);
			printf("%s: O que vivemos ficou no passado!", nome);
		linha_na_tela();   
		limpa_tela();
	break;
	
	case 'c':
		linha_na_tela();  
		if (decisao == 1)
			printf("%s: Não tive um passado fácil Jisele\n", nome);
			printf("%s: Mas também não posso descontar o que aconteceu em vocês\n", nome);
			printf("%s: Desculpa por causar transtornos em suas vidas\n", nome);
		if (decisao == 2)
			printf("%s: Mas o que você tem a ver com as minhas ações\n", nome);
			printf("%s: O que tudo isso tem a ver comigo? É tudo culpa de vocês! \n", nome);
			printf("%s: Ponha-se em seu lugar Jisele\n", nome);
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
		
	switch(opc){
		
	case'a':  
		linha_na_tela();  
		if (decisao == 1)
			printf("Maria Clara: Até me emociona sua auto-reflexão \n");
			printf("Maria Clara: Mas isso não muda aquilo que você fez \n");	
			printf("Maria Clara: Mas é um passo, para quem saber mudar o que você vê em sua volta");
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
	printf("Erro 701 - variável inválida \n");
	return 0;
	break;
}

	//////////////////////////////////
	// 10°QUADRO 
	//////////////////////////////////



	//////////////////////////////////
	// 11°QUADRO 
	//////////////////////////////////
 
 
 
	//////////////////////////////////
	// 12°QUADRO 
	//////////////////////////////////



	//////////////////////////////////
	// 13°QUADRO 
	//////////////////////////////////


	switch(opc){
		
		case'a': 
			linha_na_tela();    
			printf("%s: Como cheguei nessa situação?...\n", nome);
			printf("Maria Clara: Me diga você, já te aguentei tanto! Mesmo te odiando\n");
			printf("Maria Clara: Foi insuportável!\n");
			printf("Você sempre me maltratou, mas fui a única que segui sem hesitar\n");		
			printf("valeria a pena se arrepender realmente?\n");
			printf("Maria Clara: Acho que você não tem um coração capaz de sentir pena\n");
			linha_na_tela();    
			limpa_tela();
		break;
		
		case'b':
			linha_na_tela();    
			printf("%s: Que fundo de poço é esse??", nome);
			printf("Nathan: Respire fundo, velho amigo! Só não podemos mudar quem somos \n", nome);
			printf("Quando morremos, até lá você tem tempo para refletir \n");
			printf("Uma sensação diferente inunda seu peito, como se sente?\n");
			printf("está aberto a mudanças? \n");
			linha_na_tela();   
			limpa_tela();
		break;
		
		case'c':
			linha_na_tela();   
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
	}
	//////////////////////////////////
	// 14°QUADRO 
	//////////////////////////////////
	
	
	//////////////////////////////////
	// 15°QUADRO 
	//////////////////////////////////
	
	
 	//////////////////////////////////
	// 16°QUADRO 
	//////////////////////////////////







