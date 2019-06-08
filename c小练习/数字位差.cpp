/*
�������г���Ϊ N ��������ÿ��������λ�ϵ�����֮��Ĳ�ľ���ֵΪ K �ķǸ�������

��ע�⣬�������� 0 ����֮�⣬���е�ÿ�����ֶ�������ǰ���㡣���磬01 ��Ϊ��һ��ǰ���㣬��������Ч�ģ��� 0 ����Ч�ġ�
����԰��κ�˳�򷵻ش𰸡�

ʾ�� 1��
���룺N = 3, K = 7
�����[181,292,707,818,929]
���ͣ�ע�⣬070 ����һ����Ч�����֣���Ϊ����ǰ���㡣
ʾ�� 2��
���룺N = 2, K = 1
�����[10,12,21,23,32,34,43,45,54,56,65,67,76,78,87,89,98]
 
��ʾ��
1 <= N <= 9
0 <= K <= 9
*/ 
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void NumSplit(int num, int *numArr){
	int i = 0;
	do{
		numArr[i] =  num - (num/10)*10;
		num = num/10;
		i++;
	}while(num);	
}
bool PanDuan(int num, int length, int k){
	if(length == 1){
		return true;
	} 
	int i = 0;
	int numArr[length];

	NumSplit(num, numArr);
	
	do{
		if(k != abs(numArr[i] - numArr[i+1])){
			return false;
		}
		i++;
	}while(i < length-1);

	return true;
} 
void NumWeiCha(int n, int k){
	int i;
	for(i = (int)pow(10, n-1); i < (int)pow(10, n); i++){
		if(PanDuan(i, n, k)){
			printf("%d  ", i);
		}
	}
}
int main(){
	int n, k;
	printf("N = ");
	scanf("%d", &n);
	printf("K = ");
	scanf("%d", &k);
	
	NumWeiCha(n, k);
	
	return 0;
} 
