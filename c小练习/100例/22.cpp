//22.	��Ŀ����s=a+aa+aaa+aaaa+aa...a��ֵ������a��һ�����֡�����2+22+222+2222+22222(��ʱ����5�������)������������ɼ��̿���

#include<stdio.h>
#define n 2
int main()
{
	int a=0,s,k, all=0,ten;
	printf("���������:");
	scanf("%d",&a);
	for(int i=1;i<a+1;i++)
	{
		ten=2;	
		s=0;
		for(k=0;k<i;k++)
		{
			s+=ten; 
			ten=ten*10;	
		 } 
		all+=s;	
	}
	printf("���Ϊ��%d",all);
	return 0;
}
