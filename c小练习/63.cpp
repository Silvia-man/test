//63.	��Ŀ����n��������ʹ��ǰ�����˳�������m��λ�ã����m���������ǰ���m����

#include<stdio.h>
int main()
{
	int a[10]={0,1,2,3,4,5,6,7,8,9}; 
	int m;
	printf("����10�����������Ǻ��Ƽ���λ�ã�");
	scanf("%d",&m); 
	int t[m];
	int i,j,q,up,k,r=m-1;
	for(i=9;i>9-m;i--)
	{
		t[r]=a[i];
		r--;
	}//����n�����ݸ��Ƶ�t������
	 
	//printf("pp%d",t[0]);
	for(j=0;j<m;j++)
	{
		up=a[j];
		for(k=j;k<9;k++)
		{
			q=a[k+1];	
			a[k+1]=up;
			up=q;
				
		}
		a[j]=t[j];
	}
	
	
	for(i=0;i<10;i++)
		printf("%d",a[i]);
	
	return 0;
 } 
