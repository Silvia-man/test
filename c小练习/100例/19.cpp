//19.	��Ŀ���ߵ������� 32 λ�޷��������Ķ�����λ��
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int count=0;
	int length=0;
	char arr[32],w;

	printf("������һ���޷���������");
	scanf("%d",&w);
	
	itoa(w,arr,2);
	

	for(int i=0;arr[i];i++)
	{
			count++;
	}
	printf("�ߵ��Ķ�����λΪ��") ;
	for(int j=count-1;j>-1;j--)
	{
		printf("%c",arr[j]);
	}

}
