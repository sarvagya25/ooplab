#include<stdio.h>
int main()
{
	int n,i,digits=0,c;
	printf("enter a number");
	scanf("%d", &n);
	while(n!=0){
		digits++;
	n=n/10;
	}
	
	printf("%d", digits);
	for(i=0;i<=digits;i++)
	{if(n%10>=1&&n%10<=5)
	
{c=0;
}
else
c=1;
}
}
