#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main() {
	bool flag = false;
	char s[5][10] = { "if","else","goto","continue","return" };
	char *str;
	str = (char*)malloc(sizeof(char) * 10);
	printf("\nEnter the string:");
	scanf("%s", str);
	for (int i = 0; i < 5; i++) {
		if (strcmp(s[i], str) == 0) {
			flag = true;
		}
	}
	if (flag == true) {
		printf("Yes its a keyword\n");
	}
	else {
		printf("No its not a keyword\n");
	}
	system("pause");
}