#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


int main() {
	int a, b, c, d, e, f;
	f = scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
	__asm {

		mov eax, b
		mov ebx, c
		cdq
		idiv ebx

		mov ebx, d
		imul ebx, e

		sub a, eax
		add a, ebx
	}
	printf("%d", a);
	getchar();
	return 0;

}
