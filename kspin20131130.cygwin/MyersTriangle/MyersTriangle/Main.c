#include <stdio.h>
#include "MyersTriangle.h"

int main(int argc, char** argv)
{
	int a, b, c;

	while(1)
	{
		printf("3�ӂ̒l����͂��Ă�������\n");
	
		printf("a�ӂ̒����F ");
		scanf("%d", &a);
		printf("b�ӂ̒����F ");
		scanf("%d", &b);
		printf("c�ӂ̒����F ");
		scanf("%d", &c);
	
		switch(VerifyTriangle(a, b, c))
		{
		case RegularTriangle:
			printf("���O�p�`\n");
			break;
		case IsoscelesTriangle:
			printf("�񓙕ӎO�p�`\n");
			break;
		case ScaleneTriangle:
			printf("�s���ӎO�p�`\n");
			break;
		case NotTriangle:
			printf("�O�p�`�ł͂���܂���\n");
			break;
		default:
			printf("���͂��s���ł�\n");
			break;
		}
		printf("\n");
	}

	return 0;
}
