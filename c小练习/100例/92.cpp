//92.	��Ŀ��������1��2��5��������ʹ���Ϊ100.

#include<stdio.h>
int main()
{
int record=0;
int x,y,z;
for(x=1;x<=100;x++) //ע�⣬x��1��ʼ������0
	for(y=1;y<=50;y++) //ע�⣬y��1��ʼ������0
		for(z=1;z<=20;z++) //ע�⣬z��1��ʼ������0
			if(x+2*y+5*z==100) 
				record++;
printf("1��2��5����100���ܹ���%d�ַ���\n",record);
return 0;
}
 
