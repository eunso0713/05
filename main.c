#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int i;
	
	scanf("���� �ϳ��� �Է��Ͻÿ� :%d", &i);
	
	printf("�Է��Ͻ� ���� %d�� ", i);
	if (i<0)
		i=i*-1;
	printf("���밪�� %d �Դϴ�.", i);
	
	system("PAUSE");
	return 0;
}
