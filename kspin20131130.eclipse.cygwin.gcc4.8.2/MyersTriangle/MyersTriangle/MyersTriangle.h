#ifndef MYERS_TRIANGLE_H
#define MYERS_TRIANGLE_H

typedef enum
{
	ScaleneTriangle   = 1,	// �s���ӎO�p�`
	RegularTriangle   = 2,	// ���O�p�`
	IsoscelesTriangle = 3,	// �񓙕ӎO�p�`
	NotTriangle       = 4	// �O�p�`�ł͂Ȃ�
} TriangleType;

TriangleType VerifyTriangle(int a, int b, int c);

#endif // MYERS_TRIANGLE_H