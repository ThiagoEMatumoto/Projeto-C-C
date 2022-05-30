#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(int argc, char *argv[]) {
	
	char nome[15];
	char opc;
	char decisao;
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

	/* código de validação de escolha */
// Não está funcionando
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
	system("color 4");
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
	system("color 4");
	printf("Erro 501 - variavel invalida \n");
	break;
	}

	/* 6°QUADRO */
	switch(opc){
		
	case'a': 
		printf("----------------------------------------------------------\n");
		printf("%s: O QUE ACONTECEU COM MINHA CASA? POR QUE ELA ESTA DESTRUIDA? \n", nome);
		printf("Maria Clara: Por enquanto? nada..Mas eh o destino dela, caso tudo continue igual\n");
		printf("Maria Clara: Talvez eu devesse te alertar que tudo eh culpa sua, mas voce ja sabe\n");
		printf("Maria Clara: Pare de tentar se esconder atras de mentiras\n");
		printf("%s: Como eu iria saber? \n", nome);
		printf("Maria Clara: Voce se conhece melhor que ninguem, nao serei eu que irei explicar\n");
		printf("Maria Clara: Aceitarah o futuro, ou ira enfrenta-lo?\n");
		printf("----------------------------------------------------------\n");
		system("pause");
		system("cls");
	break;
	
	case'b':
		printf("----------------------------------------------------------\n");
		printf("%s: Ma-Mas que lugar é esse?", nome);
		printf("Nathan: Nao reconhece? Não sente cheiro de infancia? O som do sorveteiro na esquina \n", nome);
		printf("Nathan: Vamos ouça! Os carros tao raros, mas a paisagem tao incrivel\n");
		printf("Nathan: Nao sente saudade nao eh? Tudo antes era mais colorido e foi ficando mais cinza\n");
		printf("Nathan: Inclusive voce, nao acha?\n");
		printf("Nathan: Se voce nao sente saudade de quem voce ja foi, talvez sinta dessa antiga vizinhanca \n");
		printf("Nathan: Tudo mais colorido, sem dores, apenas nos dois na rua a brincar\n");	
		printf("Nathan: Voce sente falta?\n");
		printf("----------------------------------------------------------\n");
		system("pause");
		system("cls");
	break;
	
	case'c':
		printf("----------------------------------------------------------\n");
		printf("%s: Mas nada mudou!\n", nome);
		printf("Jisele: Olhe novamente \n");
		printf("Jisele: Percebe? Sua casa esta indo rumo ao fim, bem como voce \n");
		printf("%s: Mas minha casa...como?\n", nome)
		printf("Jisele: Suas acoes levaram a isso! Tudo que vier a acontecer a SUA casa\n");
		printf("SEUS funcionarios e SUAS relacoes, sao culpa sua, nao percebe?\n");
		printf("Jisele: Nao deseja a mudanca, %s ? ", nome)
		printf("----------------------------------------------------------\n");	
		system("pause");
		system("cls");
	break;
		
	default:
	system("color 4");
	printf("Erro 601 - variavel invalida \n");
	break;

}


	/* 7°QUADRO */ CRIAR UMA VARIAVE L CHAMADA DECISAO
printf("Talvez o que os fantasma te falam possuem algum fundo de razao\n");
printf("Pensar nunca como foi seu forte, do contrario, nao estaria aqui\n");
printf("Voce aceita o que o fantasma te fala? Ou ainda assim..Soa irreal\n");
printf("[a] Sim \n");
printf("[b] Nao \n");
scanf("%s", &decisao );

	switch(opc){
		
	case'a': 
		printf("----------------------------------------------------------\n");
		if (decisao == "a")
			printf("Sinto muito por ter te colocado nessa situação Maria \n");
			printf("Agradeço pelos seus esforços dentro de minha casa \n");
		if (decisao == "b")
			printf("Isso é mentira sua, brincadeira de mal gosto \n");
			printf("É tudo asneiras! Tipico de gente de sangue ruim \n");
		printf("----------------------------------------------------------\n");
		system("pause");
		system("cls");
	break;
	
	case'b':
		printf("----------------------------------------------------------\n");
		if (decisao == "a")
			printf("Me tornei desse jeito para me proteger \n");
			printf("Não foi minha intenção mudar nossa amizade, sinto falta da gente \n");
			printf("Nathan, não te afastei por querer, perdão.\n");
		if (decisao == "b")
			printf("Me tornei desse jeito para me proteger \n");
			printf("Você não entende, era necessário !\n");
			printf("O que vivemos ficou no passado!");
		printf("----------------------------------------------------------\n");
		system("pause");
		system("cls");
	break;
	
	case'c':
		printf("----------------------------------------------------------\n");
		if (decisao == "a")
			printf("Não tive um passado fácil Jisele\n");
			printf("Mas também não posso discontar o que aconteceu em vocês\n");
			printf("Desculpa por causar transtornos em suas vidas\n");
		if (decisao == "b")
			printf("Mas o que você tem a ver com aas minhas ações\n");
			printf("O que tudo isso tem a ver comigo, é tudo culpa de vocês \n");
			printf("Ponha-se em seu lugar Jisele");
		printf("----------------------------------------------------------\n");	
		system("pause"); 
		system("cls");
	break;
	
	default:
	system("color 4");
	printf("Erro 701 - variavel invalida \n");
	break;
}

/* 8°QUADRO */
		printf("----------------------------------------------------------\n");
		printf("Mas e você?");
		printf("----------------------------------------------------------\n");	
		system("pause"); 
		system("cls");
		printf("----------------------------------------------------------\n");
		printf("Mudou para chegar onde chegou? ");
		printf("----------------------------------------------------------\n");	
		system("pause"); 
		system("cls");
		printf("----------------------------------------------------------\n");
		printf("Você se arrepende das mudanças? ");
		printf("----------------------------------------------------------\n");	
		system("pause"); 
		system("cls");
		printf("----------------------------------------------------------\n");
		printf("Sente falta do passado? ");
		printf("----------------------------------------------------------\n");	
		system("pause"); 
		system("cls");
		printf("----------------------------------------------------------\n");
		printf("O que te custou a suas mudanças? ");
		printf("----------------------------------------------------------\n");	
		system("pause"); 
		system("cls");
/* 9°QUADRO */

/* 10°QUADRO */

/* 11°QUADRO */
 
/* 12°QUADRO */

/* 13°QUADRO */
switch(opc){
		
	case'a': 
		printf("----------------------------------------------------------\n");
		printf("%s: Como cheguei nessa situação?...\n", nome);
		printf("Maria Clara: Me diga voce, ja te aguentei tanto! Mesmo te odiando\n");
		printf("Maria Clara: Foi insuportavel!\n")
		printf("Voce sempre me maltratou, mas fui a unica que segui sem hesitar\n")		
		printf("valeria a pena se arrepender realmente?\n")
		printf("Maria Clara: Acho que voce nao tem um coracao capaz de sentir pena\n")
		printf("----------------------------------------------------------\n");
		system("pause");
		system("cls");
	break;
	
	case'b':
		printf("----------------------------------------------------------\n");
		printf("%s: Que fundo de poco eh esse??", nome);
		printf("Nathan: Respire fundo, velho amigo! So nao podemos mudar quem somos \n", nome);
		printf("quando morremos, ate la voce tem tempo para refletir \n")
		printf("Uma sensacao diferente inunda seu peito, como se sente?\n");
		printf("esta aberto a mudancas?");
		printf("----------------------------------------------------------\n");
		system("pause");
		system("cls");
	break;
	
	case'c':
		printf("----------------------------------------------------------\n");
		printf("%s: Como?...Tudo isso ocorreu?...\n", nome);
		printf("Jisele: Tudo parecia melhor quando comecei a trabalhar, mas nao era assim\n");
		printf("Jisele: Voce parecia ser uma boa pessoa e nao esse monstro, fui enganada?\n");
		printf("Jisele: Passei por poucas e boas, e hoje ja nao sei se quero continuar\n");
		printf("Jisele: Isso me enoja\n");
		printf("----------------------------------------------------------\n");	
		system("pause");
		system("cls");
	break;

	default:
	system("color 4");
	printf("Erro 1301 - variavel invalida \n");
	break;
}

/* 14°QUADRO */
/* 15°QUADRO */
/* 16°QUADRO */



