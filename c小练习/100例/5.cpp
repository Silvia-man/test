//5.	��Ŀ��������������x,y,z���������������С���������
#include<stdio.h>
int main()
{
	int x,y,z,t;
	printf("������3����:");
	scanf("%d%d%d",&x,&y,&z);
	
	if(x>y)
	{
		t=x;x=y;y=t;
	}
	if(y>z)
	{
		t=z;z=y;y=t;
	}
	if(x>y)
	{
		t=x;x=y;y=t;
	}
	
	printf("%d < %d < %d\n",x,y,z);
	return 0;
}
