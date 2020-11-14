#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int num;
	while(scanf("%d", &num)!=EOF){
  		char bol_flag= 0;
  		register int i;
  		for(i=2; i<num; i++){
  			bol_flag= num%i==0 ? 1 : bol_flag;	
		}
		printf("%s\n", bol_flag ? "No" : "Yes"); 
  	}
	return 0;
}
