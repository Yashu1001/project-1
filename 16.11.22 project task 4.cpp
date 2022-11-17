#include<stdio.h>

main(){
	
	float salary,hra=10,da=5,ta=8;
	float gs;
	
	printf("enter salary");
	scanf("%f",&salary);
	
	hra=(10*salary)/100;
	da=(5*salary)/100;
	ta=(8*salary)/100;
	
	gs=(salary+hra+da+ta);
	
	printf("%f",gs);
}

