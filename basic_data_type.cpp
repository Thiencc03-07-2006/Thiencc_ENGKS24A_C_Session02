#include <stdio.h>

int main() {
	//so nguyen(Z)(%d)
	short num1=1; // 2bytes -32,768-->32,767
	int num2=2; // 4bytes -2,147,483,648-->2,147,483,647
	long num3=3; // 4bytes -2,147,483,648-->2,147,483,647
	//so thuc(R)(%f)
	float num4=4.4; // 4bytes 1.2E-38-->3.4E+38
	double num5=5.5; // 8bytes 1.7E-308-->1.7E+308
	//ky tu (%c)
	char word='w'; // 1bytes !(chi lay ki tu cuoi)
	//logic? true false
	int num6=100>40?6:7;
	int num7=6+(7>6);
    return 0;
}
