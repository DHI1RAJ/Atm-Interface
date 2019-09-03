#include<stdio.h>
#include<conio.h>
int pin=1234;/*
int bal=1000;
void balance();
void withdraw();
void deposite();*/
void main()
{
	int spin,choice;
	printf("enter the sceret pin\n");
	scanf("%d",spin);
	if(spin==pin)
	{
		do
		{
			printf("1.balance check\n\n");
			printf("2.withdraw\n\n");
			printf("3.deposite\n\n");
			printf("4.cancel\n\n");
			printf("enter the choice\n");
			scanf("%d",&choice);/*
			switch(choice)
			{
				case 1: void balance();
				break;
				case 2:void withdraw();
				break;
				case 3:void deposite();
				break;
				case 4:exit(0);
				break;
			}*/
		} while(1);
	}
}
/*
void balance()
{
	printf("your balance is %d",&bal);
}
void withdraw()
{
	int amount;
	printf("enter the amount\n\n");
	scanf("%d",amount);
	bal=bal-amount;
	printf("new balance is %d",bal);
}
void deposite()
{
	int amount;
	printf("enter the amount to be deposite\n\n");
	scanf("%d",amount);
	bal=bal+amount;
	printf("balance=%d",bal);
}
 */
