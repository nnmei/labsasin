#include <stdio.h>
int airplane(int t,float a,float wh,float we){
	if(t != 0 && a != 0 && wh != 0 && we == 0) {
		we = t*a*wh;
		printf("Weight = %f\n",we);
	} else if(t == 0 && a != 0 && wh != 0 && we != 0) {
		t = we/a/wh;
		printf("tire = %d\n",t);
	} else if(t != 0 && a == 0 && wh != 0 && we != 0) {
		a = we/t/wh;
		printf("Weight = %f\n",a);
	} else if(t != 0 && a != 0 && wh == 0 && we != 0) {
		wh = we/t/a;
		printf("Weight = %f\n",wh);
	} else
		printf("Can't Calculater, have zero more than 1\n");
}
int main(){
	int tire;
	float area,wheel,weight;
	printf("if don't know please enter 0\n");
	printf("Please input tire : "); scanf("%d",&tire);
	printf("Please input area : "); scanf("%f",&area);
	printf("Please input wheel : "); scanf("%f",&wheel);
	printf("Please input weight : "); scanf("%f",&weight);
	airplane(tire,area,wheel,weight);
}