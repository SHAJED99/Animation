#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int f1();
int f2();
int f3();

int main()
{
	printf("\n\n\n\n\n\n\n\n\n\n\n");
	f1();
	f2();
	f3();
	system("cls");
	main();
}

int f1()
{
	int l1, c1, t1;
	float d1;
	char r1[]="EMAIL: shajedurrahmanpanna.panna@gmail.com";

	l1=strlen(r1);


	for(c1=0; c1<l1; c1++)
	{
		for(d1=0; d1<100; d1=d1+0.00005);

		printf("\r\t\t\t\t");

		for(t1=0; t1<=c1; t1++)
		{
			printf("%c", r1[t1]);
		}
	}
	printf("\n\n\n\n\n");
}

int f2()
{
	int tt=0, l, c, t;
	float d;
	char r[]="SHAJEDUR RAHMAN PANNAHajee Mohammad Danesh Science and Technology University (HSTU)FEC: CSE; DEP: CSELVL: 1; SEM: 2ID: 1702077";

	l=strlen(r);


	for(c=0; c<l; c++)
	{
		for(d=0; d<100; d=d+0.0001);

		printf("\r\t\t\t\t");

		for(t=tt; t<=c; t++)
		{
			printf("%c", r[t]);
		}
		if(t==21 || t==83 || t==101 || t==115 || t==126) tt=t, printf("\n");
	}
	printf("\n\n\n\n\n");
}

int f3()
{
	double d2;
	for(d2=0; d2<1000; d2=d2+0.000001);
}
