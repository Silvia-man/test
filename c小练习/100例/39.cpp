//39.	��Ŀ����100֮�ڵ�������
#include<stdio.h>
int main()
{
	printf("������һ������1����������");
	int x;
	scanf("%d",&x);
	for(int i=2;i<x;i++)
	{
		if(x%i==0)
		{
			printf("%d��������",x);
			break;
		}
		if(i==x-1)
			printf("%d������",x);
	}
 } 
