#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() {
	int n;
	scanf("%d", &n);

	int i;
	for (i = 0; i < n; i++)
	{
		char str[100];
		scanf("%[^\n]", str);
		
		printf("%s\n", str);
	}

	return 0;
}