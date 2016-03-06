#include <stdio.h>

void moveZeroes(int* nums, int numSize) {

	int i, j;
	int k = 0;
	int exchange = 1;
	for ( i = 0; i < numSize &exchange; i++){
		if( nums[i]!=0)
			continue; 
		k++;
		exchange = 0;
		for ( j = i; j< numSize - k - 1; j++){
			if(nums[j+1] == 0)
				exchange = 1;
			nums[j] = nums[j+1];
		}
		nums[j] = 0;
	}

}
int main(void)
{
	int i;
	int a[] = {0,1,0,3,12,0,15,0,0,3,5,8,0};
	moveZeroes(a,sizeof(a)/sizeof(a[0]));
	for ( i = 0; i<sizeof(a)/sizeof(a[0]); i++){
	
	printf("%d ",a[i]);
	}
	printf("\n");
	return 0;
}
