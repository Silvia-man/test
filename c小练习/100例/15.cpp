//15.	��Ŀ����ӡ�����е�"ˮ�ɻ���"
#include<math.h>
#include<stdio.h>
int main()
{
	int a,b,c;
	for (int i=100;i<1000;i++)
	{
		if((pow(i%10,3)+pow((i%100-i%10)/10,3)+pow(i/100,3))==i)
			printf("%d	",i); 		
	}
	
	return 0;
}
