//17.	��Ŀ�����������������Ƕ������ɴ��⣺ѧϰ�ɼ�>=90�ֵ�ͬѧ��A��ʾ��60-89��֮�����B��ʾ��60�����µ���C��ʾ��
#include<stdio.h>
int main()
{
	int g=0;
	printf("�����ɼ�Ϊ��");
	scanf("%d",&g); 
	if (g<60)
		printf("�ȼ�ΪC"); 
		else if (g<90)
			printf("�ȼ�ΪB"); 
				else
					printf("�ȼ�ΪA"); 
	return 0;
}
