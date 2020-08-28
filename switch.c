#include<stdio.h>
int main()
{
	int ch;
	printf("Enter a number(1 to 5) :");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			printf("Food item - Pasta \nPrice - RS 179");
			break;
		case 2:
			printf("Food item - Burger \nPrice - RS 129");
			break;
		case 3:
			printf("Food item - French Fries \nPrice - RS 99");
			break;
		case 4:
			printf("Food item - Sandwich \nPrice - RS 149");
			break;
		case 5:
			printf("Food item - Pizza \nPrice - RS 239");
			break;
		default:
			printf("Invalid Number");
	}
}
