//7.	��Ŀ����һ���б�����ݸ��Ƶ���һ���б��С�
#include<stdio.h>
#include<string.h>
int main()
{
	char a[10]={'2','4','w','r','o','u'};
	int len = strlen(a),i=0;
	char b[10]={'\0'};
	for (i=0;i<len;i++)
	{
		b[i]=a[i];
	}
	b[i]='\0';
	puts(b);
	
	return 0;
 } 
