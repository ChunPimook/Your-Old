#include <stdio.h>
int main() {
	int a;
	printf("Enter your old :");
	scanf_s("%d",&a);
	if (a>=1 && a <= 5) {
		printf("-----------------\n");
		printf("child");
		printf("\n-----------------\n");
	}
	else if (a > 5 && a <= 12) {
		printf("-----------------\n");
		printf("older children");
		printf("\n-----------------\n");
	}
	else if (a > 12 && a <= 20) {
		printf("-----------------\n");
		printf("teens");
		printf("\n-----------------\n");
	}
	else if (a > 20 && a <= 25) {
		printf("-----------------\n");
		printf("young");
		printf("\n-----------------\n");
	}
	else if (a > 25 && a <= 45) {
		printf("-----------------\n");
		printf("adult");
		printf("\n-----------------\n");
	}
	else if (a > 45 && a <= 60) {
		printf("-----------------\n");
		printf("golden age");
		printf("\n-----------------\n");
	}
	else if (a > 60 && a <= 90) {
		printf("-----------------\n");
		printf("the elderly");
		printf("\n-----------------\n");
	}
	else {
		printf("---------------------\n");
		printf("Welcome to heaven!!!");
		printf("\n---------------------\n");
	}
	return 0;
}