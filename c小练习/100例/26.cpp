//26.	��Ŀ����ӡ������ͼ�������Σ�

#include<stdio.h>

int main(void)
{
	int a,i,w;
	char n[]=" ";
	char x[]="* ";
	printf("�������������εı߳�:\n");
	scanf("%d",&a);
	
	for(i=0;i<=a-1;i++)
	{
		for(w=a-i;w>0;w--)
	    	printf("%s",n) ;
		for(w=1;w<=i+1;w++)
			printf("%s",x);
		printf("\n");
	}
	
	for(i=a-1;i>=1;i--)
	{
		for(w=0;w<a-i+1;w++)
	    	printf("%s",n);
	    for(w=i;w>0;w--)
			printf("%s",x);
		printf("\n");
	}
	
	return 0;
}
