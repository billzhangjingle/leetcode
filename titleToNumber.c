/**/
#include <stdio.h>
#include <string.h>
int titleToNumber(char* s) {

	int ret = 0;
	int value;
	int i;
	char *p;
	for ( p = s; *p != '\0';p++ ){
		if(isupper(*p)){
			value = *p - 'A' + 1;    
		}else {
			value = *p -'a' +1;
		}

		ret = ret *26 + value;
	}
	return ret;
}
int main(void)
{
 int num = titleToNumber("AA");
 printf("%d\n",num);
}
