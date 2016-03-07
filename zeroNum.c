/*把数字移动到末尾，刚开始的时候，最后的i--没有加，导致重新计算的时候下标不对*/
#include <stdio.h>
void moveZeroes(int* nums, int numSize) {

	int i, j;
	int k = 0;
	int tmp;
	int exchange = 1;
	for ( i = 0; i < numSize &exchange; i++){
		if( nums[i]!=0)
			continue; 
		k++;
		exchange = 0;
        tmp = nums[i];
		for ( j = i; j< numSize - k ; j++){
			if(nums[j+1] == 0)
				exchange = 1;
			nums[j] = nums[j+1];
		}
		nums[j] = tmp;
		i--;
	}

}
int main(void)
{
	int i;
	int a[] = {0,0,1};
	moveZeroes(a,sizeof(a)/sizeof(a[0]));
	for ( i = 0; i<sizeof(a)/sizeof(a[0]); i++){
	
	printf("%d ",a[i]);
	}
	printf("\n");
	return 0;
}
