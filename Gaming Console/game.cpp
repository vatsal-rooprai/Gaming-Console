#include<stdio.h>
#include<iostream>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
#include<process.h>
using namespace std;
int main()
{
	
	int opt;
	char game='y';
	ga:
	system("cls");
	printf("\t\t\t*****WELCOME TO THE GAMING WORLD******\n\n\n");
	printf("\t\t\t********SELECT A GAME TO PLAY********\n\n\n");
	printf("\t\t\t     1. QUIZ GAME \n\t\t\t     2. SNAKE \n\t\t\t     3. EXIT \t");
	scanf("%d",&opt);
	switch(opt)
	{
	case 1:
		system("cquizgame.exe");
		system("cls");
		goto ga;
	case 2:
		system("cls");
		system("snake.exe");
		system("cls");
		goto ga;
	
	case 3:
		system("cls");
		printf(" \nARE YOU SURE YOU WANT TO EXIT GAMING CENTER? \nENTER 'y' FOR YES AND 'n' FOR NO.\n");
		cin>>game;
		if(game=='n')
		goto ga;
		else
		exit(0);
	
	}
}
