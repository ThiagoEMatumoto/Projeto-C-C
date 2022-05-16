
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


quadro1(){
	
}
quadro2(){
	
}
quadro3(){
	
}


int main(int argc, char *argv[]) {
	
	char nome[15];
	char opc;
	
	/* 1°QUADRO */
	setlocale(LC_ALL,"Portuguese");
	
	/* COLOCAR NOME DO JOGADOR*/
	printf("----------------------------------------------------------\n");
	printf("                     CAUSAS E CONSEQUENCIAS               \n");
	printf("----------------------------------------------------------\n");
	printf("\n");
	printf("Informe o nome do seu personagem [ate 15 caracteres]-> ");
	gets(nome);
	printf("\n");
	
	system("pause");
	system("cls");
	
	/* ELENCO DOS PERSONAGENS DA HISTÓRIA */
	
	printf("----------------------------------------------------------\n");
	printf("                 APRESENTAÇÃO DOS PERSONAGENS                \n");
	printf("----------------------------------------------------------\n");
		printf("\n");
	printf("%s - rico ranzinza \n", nome);
	printf("Nathan Souza - mordomo da casa \n");
	printf("Maria Clara - chefe das empregadas \n");
	printf("Jisele Mendes - nova empregada \n");

	printf("----------------------------------------------------------\n");

	system("pause");
	system("cls");
	
	/* PREFÁCIO */
	
	printf("----------------------------------------------------------\n");
	printf("                          PREFÁCIO                        \n");
	printf("----------------------------------------------------------\n");
	printf("Voce, %s, eh um homem rico, ranzinza e carrega um grande amargor pela vida.\n ", nome);
	printf("Mora em uma enorme mansao e possui muitos funcionarios. Por nao ter empatia exige que seus \n");
	printf("Funcionarios fiquem ate antes de voce dormir e estejam na mansao antes que você acorde.\n");
	printf("Um dia, quando mal-humorado, libera seus funcionarios no meio da \n");
	printf("madrugada e comeca a fazer sua rotina antes de dormir \n");
	printf("----------------------------------------------------------\n");
	system("pause");
	system("cls");
	
	/* INICIO */
	/* 2°QUADRO */
	setlocale(LC_ALL,"Portuguese");
	printf("----------------------------------------------------------\n");
	printf("                          Quadro                          \n");
	printf("----------------------------------------------------------\n");
	printf("Voce depois de mais um dia seguindo sua vida normalmente, com todo seu amargor pelos outros\n");
	printf("Decide deitar-se e pensar no decorrer da sua vida e as coisas que te preocupam\n");
	printf("talvez seja um sintoma da idade...Mas voce nao para de pensar\n");
	printf("Se pudesse escolher...para onde voce iria?\n");
	printf("----------------------------------------------------------\n");
	system("pause");
	system("cls");

	/* códgio de validação de escolha */
	do {
		printf("----------------------------------------------------------\n");
		printf("Voce, %s, deseja ir para:\n", nome);
		printf("a-) Futuro\n");
		printf("b-) Passado\n");
		printf("c-) Presente\n");
		scanf("%c", &opc);
		system("cls");
	} while (opc=="a" && opc=="b" && opc=="c");
	
	switch(opc){
	case'a':
		printf("----------------------------------------------------------\n");
		printf("Voce decidiu ir ao futuro\n");
		printf("----------------------------------------------------------\n");
		system("pause");
		system("cls");
		printf("----------------------------------------------------------\n");

		printf("Voce leva sua pesada consciencia ao travesseiro e adormece\n");
		printf("Sua conciencia se perde mas volta rapidamente\n");
		printf("O brilho do dia clareia sua visao \n");
		printf("O cansaço e a sensaçao de nao ter dormido eh grande.\n");
		printf(" Ao lado de sua cama dura a rangente esta Maria Clara, chefe das empregadas");
		printf("----------------------------------------------------------\n");

		system("pause");
		system("cls");
		break;
	case'b':
		printf("----------------------------------------------------------\n");
		printf("Voce decidiu ir ao passado\n");
		printf("----------------------------------------------------------\n");
		system("pause");
		system("cls");
		printf("----------------------------------------------------------\n");
		printf("Voce leva sua pesada consciencia ao travesseiro e adormece\n");
		printf("Sua conciencia se perde mas volta rapidamente\n");
		printf("O brilho do dia clareia sua visao \n");
		printf("O cansaço e a sensaçao de nao ter dormido eh grande.\n");
		printf("Ao lado de sua macia, seu mordomo e amigo de infancia, Nathan. \n");
		printf("----------------------------------------------------------\n");

		system("pause");
		system("cls");
		break;
	case'c':
		printf("----------------------------------------------------------\n");
		printf("Voce decidiu ficar no presente\n");
		printf("----------------------------------------------------------\n");
		system("pause");
		system("cls");
		printf("----------------------------------------------------------\n");
		printf("Voce leva sua pesada consciencia ao travesseiro e adormece\n");
		printf("Sua conciencia se perde mas volta rapidamente\n");
		printf("O brilho do dia clareia sua visao \n");
		printf("O cansaço e a sensaçao de nao ter dormido eh grande.\n");
		printf("Tudo está como deveria ser, uma unica coisa nao estava normal. \n");
		printf("Ao lado de sua cama estava sua nova funcionaria, Jisele. \n");
		printf("----------------------------------------------------------\n");

		system("pause");
		system("cls");
		break;
	default:
		printf("Erro 201 - variavel não encontrada \n");
		break;
	}
	
	/* 3°QUADRO */
		printf("Voce nao se importa com a pessoa que esta ao lado de sua cama \n");
		printf("A sensaçao de nao ter dormido o irrita \n");
		printf("Ei voce que esta parado, me traga uma agua agora \n");
	
	
	/* 4°QUADRO */
		printf("No entanto a figura rapidamente responde:\n");
	switch(opc){
		
	case'a': 
	printf("----------------------------------------------------------\n");
	printf("Maria Clara: Pois pegue voce! Escoria! Pensa que sou funcionaria?\n");
	printf("----------------------------------------------------------\n");
	system("pause");
	system("cls");
	break;
	
	case'b':
	printf("----------------------------------------------------------\n");
	printf("Nathan: Voce nao era assim, o que aconteceu com voce ?\n");
	printf("----------------------------------------------------------\n");
	system("pause");
	system("cls");
	break;
	
	case'c':
	printf("----------------------------------------------------------\n");
	printf("Jisele: Bem que falaram o quanto voce era um bicho preguica!\n");
	printf("----------------------------------------------------------\n");
	system("pause");
	system("cls");
	break;
	
	default:
	printf("Erro 401 - variavel invalida \n");
	break;
	}
	
	/* 5°QUADRO */
	switch(opc){
		
	case'a': 
		printf("----------------------------------------------------------\n");
		printf("%s: Que atrevimento eh esse? Te coloco na rua sem pensar duas vezes!\n", nome);
		printf("Maria Clara: Atrevimento sao suas atitudes!\n");
		printf("Maria Clara: Nao percebe nem com que esta falando %s!\n", nome);
		printf("Maria Clara: Olhe para a sua volta, voce nao esta no lugar que estava antes\n");
		printf("----------------------------------------------------------\n");
		system("pause");
		system("cls");
	break;
	
	case'b':
		printf("----------------------------------------------------------\n");
		printf("%s: Exato, seja rapido e sem problemas no caminho, essa fase ja se foi\n", nome);
		printf("Nathan: Ja se foi? Não sente esse cheiro nostagico no ar ? %s\n", nome);
		printf("Nathan: Consegue escutar esse som ? Nao percebe ? \n");
		printf("Nathan: Por que nao saimos um pouco la fora \n");	
		printf("----------------------------------------------------------\n");
		system("pause");
		system("cls");
	break;
	
	case'c':
		printf("----------------------------------------------------------\n");
		printf("%s: Acha que so porque voce e nova aqui nao te expulso? Ja que me conhece bem, deveria saber!\n", nome);
		printf("Jisele: Arrogante, cego e inconsequente, exatamente como falam. \n");
		printf("Jisele: Não consegue nem diferenciar o que mudou a sua volta. \n");
		printf("----------------------------------------------------------\n");	
		system("pause");
		system("cls");
	break;
	
	default:
	printf("Erro 501 - variavel invalida \n");
	break;
	}

	/* 6°QUADRO */
	
	
	
	
	
return 0;
}


