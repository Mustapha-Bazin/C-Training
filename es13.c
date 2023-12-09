#include<stdio.h>
#include<stdlib.h>

int range_of_even(int *nums,int length, int *min, int *max);

int main(){

	int nums[]={1,2,3,4,5,6,7,8,9};
	int *min;
	int *max;

	range_of_even(nums,sizeof(nums)/sizeof(int),min,max);

	return 0;
}

int range_of_even(int *nums,int length,int *min,int *max){
	
	int i=0;
	min=nums;
	max=nums;
	for(;i<length;i++){
	
		if(nums[i]%2==0){
			
			if(nums[i]<=*min || *min%2!=0){
				min=&nums[i];
				printf("%i\n",*min);
			}else if(nums[i]>=*max || *max%2!=0){
				max=&nums[i];
			}
		}
	}
	
	if(*min%2==0 && *max%2==0){
		return 1;
	}else{
		return 0;
	}

}
