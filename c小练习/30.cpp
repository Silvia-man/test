//30.	��Ŀ������һ���������飬�ж��Ƿ�����ظ�Ԫ�ء�����κ�ֵ�������г����������Σ��������� true�����������ÿ��Ԫ�ض�����ͬ���򷵻� false��
#include<stdio.h>
bool chachong(char *arr)
{
	int i,j,count;
	char p;
	for(i=0;i<9;i++)
	{
		count=0;
		p=arr[i];
		for(j=0;j<9;j++)
		{
			if(int(p)==int(arr[j]))
				count++;
			if(count==2)
				return false;
		}
	}
	
	return true;
}
int main()
{
	char arr[10]={'0','5','*','i','p','e','n','0','1'};
	printf("[");
	for(int i=0;i<9;i++)
	{
		printf("%c  ",arr[i]);
	 } 
	printf("]\t\t");
	if(chachong(arr))
		printf("��������ÿ��Ԫ�ض�������ͬ");
	else
		printf("�����������ظ�Ԫ��");
	return 0;
}
