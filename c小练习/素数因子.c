#include<stdio.h>

int suShu(int p){		//�ж��Ƿ�Ϊ����
	int i;
	for(i = 0; i < p; i++){
		if(p%i==0){
			return 0;
		}
	}
	return 1;

}

void yinZi(int s){		//��ȫ����������
	int i,m = s;
	for (i = 2; (i<=s) && (m != 1) ; i++){

		if(m % i == 0){
			if( suShu(m%i) ){
				m = m/i;
				printf(" %d ", i);
				i--;
			}
		}

	}

}

int main(){
	int s;
	printf("s= ");
	scanf("%d", &s);
	yinZi(s);

	return 0;
}