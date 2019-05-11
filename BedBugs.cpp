#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>
#include<string.h>
#include <time.h>

#include "map.h"
#include "functions.h"

int main(){      
    
	system("color B");
	printf("\n\n");
	printf("\t         \\   /	      BED BUGS\n");
	printf("\t         .\\-/.	      EMRE SARAC\n");
	printf("\t     /\\  () ()  /\\\n");
	printf("\t    /  \\ /~-~\\ /  \\      MENU\n");
	printf("\t        y  Y  V  	 P-PLAY\n");
	printf("\t  ,-^-./   |   \\,-^-.    E-EXIT\n");
	printf("\t /    { BED BUG }    \\\n");
	printf("\t       \\   |   /\n");
	printf("\t       /\\  A  /\\\n");
	printf("\t      /  \\/ \\/  \\\n");
	printf("\t     /           \\");

  char select; 
  
	while(1){

    	select = getch();
		if(select=='P' || select =='p')
    		play(); 
	
		if(select=='E' || select =='e'){
			system("CLS");
			printf("\n\t Cikis Yapildi.");
			break;
		}
    		
	}
	getch();
	return 0;
}
