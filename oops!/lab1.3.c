#include<stdio.h>
#include<math.h>
int main()
{
	int i;
	
	for(i=1000;i<=9999;i++){
	int	k=sqrt(i);int t;
		if((k*k)==i){
			t=i;
			int first=t%10;
			t=t/10;
			int second=t%10;
			t=t/10;
			int third=t%10;
			t=t/10;
			int fourth=t%10;
			if(first==second && third==fourth){
				printf("%d",i);
			}
		}
	}
	
	
	
	
	
}
