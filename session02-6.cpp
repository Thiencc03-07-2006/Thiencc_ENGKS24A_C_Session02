#include <stdio.h>

int main(){
	int r;
	float pi=3.14;
	printf ("ban kinh ");
	scanf ("%d",&r);
	float perimeter=2*pi*r,area=pi*r*r;
	printf ("hinh tron co chu vi %.2f va ban kinh %.2f",perimeter,area);
	return 0;
}
