//65.	��Ŀ��дһ����������һ���ַ����ĳ��ȣ���main�����������ַ�����������䳤�ȡ�

#include<stdio.h>
int main()
{
	char str[20]={'\0'};
	int i=0,sum=0;
	printf("������һ���ַ�:");
	scanf("%s",str);
	
	while(str[i]!='\0')
	{
			sum++;
			i++;
	}
	printf("����Ϊ��%d",sum);
	return 0;
 } 
