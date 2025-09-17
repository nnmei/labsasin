#include <stdio.h>
#include <string.h>
int compare(char s[50],char w[10]){
	int i,j,count;
	int lengths,lengthw;
	lengths = strlen(s);
	lengthw = strlen(w);
	for(i=0 ; i < lengths ; i++){
		if(s[i] == w[0]{
		for(j=1 ; j < lengthw ; j++){
			if(s[i+j] != w[j]) break;
			count++;
			}
		}
	}
	printf("%d",count);
}
int main(){
	char s[50];
	char w[10];
	printf("Please input sentence : "); scanf("%s",s);
	printf("Please input word  to compare : "); scanf("%s",w);
	compare(s,w);
}