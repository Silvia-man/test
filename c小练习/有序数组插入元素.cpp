#include<stdio.h>
#define N 30						// N�����鳤�� 
#define J -32768					//Ϊ�˲���������0(���������Ԫ�� ),�ҽ������е�Ԫ��0
									//���,����λ��Ϊһ�������õ����֣���ѡΪ-32768 (J) 
									
void out(int * nums);				//�������
void chuShi(int * nums);			//��ʼ�����飬����ȫ��Ԫ���� J	
void fuZhi(int * nums);				//������������ 

int main(){
	int t,s,i,j;
	int nums[N];
	chuShi(nums);
	fuZhi(nums);
	
	printf("ԭ��������Ϊ��\n");
	out(nums);
	
	printf("��������Ҫ���������(���������ַ�ֹͣ����):\n");
	while(scanf("%d", &s)){					//ѭ������ 
		for(i = 0;i < N; i++){
			if( s <= nums[i] ){
				for(j = i; nums[j-1] != J; j++){
					t = nums[j];
				    nums[j] = s;
				    s = t;
				}
				break;	
			}
		}	 	
	}
	
	printf("�µ�����Ϊ��\n ");	
	out(nums);
	
	return 0;
}

void out(int * nums){					
	int i;
	for(i = 0; i < N; i++){
		if(nums[i] != J){
			printf("%d   ",nums[i]);
		}	
	}
	printf("\n");

}

void chuShi(int * nums){				
	int i;
	for(i = 0; i < N; i++){
		nums[i] = J;	 
	}
}

void fuZhi(int * nums){					
	int i = 0;
	char ch;
	printf("������ԭʼ��������(���������ַ�ֹͣ����):\n");
	while(scanf("%d",&nums[i])){
		i++;
	}
	while((ch = getchar()) != '\n' && ch != EOF);    //��ջ��� 
}
