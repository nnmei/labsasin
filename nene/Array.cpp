#include <stdio.h>
#include <string.h>
int main() {
	char sentence[100];
	char word[100];

	printf("Input sentence : "); gets(sentence);
	printf("Input word to compare : "); gets(word);

	char cp[50][50];
	char cp2[50][50];
	int lengths, count = 0, lengthw, location  = 0;
	lengths = strlen(sentence);
	lengthw = strlen(word);

	int i,j;
	for(i=0; i < lengthw; i++){
		cp[0][i] = word[i];
	}
	for(i=0; i < lengths; i++){
		for(j=0; j < lengthw; j++){
			cp2[i][j] = sentence[i+j];
		}
		cp2[i][lengthw] = '\0';
		printf("%s\n",cp2[i]);
	}

	for(i=0; i<lengths; i++){
		if(strcmp(cp[0],cp2[i]) == 0) {
			count++;
		}
	}
	//printf("%d %s\n",location,cp2[4]);
	printf("%s find %d word\n",cp[0],count);
}
