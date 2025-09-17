#include <stdio.h>
int day(int d){
	if(d%2 == 0){
		printf("Walk distance in 7 days is 7.05 meters\n");
	} else
		printf("Walk distance in 7 days is 9.68 meters\n");
}
float height(float h){
	int count = 1;
	float sum;
	float i;
	for( i = 2.35 ; i < h ; i+=2.35){
		count++;
	}
	sum = h-(i-2.35);
	printf("snail take %d day\n",count-1);
	printf("%.2f meters to go 1 more day\n",sum);
	printf("total %d day\n",count);
}
int main(){
	float h;
	int d;
	printf("Please input height : "); scanf("%f",&h);
	printf("Please inpuat date : "); scanf("%d",&d);
	day(d);
	height(h);
}