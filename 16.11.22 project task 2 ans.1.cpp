#include<stdio.h>

main(){
	
	int a,b,c;
	printf("enter the value of a:-");
	scanf("%i",&a);
	printf("enter the value of b:-");
	scanf("%i",&b);
	c=a;
	a=b;
	b=c;
	
	printf("swapped a:-%i\n",a);
	printf("swapped b:-%i\n",b);
	
}
