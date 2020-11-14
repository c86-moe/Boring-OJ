#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
	char str[500], str_long[500], str_short[500];
	scanf("%s", str);
	sprintf(str_long, "%s", str);
	sprintf(str_short, "%s", str);
	while(scanf("%s", str)!=EOF){
  		if(strlen(str)<strlen(str_short)){
  			sprintf(str_short, "%s", str);
		}
		if(strlen(str)>strlen(str_long)){
  			sprintf(str_long, "%s", str);
		}
  	}
  	printf("%s\n%s\n", str_long, str_short);
	return 0;
}
