#include <stdio.h>
#include "MyersTriangle.h"

int main(int argc, char** argv)
{
	int a, b, c;

	while(1)
	{
		printf("3辺の値を入力してください\n");
	
		printf("a辺の長さ： ");
		scanf("%d", &a);
		printf("b辺の長さ： ");
		scanf("%d", &b);
		printf("c辺の長さ： ");
		scanf("%d", &c);
	
		switch(VerifyTriangle(a, b, c))
		{
		case RegularTriangle:
			printf("正三角形\n");
			break;
		case IsoscelesTriangle:
			printf("二等辺三角形\n");
			break;
		case ScaleneTriangle:
			printf("不等辺三角形\n");
			break;
		case NotTriangle:
			printf("三角形ではありません\n");
			break;
		default:
			printf("入力が不正です\n");
			break;
		}
		printf("\n");
	}

	return 0;
}
