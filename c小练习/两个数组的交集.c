/*
	�����������飬��дһ���������������ǵĽ����� 
	����: nums1 = [1,2,2,1], nums2 = [2,2] ���: [2] 
	����: nums1 = [4,9,5], nums2 = [9,4,9,8,4] ���: [9,4]
	˵��:
	�������е�ÿ��Ԫ��һ����Ψһ��
	���ǿ��Բ�������������˳��

*/ 
#include<stdio.h>
#include<malloc.h>

int jiaoJi(int* a1, int *a2, int* a3, int n1, int n2);
int main(){
	int n1 = 0, n2 = 0, i, sum = 0;
	int *a1, *a2, *a3;
	
	printf("�������һ������ĳ��ȣ�");
	scanf("%d", &n1);
	a1 = (int *)malloc(n1 * sizeof(int));
	printf("����������Ԫ��");
	for(i = 0; i < n1; i++){
		scanf("%d", a1+i);
	} 
	
	printf("������ڶ�������ĳ��ȣ�");
	scanf("%d", &n2);
	a2 = (int *)malloc(n2 * sizeof(int));   
	printf("����������Ԫ��");
	for(i = 0; i < n2; i++){
		scanf("%d", a2+i);
	}
	 
	printf("\n������Ԫ�صĽ���Ϊ��\n");
	if (n1 > n2){
		a3 = (int *)malloc(n1 * sizeof(int));   
		sum = jiaoJi(a1, a2, a3, n1, n2); 
		
	}else{
		a3 = (int *)malloc(n2 * sizeof(int));   
		sum = jiaoJi(a2, a1, a3, n2, n1);
//		printf("sum:%d\n", sum);		
	}
	for(i = 0; i < sum; i++){
		printf("%d ", *(a3+i));		
	}
		
	return 0;
}

int jiaoJi(int* a1, int *a2, int* a3, int n1, int n2){	//a1��������飬n1������Ӧ�ĳ��� 
	int i, j, sum, k, flag;
	for(i = 0, sum = 0; i < n1; i++, flag = 1){	
		for(j = 0; j < n2; j++){		
			if(*(a1+i) == *(a2+j)){
				for(k = 0; k < n1; k++){
					if(*(a2+j) == *(a3+k)){
						flag = 0;						 
						break;
					}
				}				
			}
			if(flag){		
				*(a3+sum) = *(a1+i);
				sum++;
				break;
			}	
		}
	}	
	return sum;									//���ؽ�����Ԫ�ظ��� 
} 
