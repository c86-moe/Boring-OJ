#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int num;
	int num_repeat, i;
	scanf("%d", &num_repeat);
	for(i=0; i<num_repeat; i++){
		scanf("%d", &num);
		printf("%o\n", num);
	}
	return 0;
}
