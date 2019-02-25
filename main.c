#include <stdio.h>
#include <stdlib.h>

int plus(int a, int b) { return a + b; }
int minus(int a, int b) { return a - b; }
int multiply(int a, int b) { return a * b; }
int divided(int a, int b) { return a / b; }

int (*p[4])(int, int) = {plus, minus, multiply, divided};
int n[255];

int main()
{
	
	int a, c;
	char b;
	printf("key a Function \nEX: 1 + 1\n");
	scanf("%i %c %i", &a, &b, &c);
	n['+'] = 0;
    n['-'] = 1;
    n['*'] = 2;
    n['/'] = 3;
	printf("%d %c %d = %d", a, b, c, p[n[b]](a, c));	
}
