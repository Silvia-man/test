//34.	��Ŀ����һ��������5λ����������Ҫ��һ�������Ǽ�λ�������������ӡ����λ���֡�
#include<string.h>
#include<stdio.h>
int main()
{
	char a[7];
	int i=0,len,Flag=1;
	
	while(Flag==1)
	{
		printf("������һ�� [ ��λ������ ] ����������"); 
		scanf("%s",a);
		len=strlen(a);
		if(len<6)
			Flag=0;

	}
	printf("����%dλ��\n",len);
	printf("����Ϊ��");
	for(i=len-1;i>-1;i--)
		printf("%c",a[i]);

	return 0;
 } 
