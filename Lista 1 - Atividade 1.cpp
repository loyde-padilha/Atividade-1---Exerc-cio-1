#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<iostream>
#include<string.h>
#include<math.h>
#include<locale.h>

//Elaborar um programa em C que apresente o valor da convers�o em d�lar (US$) de um valor lido em real, o programa deve solicitar a cota��o do d�lar e tamb�m a quantidade de reais dispon�vel com o usu�rio.


int main()
{
	float real, dolar, cotacao; 
	printf("Digite o valor em reais que deseja converter: "); 
	scanf("%f", &real);
	printf("Insira o valor da cotacao do dolar: "); 
	scanf("%f", &cotacao); 
	dolar = real * cotacao; 
	printf("O valor em dolar e de: R$ %.2f\n", dolar); 	
	return(0);
}

