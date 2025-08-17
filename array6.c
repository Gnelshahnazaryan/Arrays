#include <stdio.h>
#define SIZE 4


int main(){

	int arr[SIZE];
	int res = 0;
	int res1 = 1;

	for(int i = 0; i<SIZE; i++){
		
		scanf("%d",&arr[i]);
		res += arr[i];
		res1 *= arr[i];

	}

	printf("%d\n %d",res,res1);

	

}
