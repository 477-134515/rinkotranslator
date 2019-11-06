#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
int main(int argc, char **argv){int i=0;char k[3]="\0";srand(time(NULL));
	setlocale(LC_ALL,"korean");
	for(i=1;i<argc-1;i++){
		if (rand()%6==0){
			printf("그... %s.. ",argv[i]);}
		else if (rand()%6==1){
			printf("%s... ",argv[i]);}
		else if (rand()%6==2){
                        printf("%c%c%c, %s.. ",argv[i][0],argv[i][1],argv[i][2],argv[i]);}
		else if (rand()%6==3){
			printf("%s, ",argv[i]);}
		else {printf("%s ",argv[i]);}}

	printf("%s...\n",argv[i]);return 0;}
