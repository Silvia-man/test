//62.	��Ŀ���������飬�������һ��Ԫ�ؽ�������С�������һ��Ԫ�ؽ�����������顣

#include<stdio.h>
int main()
{
	int a[6]={'\0'},i;
	printf("������5������:\n");

	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]); 
	}
	int re=0,m;
	for(i=1;i<5;i++)
	{
		if(a[i]>a[re])
			re=i; 
			
	}
	m=a[0];
	a[0]=a[re];
	a[re]=m;
	
	re=0;
	for(i=1;i<5;i++)
	{
		if(a[i]<a[re])
			re=i;	
	}
	m=a[4];
	a[4]=a[re];
	a[re]=m;
	printf("%d %d %d %d %d",a[0],a[1],a[2],a[3],a[4]);
	
	return 0;
 } 
