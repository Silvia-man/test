//44.	��Ŀ����һ���������������

#include<stdio.h>
int main()
{
	int a[5]={1,2,3,4};
	printf("ԭ��Ϊ��"); 
	for(int j=0;j<4;j++)
	{
		printf("%d ",a[j]);
	}
	printf("\n����Ϊ��"); 
	for(int i=3;i>=0;i--)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
