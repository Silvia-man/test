//21.	��Ŀ������һ���ַ����ֱ�ͳ�Ƴ�����Ӣ����ĸ���ո����ֺ������ַ��ĸ����� 

#include<stdio.h>

int main ()
{
	int ec=0,bc=0,nc=0,oc=0;
	int c; 
	printf("������һ���ַ���");
	c=getchar();
	while( c!=10 )
	{
		if(c==32)
			{
				bc++;
			}
		else if(c>=65&&c<=122)
			{
				ec++;
			}
		else if(c>=48&&c<=57)
			{
				nc++;
			}
		else
			{
				oc++;
			}
		c=getchar();
	}
	
	printf("����Ӣ����ĸ���ո����ֺ������ַ��ĸ����ֱ�Ϊ��%d, %d, %d",ec,bc,nc);
 } 
