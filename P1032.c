#include <stdio.h>
#include <stdlib.h>

int main(){
	int num_rounds;
	scanf("%d", &num_rounds);
	int i, j, num_elements, con_n;
	int tmp_input, num_count, sum_count;
	for(i=0; i<num_rounds; i++){
		scanf("%d%d", &num_elements, &con_n);
		num_count=0;
		sum_count=0;
		for(j=0; j<num_elements; j++){
			scanf("%d", &tmp_input);
			if(tmp_input>con_n){
				sum_count+=tmp_input;
				num_count++;
			}
		}
		if(num_count){
			printf("%.2f\n", (float)sum_count/(float)num_count);
		}else{
			printf("-1\n");
		}
	}
	return 0;
} 
