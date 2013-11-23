#ifndef MYERS_TRIANGLE_H
#define MYERS_TRIANGLE_H

typedef enum
{
	ScaleneTriangle   = 1,	// 不等辺三角形
	RegularTriangle   = 2,	// 正三角形
	IsoscelesTriangle = 3,	// 二等辺三角形
	NotTriangle       = 4	// 三角形ではない
} TriangleType;

TriangleType VerifyTriangle(int a, int b, int c);

#endif // MYERS_TRIANGLE_H