#include<stdio.h>
#include<conio.h>
int main()
{
	int num=1;	//initializing the variable
	while(num<=10)	//while loop with condition
	{
		printf("%d\n",num);
		num++;		//incrementing operation
	}

    int num=1;	//initializing the variable
	do	//do-while loop 
	{
		printf("%d\n",2*num);
		num++;		//incrementing operation
	}while(num<=10);

    int number;
	for(number=1;number<=10;number++)	//for loop to print 1-10 numbers
	{
		printf("%d\n",number);		//to print the number
	}
	return 0;
}

