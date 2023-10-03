#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int answer=59;
	int t, i;
	t=0;
	do
	{
		t+=1; i = 0;
		printf("Guess a number: ");
		scanf("%d", &i);
		if (i>answer) 
			printf("high!\n"); 
		else if (i<answer)
			printf("low!\n");
		else
			break;
	}
	while (i!=answer);
	
	printf("Congratulations! trials: %d\n", t);
	
	
	system("PAUSE");
	return 0;
}
