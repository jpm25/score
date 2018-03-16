//this file contains the definition of functions input_scores()
#include  "score.h"
#include  <stdio.h>		//printf() and scanf()


void input_scores(int s[]){
	int i, input=0;
	printf("enter scores, %d to stop:" ,SENTINEL);
	for (i=0;i<MAX && input!=SENTINEL;++1){
		printf("%d: ", i+1 );
		scanf("%d",&input);
		s[i]=input;		//copy the input value to the array
	}//for
	printf("")
}
