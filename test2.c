#include<stdio.h>
int main()
{
	int a,b,w;
	char ch;
	printf("enter two values:");
	scanf("%d %d",&a,&b);
	do{
	printf("\n+ for addition\n- for subrtraction\n* for multiplication\n");
	scanf(" %c",&ch);
	switch(ch)
	{
		case '+':
			printf("add=%d",(a+b));
			break;
		case '-':
			printf("sub=%d",(a-b));
			break;
		case '*':
			printf("multi=%d",(a*b));
			break;
		default:
			printf("invalid input");
			break;
	}
	printf("\ndo u want to continue\n 1 for yes\n 2 for no\n");
	scanf("%d",&w);
}while(w==1);
}
