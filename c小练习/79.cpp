//79.	��Ŀ����ȡ7������1��50��������ֵ��ÿ��ȡһ��ֵ�������ӡ����ֵ�����ģ���
#include <stdlib.h>

#include <stdio.h>

#include <time.h> 

int main( )

{
	int i,j,m;

	srand((unsigned)time( NULL ) );  
	
	for(i = 0; i < 7;i++)
	{
		j= rand()%50+1;
		printf("%d:",j);
		for (m=0;m<j;m++)
			printf("*");
		printf("\n");
	}
	
	

}
