#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int num;
	int num_repeat, i;
	scanf("%d", &num_repeat);
	for(i=0; i<num_repeat; i++){
		register int j, tmp_exist, tmp_power;
		char bol_flag=0;
		scanf("%d", &num);
		for(j=15; j>=0; j--){
			tmp_power=pow(2, j);
			if(num>=tmp_power){
				num-=tmp_power;
				bol_flag=1;
				printf("1");
			}else{
				if(bol_flag) printf("0");
			}
		}
		printf("\n");
	}
	return 0;
}
