/*2.����һ���Ǹ����� num������������λ�ϵ�������ӣ�ֱ�����Ϊһλ����
	
	ʾ��:
	����: 38
	���: 2 
	����: ��λ��ӵĹ���Ϊ��3 + 8 = 11, 1 + 1 = 2�� ���� 2 ��һλ�������Է��� 2��
*/

#include<stdio.h>
#include<string.h>
#define N 20

int main(){
	int num, sum, i;
	int size = 0;
	int numArr[N] = {0};
	scanf("%d", &sum);
	
	while(sum >= 10){
		num = sum;
		for(i = 0; num%10 || num > 0; i++){
		
			numArr[i] = num%10;
			num = (num-num%10)/10;  
	
		}
		size = i;
		for(i = 0,sum = 0; i < size; i++){
			sum += numArr[i];
		}
//		�����������ַ�ʽ �� 
//1.		for (i = 0; i < size; i++){
//	    		numArr[i] = 0 ;  
//			}

//2.		memset(numArr, 0, N * sizeof(int)); 
//3.      
		memset(numArr, 0, sizeof(numArr));   
	}
	printf("%d", sum);

	
	return 0;
}
