//49.	��Ŀ������һ��ֻ���� '('��')'��'{'��'}'��'['��']' ���ַ������ж��ַ����Ƿ���Ч
#include<stdio.h>

int main()
{
	int i=0;
	char str[7]={'(',')','{','}','[',']'};
	while (i<6)
	{
	//	printf("%c %c ",str[i],str[i+1]); 
		if(str[i]=='('&&str[++i]!=')')
		{
			printf("���ַ�����Ч\n");
			
			return 0;
		 }
		 
		 if(str[i]=='{'&&str[++i]!='}')
		{
			printf("���ַ�����Ч\n");
			return 0;
		 }
		 
		 if(str[i]=='['&&str[++i]!=']')
		{
			printf("���ַ�����Ч\n");
			return 0;
		 }
		i=i+1; 
	}
	printf("���ַ�����Ч\n");
	
	
	return 0;
}
