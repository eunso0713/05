#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int a, b, result;
	char c;
	printf("enter the calculation: ");
	
	scanf("%d%c%d", &a, &c, &b);
	
	switch(c){
		case '+':
			result=a+b;
			break;
		case '-':
			result=a-b;
			break;
		case '*':
			result=a*b;
			break;
		case '/':
			result=a/b;
			break;
		default:
			printf("¿À·ù\n");
			break;
			}
		printf("%d\n", result);
	system("PAUSE");
	return 0;
}
