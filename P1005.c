#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int num_a, num_b;
	int num_repeat, i;
	scanf("%d", &num_repeat);
	for(i=0; i<num_repeat; i++){
		scanf("%d%d", &num_a, &num_b);
		register int j= 1;
		int num_ans= 1;
		if(num_a>num_b){
			int tmp_swap= num_a;
			num_a= num_b;
			num_b= tmp_swap;
		}
		for(j=num_b-num_a; j<=num_a; j++){
			if(!(num_a%j)&&!(num_b%j)){
				num_ans= j;
			}
		}
		printf("%d\n", num_ans);
	}
	return 0;
}
