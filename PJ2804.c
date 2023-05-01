#include <stdio.h> //biblioteca de comunicaçao com usuario
#include <stdlib.h>//biblioteca de alocaçao de espaço em memoria
#include <locale.h>//biblioteca de alocaçao de texto por regiao
#include <string.h>//biblioteca responsavel por armazenar as strings


int registro()//funçao responsavel por cadastrar os usuarios no sistema
{
	//inicio criaaçao de variaveis/string
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	//final criaaçao de variaveis/string
	printf("digite o cpf a ser cadastrado: ");//coletando dados de usuario
	scanf("%s",cpf);
	strcpy(arquivo,cpf);//responsavel por copiar valores de strings
	          //inicio//
	//cria arquivos de leitura e escrita//
	FILE *file;// cria o arquivo
	file = fopen(arquivo, "w");// cria o arquivo
	fprintf(file,cpf);// salva o arquivo
	fclose(file);// fecha o arquivo
	
	file = fopen(arquivo,"a");
	fprintf(file,",");
	fclose(file);
	
	printf("digite o nome a ser cadastrado: ");
	scanf("%s", nome);
	
	file = fopen(arquivo, "a");
	fprintf(file,nome);
	fclose(file);
	
	printf("digite o sobrenome a ser cadastrado: ");
	scanf("%s", sobrenome);
	
	file = fopen(arquivo,"a");
	fprintf(file,sobrenome);
	fclose(file);
	
	file = fopen(arquivo,"a");
	fprintf(file,",");
	fclose(file);
	
	printf("Digite o cargo a ser cadastrado: ");
	scanf("%s", cargo);
	
	file = fopen(arquivo, "a");
	fprintf(file,cargo);
	fclose(file);
	
	system("pause");
	 
}

int consultar()//var responsavel por consultar arquivos criados
{
	
char cpf[40];
char conteudo[200];

 printf("digite o cpf a ser consultado: ");
 scanf("%s", cpf);
 
  FILE *file;
  file = fopen(cpf,"r");
  
  if(file == NULL)
  {
  	printf("nao foi possivel abrir o arquivo");
  }
  
 while(fgets(conteudo,200,file)!= NULL)
 {
 	printf("\nEsssas sao as informaçoes do usuario: ");
 	printf("%s", conteudo);
 	printf("\n\n");
  } 
 system("pause");

}

int deletar(){
	char cpf[40];
	
	printf("digite o cpf a ser deletado: ");
	scanf("%s",cpf);
	
	remove(cpf);
	
	FILE *file;
	file = fopen(cpf,"r");
	
	if(file == NULL)
	{
		printf("o usuario nao se encontra no sistema!.\n");
		system("pause");
		
	}
	
	
	
}

int sair()//fecha o programa nao imediatamente
{
	
printf("programa encerrado aperte a tecla Enter!");
	exit( 1 );
}


int teste()//teste da aulas passadas
{
	printf("its work pedro\n");	
}


int main()
{
	int opcao=0;//definindo variaveis
	int laco=1;
	for(laco=1;laco=1;)
	{
	system("cls");//responsavel por limpar a tela
	setlocale(LC_ALL, "portuguese");//definindo linguagens
	printf("#### cartório de cartoria ###\n\n");//inicio de omenu
	printf("escolha uma opçao no menu:\n \n");
	printf("\t1 registrar nome\n");
	printf("\t2 consultar nome\n");
	printf("\t3 deletar nome\n");
	printf("\t4 exit\n");
	printf("esse softare e de livre uso!\n");
	printf("opçao:");//fim do menu
	
	scanf("%d", &opcao);//armazenando escolha do usuario
	
	system("cls");
	
	switch(opcao)
	{
		case 1:
		registro();
		break;
		case 2:
			consultar();
		break;
		case 3:
		deletar();
		break;
		case 4:
			sair();
		case 5:
				teste();
				system("pause");
			break;
			
		default:
			printf("nao tem essa opçao >:( !\n");
			system("pause");
			break;
	}

  }
  
}
