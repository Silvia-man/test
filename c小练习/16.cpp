//16.	��Ŀ����һ���������ֽ������������磺����90,��ӡ��90=2*3*3*5��

#include<stdio.h>
int main()
{
	printf("������һ��������(>1)��");
	int n,index;
	scanf("%d",&n);
	printf("%d= ",n);
	while(n!=1)
	{
		for(index=2;index<n+1;index++)
		{
			if(n%index==0)
			{
				n =n/index; 
				if (n==1)
					printf("%d ",index);
				else
					printf("%d * ",index);
				break;
			}
		}
	}
	printf("\n");
	
	return 0;
}

 
