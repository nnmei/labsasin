#include <stdio.h>
int day(int d){
	if(d%2 == 0){
		printf("Walk distance in 7 days is 7.05 meters");
	} else
		printf("Walk distance in 7 days is 9.68 meters");
}
float height(float h){
	int count = 1;
	float sum,i;
	for(i = 2.35 ; i < h ; i+2.35){
		count++;
	}
	sum = h-i;
	printf("snail take %d day",count);
	printf("%.2f meters to go 1 more day",sum);
	printf("total %d day",count+1);
}
int main(){
	float h;
	int d;
	printf("Please input height : "); scanf("%f",&h);
	printf("Please inpuat date : "); scanf("%d",&d);
	day(d);
	height(h);
}
