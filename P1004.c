#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
  char num_a[41]= {0,}, num_b[41]= {0,}; 
  while(scanf("%s%s", num_a, num_b)!=EOF){
  	  char num_a_o[41]={0,}, num_b_o[41]={0,}, num_ans[41]={0,}; 
  	  register int i, len_a, len_b;
  	  len_a= strlen(num_a);
  	  len_b= strlen(num_b);
  	  char bol_next_plus_one;
	  for(i= 0; i<41; i++){
	  	num_a_o[40-i]= i>=len_a ? 0 : (num_a[len_a-i-1]-(int)'0');
	  	num_b_o[40-i]= i>=len_b ? 0 : (num_b[len_b-i-1]-(int)'0');
	  	num_ans[40-i]= (num_a_o[40-i]+num_b_o[40-i]+bol_next_plus_one)%10;
	  	bol_next_plus_one= (num_a_o[40-i]+num_b_o[40-i])>9 ? 1 : 0;
	  }
  	  register char bol_start_output=0;
  	  for(i= 0; i<41; i++){
  	  	bol_start_output= num_ans[i]!=0 ? 1 : bol_start_output;
  	  	if(bol_start_output){
  	  		printf("%d", num_ans[i]);
		}
	}
	printf("\n");
  }
  return 0;
}
