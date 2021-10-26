#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<iostream>
#include<string.h>
#include<math.h>
#include<locale.h>

//Elaborar um programa em C que apresente o valor da conversão em dólar (US$) de um valor lido em real, o programa deve solicitar a cotação do dólar e também a quantidade de reais disponível com o usuário.


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

