//28.	��Ŀ����һ�������У�2/1��3/2��5/3��8/5��13/8��21/13...���������е�ǰ20��֮�͡� 
#include<stdio.h>
#define MANY 20
float fenshi(int many)
{
	float up=2,down=1;
	float sum=0;
	for(int i=0;i<MANY;i++)
	{
		sum+=up/down;
		up=up+down;
		down=i+1;	
	}
	
	return sum;
}
int main()
{
	int many=MANY;
	printf("2/1��3/2��5/3��8/5��13/8��21/13...	������е�ǰ%d��֮��Ϊ��%f",many,fenshi(MANY));
	return 0;
}

