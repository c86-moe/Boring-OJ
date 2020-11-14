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
		if(num_a>num_b){
			int tmp_swap= num_a;
			num_a= num_b;
			num_b= tmp_swap;
		}
		while(((long)num_b*(long)j)%((long)num_a)!=0){
			j++;
		}
		printf("%ld\n", (long)num_b*(long)j);
	}
	return 0;
}
