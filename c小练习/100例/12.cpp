//12.	��Ŀ������һ��������дһ���������ж����Ƿ��� 3 ���ݴη���
#include<stdio.h>
char a[]="��";
char b[]="����";

char *pdmi(int s)
{
	float t=s;
	while(t>2)
	{
		t/=3;
		//printf("%d",t);
	}
	if (t>=0&&s!=1&&t==1)
		return a;
	else 
		return b;

}
int main()
{
	int mi;
	printf("������һ��������");
	scanf("%d",&mi);
	char *l=pdmi(mi); 
	printf("����%s3���ݴη�",l); 
	
	return 0; 
 } 
