//75.	��Ŀ������һ���ַ������ҵ����ĵ�һ�����ظ����ַ���������������������������ڣ��򷵻� -1��
#include<stdio.h> 
#include <string.h>

int main()
{
	char str[20],*p1,*p2;
	int i;

	printf("please input a string: ");
	scanf("%s",str);
	
	int len = strlen(str);
	int j=0;
	p1=p2=str; 
	while(*p1!='\0')
	{
		i=0;
		
		while(*p2!='\0')
		{
			
			if(p2!=p1)
			{
			//	printf("%c,%c	",*p1,*p2);
				if(*p2==*p1)
					break; 
				else if(i==len-1)
				{
					printf("��һ�����ظ��ַ�������: %d\n��Ϊ��%c",j,*p1);
					return 0; 
				}	
			}
			p2++; 
			i++;
		}
		p1++;
		p2=str;
		j++;
		
	}
	
	printf("���ַ������ظ�\n");
	getchar();
	
	return 0;
}
 
