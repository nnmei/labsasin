#include <stdio.h>
#include <math.h>
float degree(int h, int m){
	float d;
	d = (30*h) - (5.5*m);
	//printf("%f",d);
	//printf("%f",fabs(d));
	printf("degree of %d:%d = %.2f degree\n",h,m,fabs(d));
}
int main(){
	int h;
	int m;
	printf("Please input hour(1-12) : "); scanf("%d",&h);
	printf("Please input minute(0-60) : "); scanf("%d",&m);
	degree(h,m);
}