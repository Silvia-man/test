//11.	��Ŀ����дһ��������������һ���޷�������������������Ʊ��ʽ������λ��Ϊ ��1�� �ĸ�����Ҳ����Ϊ������������
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
		if (arr[i]=='1')
			count++;
	}
	printf("����������%d",count); 	
}

