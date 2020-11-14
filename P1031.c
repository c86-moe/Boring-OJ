#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int num_a, num_b, num_c;
	while(scanf("%d%d%d", &num_a, &num_b, &num_c)!=EOF){
  		if(num_a+num_b<=num_c||num_a+num_c<=num_b||num_b+num_c<=num_a){
  			printf("-1\n");
  			continue;
		}
		float num_p= (float)(num_a+num_b+num_c)/2.0;
		printf("%.2f\n", sqrt(num_p*(num_p-num_a)*(num_p-num_b)*(num_p-num_c)));
  	}
	return 0;
}
