//58.	��Ŀ����һ�����ַ����в��Ҷ��ַ�����λ�� 

#include<stdio.h>

int main()
{
	char str1[20],str2[20],*p1,*p2;
	int i=0;
	printf("please input two strings\n");
	scanf("%s%s",str1,str2);
	p1=str1;
	p2=str2;
	while(*p1!='\0')
	{
		if(*p1==*p2)
		{
			while(*p1==*p2)
			{
				p1++;
				p2++;	
			}
		}
		else
			p1++;
		if(*p2=='\0')
		{
			printf("�Ӵ���ĸ���е��±�Ϊ��%d",i);
			return 0;
		} 
		p2=str2;
		i++;
	}
	printf("ĸ�������Ӵ�");
	getchar();
	
	return 0;
}


