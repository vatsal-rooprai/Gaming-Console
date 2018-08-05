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
	char main='y';
	main:
	system("cls");
	cout<<"\n                    WELCOME TO THE CONSOLE!!!\n\n";
	cout<<"Choose an activity to perform\n\n";
	cout<<"1. GAMING CENTER\n2. SUDOKU- A COMPARISON BETWEEN GREEDY METHOD AND BRUTE FORCE\n3. CREDITS\n4. EXIT \n";
	cin>>opt;
	switch(opt)
	{
	case 1:
		system("game.exe");
		system("cls");
		goto main;
	case 2:
		system("cls");
		system("sudoku.exe");
		system("cls");
		goto main;
	
	case 3:
		system("cls");
		system("credits.exe");
		system("cls");
		goto main;
		
	case 4:
		exit(0);
	}
}
