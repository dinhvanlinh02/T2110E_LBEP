#include<stdio.h>
#include<conio.h>
int main(){
	int n;
	printf("Nhap n =");
	scanf("%d", &n);
	int s = 0 ;
	for(int i = 0; i <= n; i++)
	{
		if(i % 2 != 0)
		s = s + i;
	}
	printf("s = %d",s);
	
	return 0;
}
