#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int c, e, t, te, tem;
float d;

char r[]="............Hajee Mohammad Danesh Science and Technology University (HSTU).............";

int l=strlen(r);

void f1();
void f2();
void f3();
void f4();
void f5();
void f6();

int main()
{
	f1();
	f2();
	f3();
	f4();
	f5();
	f6();
}

void f1()
{
	printf("\n\n\n\n\n\t\tLoading:  ");
	for(c=0; c<=100; c++)
	{
		for(d=0; d<100; d=d+0.0001);
		printf("\b\b%02d", c);
	}

	te=l-1;
	printf("\n\n\n\n\n");
}

void f2()
{
	for(c=0; c<l; c++)
	{
		for(d=0; d<100; d=d+0.000008);

		printf("\r\t\t");
		for(e=l-1; e>=0; e--)
		{
			tem=(c-e)*(-1);
			if (c-e>0) t=(c-e);
			else t=tem, t=te-t;

			printf("%c", r[t]);
		}
	}

	printf("\n\n\n\n\n");
}

void f3()
{
	for(c=0; c<l; c++)
	{
		for(d=0; d<100; d=d+0.000008);

		printf("\r\t\t");

		for(t=0; t<=c; t++)
		{
			printf("%c", r[t]);
		}
	}
	printf("\n\n\n\n\n");
}

void f4()
{
	for(c=0; c<l; c++)
	{
		for(d=0; d<100; d=d+0.000008);

		printf("\r\t\t");

		for(t=c; t>=0; t--)
		{
			printf("%c", r[l-t-1]);
		}
	}
	printf("\n\n\n\n\n");
}

void f5()
{
		printf("\n\n\n\n\n\t\t\t\t\tLoading:  ");
	for(c=0; c<=100; c++)
	{
		for(d=0; d<100; d=d+0.0001);
		printf("\b\b%02d", c);
	}

	te=l-1;

	for(c=0; c<l; c++)
	{
		for(d=0; d<100; d=d+0.000008);

		printf("\r\t\t");
		for(e=l-1; e>=0; e--)
		{
			tem=(c-e)*(-1);
			if (c-e>0) t=(c-e);
			else t=tem, t=te-t;

			printf("%c", r[t]);
		}
	}

	for(c=0; c<l; c++)
	{
		for(d=0; d<100; d=d+0.000008);

		printf("\r\t\t\t");

		for(t=0; t<=c; t++)
		{
			printf("%c", r[t]);
		}
	}

	for(c=0; c<l; c++)
	{
		for(d=0; d<100; d=d+0.000008);

		printf("\r\t\t\t");

		for(t=c; t>=0; t--)
		{
			printf("%c", r[l-t-1]);
		}
	}
	printf("\n\n");
}

void f6()
{
	int tt=0;
	strcpy(r, "SHAJEDUR RAHMAN PANNALVL: 1; SEM:2DEP: CSEID:1702077");
	l=strlen(r);


	for(c=0; c<l; c++)
	{
		for(d=0; d<100; d=d+0.000008);

		printf("\r\t\t\t\t\t\t\t\t\t\t\t\t");

		for(t=tt; t<=c; t++)
		{
			printf("%c", r[t]);
		}
		if(t==21 || t==34 || t==42) tt=t, printf("\n");
	}
	printf("\n\n\n\n\n");
}
