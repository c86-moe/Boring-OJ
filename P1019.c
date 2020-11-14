#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
	char str[501];
	scanf("%s", str);
	register int i;
	for(i=0; i<strlen(str); i++){
		if(str[i]>='A'&&str[i]<='Z'){
			printf("%c", str[i]-('A'-'a'));
		}else{
			printf("%c", str[i]);
		}
	}
	printf("\n");
	return 0;
}
