//40.	��Ŀ��ͳ������С�������� n ��������������  
#include<stdio.h>
int main()
{
	int n;
	int i,j,count=0,sum=0;
	printf("������һ���Ǹ�������");
	scanf("%d",&n); 

	for(i=1;i<n;i++)
	{
		for (j=1;j<i+1;j++)
		{
			if((i%j)==0)
				count++;
			if(count>2)
			{
				sum++;
				break;
			}
		}
	}
	
	printf("����С�ڷǸ����� %d ������Ϊ��%d",n,sum);
	
	return 0;
}
