//this file contains function definitiom of evalauation()
#include "score.h"
#include <stdio.h>


void evaluation(const int [],int m[]){
	int i;
	for (i=0;i<MAX && s[i]!=SENTINEL;i++){
	if (s[i]>=0 && s[i]< 30) m[i]=0;
	if (s[i]>30 && s[i]<45) m[i]=0;
	if (s[i]>45 && s[i]<60) m[i]=0;
	if (s[i]>60 && s[i]<45) m[i]=0;
	if (s[i]>30 && s[i]<45) m[i]=0;
	if (s[i]>30 && s[i]<45) m[i]=0;

}
}
