//29.	��Ŀ����1+2!+3!+...+20!�ĺ͡�
#include<stdio.h>


long jiech(int num)
{
	int res=0,temp=1,i,j;
	for(i=0;i<num;i++)
	{
		for(j=i+1;j>0;j--)
		{
			temp*=j;
		}
		res+=temp;
	}
	//	printf("%ld\n",res);
	return res;
}
int main()
{
	int num;
	printf("��˭�Ľ׳ˣ�");
	scanf("%d",&num);
	 
	printf("%d�Ľ׳�Ϊ:%ld",num,jiech(num));
	 
	return 0;
 } 
