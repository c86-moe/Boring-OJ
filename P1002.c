#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
  int num_a, num_b; 
  while(scanf("%d%d", &num_a, &num_b)!=EOF){
  	printf("%ld\n", (long)num_a+(long)num_b);
  }
  return 0;
}
