//95.	��Ŀ������һ������ 0, 1, 2, ..., n �� n ���������У��ҳ� 0 .. n ��û�г����������е��Ǹ���
#include<stdio.h>

int main()
{
	int num[10]={0,1,2,3,7,10};
	int j=0; 
	printf("û�г����������е��Ǹ���Ϊ:"); 
	for(int i=0;i<11;i++)
	{
		if (num[j]!=i)
			printf("%d ",i);
		else
			j++;
	}
	return 0;
}
