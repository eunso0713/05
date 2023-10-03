#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	char c;
	int n;
	 while ( (c = getchar()) != '\n')
	 	if(c >= '0' && c <= '9') n = n+1;
	printf("문자열의 길이는 %d 입니다.\n", n);
	system("PAUSE");
	return 0;
}
