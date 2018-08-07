#include<stdio.h>
int main()
{
	int n,r,rev=0,c=0;
	scanf("%d",&n);
while(n!=0)
{
	r=n%10;
	rev=rev*10+r;
	n=n/10;
	c++;
	
	
}	
	printf("%d \n%d",c,rev);
	}
