#include<stdio.h>

int main()
{
	int a, n;
	scanf("%d", &a);
	while(a > 0){
		a = a / 10;
		n++;
	}
	printf("%d", n);
} 
