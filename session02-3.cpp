#include <stdio.h>

int main(){
	float num1,num2;
	printf ("nhap so 1 ");
	scanf("%f",&num1);
	printf ("nhap so 2 ");
	scanf("%f",&num2);
	int sum=num1+num2,difference=num1-num2,product=num1*num2; 
	float quotient=num1/num2;
	printf("%.2f + %.2f = %d\n%.2f - %.2f = %d\n%.2f * %.2f = %d\n%.2f / %.2f = %.2f",num1,num2,sum,num1,num2,difference,num1,num2,product,num1,num2,quotient); 
	return 0;
}
