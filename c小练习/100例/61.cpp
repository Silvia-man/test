//61.	��Ŀ������3����a,b,c������С˳�������
#include<stdio.h>
int main()
{
	float a,b,c,t;
	printf("������3����:");
	scanf("%f%f%f",&a,&b,&c);
	
	if(a>b)
	{
		t=a;a=b;b=t;
	}
	if(b>c)
	{
		t=c;c=b;b=t;
	}
	if(a>b)
	{
		t=a;a=b;b=t;
	}
	
	printf("%.2f < %.2f < %.2f\n",a,b,c);
	return 0;
}
