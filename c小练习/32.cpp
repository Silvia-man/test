//32.	��Ŀ�����õݹ麯�����÷�ʽ�����������5���ַ������෴˳���ӡ������
#include<stdio.h>
#define I 5
void fanxu(char * string,int p )
{
	if(p==(I-1))
	{	
		printf("%c",string[p]);	
		return;
	}
	
	fanxu(string,p+1); 
	printf("%c",string[p]);	
	
}
int main()
{
	int i=I;
	char string[i+1]={'\0'};
	printf("����������%d���ַ���",i);
	for(int f=0;f<i;f++)
	{
		scanf("%c",&string[f]);
	}
	fanxu(string,0);
	 	
	return 0;
}
