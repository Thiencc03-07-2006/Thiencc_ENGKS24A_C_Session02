#include <stdio.h>

int main(){
	int length,width;
	printf ("chieu dai hinh chu nhat ");
	scanf ("%d",&length);
	printf ("chieu ngan hinh chu nhat ");
	scanf ("%d",&width);
	int perimeter=length*2+width*2,area=length*width;
	printf ("hinh chu nhat co chu vi %d va dien tich %d",perimeter,area);
	return 0;
}
