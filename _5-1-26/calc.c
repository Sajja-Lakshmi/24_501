#include<stdio.h>
int main(){
	int a, b;
	printf("Enter numbers with space(2 3): ");
	scanf("%d %d", &a, &b);
	printf("\nEnter operator: ");
	char c;
	scanf(" %c", &c);
	switch (c){
		case '+' : printf("%d %c %d = %d\n", a, c, b, a + b);
			   break;
		case '-' : printf("%d %c %d = %d\n", a, c, b, a - b);
                           break;
		case '*' : printf("%d %c %d = %d\n", a, c, b, a * b);
                           break;
		case '/' : printf("%d %c %d = %d\n", a, c, b, a / b);
                           break;
		default : printf("Invalid\n");
	}
	return 0;
}
