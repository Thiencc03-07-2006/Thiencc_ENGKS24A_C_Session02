#include <stdio.h>

int main(){
	int edge,perimeter,area;
	printf ("canh hinh vuong ");
	scanf ("%d",&edge);
	perimeter=edge*4,area=edge*edge;
	printf ("hinh vuong canh dai %d co chu vi %d va dien tich %d",edge,perimeter,area);
	return 0;
} 
