//42.	��Ŀ����һ��3*3�������Խ���Ԫ��֮�͡�
#include<stdio.h>
int main()
{
	int sum=0;
	int juzh[3][3]={{1,2,1},{3,5,1},{9,0,1}};
	
	for(int i=0;i<3;i++)
	{
		sum+=juzh[i][i]; 
	}
	
	printf("���Խ���Ԫ��֮��Ϊ��%d",sum);
	
	return 0;
}
