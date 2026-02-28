#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	int range_Max =1500;
	int range_Min =1000;
	int number ; 
	int i;
	int k;
	int j;
	
	k = 1000 / 2 ;
	number = k * 2 - 1;
	j=(range_Max - range_Min) / 2 ; 
	
	  for(i=0; i < j; i++){
	  	if(number > 1000 || number < 1500) //1000~1500
	  	number += 2;      
	  	printf("%d\n",number);
	  }
	return 0;
}
