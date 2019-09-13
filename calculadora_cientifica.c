/*
Esta calculadora possui uma série de funções, e foi aplicado diversos conhecimentos tais como:
Vetores,Estruturas de Repetição,Estruturas de Decisão,Funções e Procedimentos,
Passagem de parâmetros com ponteiros e dentro outros...
*/
#include<stdio.h> 
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#include<locale.h>


float A=1,B,R,maiornum,menornum,medianum,vet[1000] = {},acum;
int i,opcao=0,raiza,raizb,X,Y,par1=0,par2=0,pos=0;

void Entrada(float *pA);
void opc();
float adicao(float A);
float subtracao(float A);
float multiplicacao(float A);
float divisao(float A);
float raiz(float A);
void parimpar(float A, float B);
float maior(float *pA);
float menor(float *pA);
float media(float *pA);
float valores(float A, float B);

void Entrada (float *pA){
	printf("\nDigite um numero: ");
    scanf("%f",&A);
}

void EntradaVal (float *pA, float *pB){
	printf("\nDigite o primeiro numero: ");
    scanf("%f",&A);
    printf("\nDigite o segundo numero: ");
    scanf("%f",&B);
}

void opc (){
  system("cls");
  printf("\n\t\t\t ________________________\n");
  printf("\n\t\t\t CALCULADORA CIENTÍFICA !\n");
  printf("\n\t\t\t ________________________\n");
  printf("\n1 - Adicao");        
  printf("\n2 - Subtracao"); 
  printf("\n3 - Multiplicacao");  
  printf("\n4 - Divisao");   
  printf("\n5 - Raiz Quadrada"); 
  printf("\n6 - Par ou Impar"); 
  printf("\n7 - Maior valor"); 
  printf("\n8 - Menor valor"); 
  printf("\n9 - Media"); 
  printf("\n10 - Exibir Valores"); 
  printf("\n20 - Sair");
  printf("\n\n-Escolha um num:");
  scanf("%d",&opcao);
}

void opc2 (){
  system("cls");
  printf("\n\t\t\t ________________________\n");
  printf("\n\t\t\t CALCULADORA CIENTÍFICA !\n");
  printf("\n\t\t\t ________________________\n");
  printf("\n1 - Adicao");        
  printf("\n2 - Subtracao"); 
  printf("\n3 - Multiplicacao");  
  printf("\n4 - Divisao");   
  printf("\n5 - Raiz Quadrada"); 
  printf("\n6 - Par ou Impar"); 
  printf("\n7 - Maior valor"); 
  printf("\n8 - Menor valor"); 
  printf("\n9 - Media"); 
  printf("\n10 - Exibir Valores"); 
  printf("\n20 - Sair");
}

void reset(){
	pos = 0;
	A = 1;
	float vet[1000] = {};
	acum = 0;
	par1 = 0;
}

float adicao(float A){
	vet[pos] = A;
	acum += A;
}

float subtracao(float A){
	vet[pos] = A;
	if(pos == 0){
		acum += A;
	}else{
		acum -= A;
	}
}

float multiplicacao(float A){
	vet[pos] = A;
	acum *= A;
}

float divisao(float A){
	vet[pos] = A;
	if(pos == 0){
		acum = A;
	}else{
		acum /= A;	
	}
}

float raiz(float A){
	vet[pos] = sqrt(A);
}

void parimpar(float A, float B){
	int Ia,Ib;
	Ia = A;
	Ib = B;
    
    if(Ia % 2 == 0){
    	par1 = 1;
	}
	
	if(Ib % 2 == 0){
    	par2 = 1;
	}
	
}

float maior(float *pA){
	vet[pos] = A;
}

float menor(float *pA){
	vet[pos] = A;
}

float media(float *pA){
	vet[pos] = A;
}

float valores(float A, float B){
	printf("\n");
	for(i=A;i<=B;i++){
		printf ("%d\n", i);
	
	}
	printf("\n");
}


main ()
{
setlocale(LC_ALL,"Portuguese");
float Res;

while(opcao != 20){
opc();
if(opcao != 20){
switch(opcao){
	
	
	case 1:
		{
		while(A!=0){
		Entrada(&A);
		if(A!=0){
			adicao(A);
			pos++;
			system("cls");
			opc2();
			printf("\n\nDigite 0 para terminar a operacao!\n");
			printf("\nTotal: %.2f\n",acum);
		}else{
			system("cls");
			opc2();
			printf("\n\nValor Total: %.2f\n\n",acum);
			reset();
			break;
		}
		}
		break;
		}
	
	case 2:
		{
		while(A!=0){
		Entrada(&A);
		if(A!=0){
			subtracao(A);
			pos++;
			system("cls");
			opc2();
			printf("\n\nDigite 0 para terminar a operacao!\n");
			printf("\nTotal: %.2f\n",acum);
		}else{
			system("cls");
			opc2();
			printf("\n\nValor Total: %.2f\n\n",acum);
			reset();
			break;
		}
		}
		break;
		}
	
	case 3:
		{
		acum = 1;
		while(A!=0){
		Entrada(&A);
		if(A!=0){
			multiplicacao(A);
			pos++;
			system("cls");
			opc2();
			printf("\n\nDigite 0 para terminar a operacao!\n");
			printf("\nTotal: %.2f\n",acum);
		}else{
			system("cls");
			opc2();
			printf("\n\nValor Total: %.2f\n\n",acum);
			reset();
			break;
		}
		}
		break;
		}
	
	case 4:
		{
		acum = 1;
		while(A!=0){
		Entrada(&A);
		if(A!=0){
			divisao(A);
			pos++;
			system("cls");
			opc2();
			printf("\n\nDigite 0 para terminar a operacao!\n");
			printf("\nTotal: %.2f\n",acum);
		}else{
			system("cls");
			opc2();
			printf("\n\nValor Total: %.2f\n\n",acum);
			reset();
			break;
		}
		}
		break;
		}
	
	case 5:
		{
		while(A!=0){
		Entrada(&A);
		raiz(A);
		if(A!=0){
			system("cls");
			opc2();
			printf("\n\nDigite 0 para terminar a operacao!\n");
			printf("\nRaizes: ");
			for(i=0;i<=pos;i++){
				printf("%.2f, ",vet[i]);
			}
			printf("\n");
			pos++;
		}else{
			system("cls");
			opc2();
			printf("\n\nTotal Raizes: ");
			for(i=0;i<pos-1;i++){
				printf("%.2f, ",vet[i]);
	
			}
			printf("%.2f.\n\n",vet[i]);
			reset();
			break;
		}
		}
		break;
		}
		
	case 6:
		{
		while(A!=0){
		Entrada(&A);
		if(A!=0){
		parimpar(A,B);
		system("cls");
		opc2();
		printf("\n\nDigite 0 para terminar a operacao!");
		if(par1 == 1){
			printf("\n\n%.0f é Par\n",A);
		}else{
			printf("\n\n%.0f é Impar\n",A);
		}
		reset();
		}
		}
		reset();
		break;
		}
	
	case 7:
		{
		while(A!=0){
		Entrada(&A);
		if(A!=0){
		maior(&A);
		pos++;
		system("cls");
		opc2();
		printf("\n\nValores: ");
		for(i=0;i<pos;i++){
				if(i==(pos-1)){
				printf("%.2f.",vet[i]);
				}else{
				printf("%.2f, ",vet[i]);	
				}
			}
		printf("\n");
		}
		}
		acum = vet[0];
		for(i=0;i<pos;i++){
				if(vet[i]>acum){
					acum = vet[i];
				}
			}
		printf("\nMaior valor é %.2f\n\n",acum);
		reset();
		break;
		}
	
	case 8:
		{
		while(A!=0){
		Entrada(&A);
		if(A!=0){
		menor(&A);
		pos++;
		system("cls");
		opc2();
		printf("\n\nValores: ");
		for(i=0;i<pos;i++){
				if(i==(pos-1)){
				printf("%.2f.",vet[i]);
				}else{
				printf("%.2f, ",vet[i]);	
				}
			}
		printf("\n");
		}
		}
		acum = vet[0];
		for(i=0;i<pos;i++){
				if(vet[i]<acum){
					acum = vet[i];
				}
			}
		printf("\nMenor valor é %.2f\n\n",acum);
		reset();
		break;
		}
	
	case 9:
		{
		while(A!=0){
		Entrada(&A);
		if(A!=0){
		media(&A);
		pos++;
		system("cls");
		opc2();
		printf("\n\nValores: ");
		for(i=0;i<pos;i++){
				if(i==(pos-1)){
				printf("%.2f.",vet[i]);
				}else{
				printf("%.2f , ",vet[i]);
				}
			}
		printf("\n");
		}
		}
		for(i=0;i<pos;i++){
				acum += vet[i];
				}
		printf("\nA Média é %.2f\n\n",acum/pos);
		reset();
		break;
		}
	
	case 10:
		{
		EntradaVal(&A,&B);
		valores(A,B);
		reset();
		break;
	 	}
		
	case 20:
		{
		return 0;
		break;
		}
	
		default:printf("\nEsta opcao e invalida!\n\n");
}
system("PAUSE");
}
}
}
