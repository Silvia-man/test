//1.	��Ŀ�����ĸ����֣�1��2��3��4������ɶ��ٸ�������ͬ�����ظ����ֵ���λ�������Ƕ��٣�
#include<stdio.h>

int main(void)
{
	int i,j,k,count=0;
	for(i=1; i<5; i++)
	{
		for(j=1; j<5; j++)
		{
			if (i==j)
				continue;
			for (k=1; k<5 && j!=k; k++)
			{
				if (j==k || i==k)
					continue;
				
				printf("%d%d%d	",i,j,k);
				count++;
				if(count%3==0)
				printf("\n");
			}
		}
	}
	printf("����%d�ֽ��\n",count);
	
	return 0;
 } 
 
