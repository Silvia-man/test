//24.	��Ŀ��һ���100�׸߶��������£�ÿ����غ�����ԭ�߶ȵ�һ�룻�����£������ڵ�10�����ʱ�������������ף���10�η�����ߣ�

#include<stdio.h>
int main()
{
	float high=100;
	float len=100;
	for (int i=1;i<10;i++)
	{
		len+= high;
		high=high/2; 
	}
	high=high/2;
	printf("��10�����ʱ��������%f��,��10�η���%f��\n",len,high);
	return 0;
 } 
