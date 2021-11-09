#include<stdio.h>
int main() {
	float n,s;
	printf("nhap so n:");
	scanf("%f",&n);
	while ((n<=1) && (n>=-1)) {
		printf("\n moi ban nhap lai so n:");
		scanf("%f",&n);	
	}
	float i;
	i = 1;
	if (n>0) {
		while (i<=n) {
		s += (1/i);
		i++;}
	} else {
		while ((i-2)>=n) {
		s += (1/(i-2));
		i--;}
	}
	printf("tong so: %f",s);
}
