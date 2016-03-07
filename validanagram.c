/*把数字移动到末尾，刚开始的时候，最后的i--没有加，导致重新计算的时候下标不对*/
#include <stdio.h>
#include <string.h>
int  isAnagram(char* s, char* t) {

	int i; 
	int s_ar[256] = {0}; 
	int t_ar[256] = {0}; 

	/*if( strlen(s) != strlen(t)) 
		leturn -1;
	for ( i =0; i< strlen(s); i++){
		s_ar[*s++]++;
		t_ar[*t++]++;
	}
	*/

	int len = strlen(s);
	char *p = s;
	char *q = t;
	for ( i=0; i<len; i++){
		s_ar[*p++]++;
		t_ar[*q++]++;
	}

	for ( i =0; i<256; i++){
		if(s_ar[i] != t_ar[i])
			return -1;
	}
	return 0;
}
int main(void)
{
	int num;
	num = isAnagram("ab","ba");
	printf("%d\n",num);
	return 0;
}
