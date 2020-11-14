#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int num[3];
	int num_repeat, i;
	scanf("%d", &num_repeat);
	for(i=0; i<num_repeat; i++){
		scanf("%d%d%d", &num[0], &num[1], &num[2]);
		register int j= 1;
		int num_ans= 1;
		int limit=999999999;
		for(j= 0; j< 3; j++){
			limit= limit>num[i] ? num[i] : limit;
		}
		for(j=2; j<=limit; j++){
			if(!(num[0]%j)&&!(num[1]%j)&&!(num[2]%j)){
				num_ans= j;
			}
		}
		printf("%d\n", num_ans);
	}
	return 0;
}
