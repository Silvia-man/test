#include<stdio.h>
#define N 9
void out(int *);
 
int main(){
	int nums[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	int i,t;								//iΪѭ��������tΪ��ʱ���� 
	
//	printf("\n �Ե�ǰ�Ľ��Ϊ�� "); 		//����Ŀ����Ҫ����ע�͵� 
//	out(nums);
 	
	for(i = 0; i<N/2; i++){					//Ԫ�ضԵ� 
		t = nums[i];
		nums[i] = nums[N-1-i];
		nums[N-1-i] = t;
	}
	
	printf("\n �Ե���Ľ��Ϊ�� "); 
	out(nums);
	
	return 0;
} 

void out(int * nums){					//����Ԫ����� 
	int i;
	
	for(i = 0; i < N; i++){
		printf("%3d",nums[i]);
	}
	printf("\n"); 
	
}
