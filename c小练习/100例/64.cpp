//64.	��Ŀ����n����Χ��һȦ��˳���źš��ӵ�һ���˿�ʼ��������1��3��������������3�����˳�Ȧ�ӣ���������µ���ԭ���ڼ��ŵ���λ

#include<stdio.h> 
main() 
{ 
	int a[100]; 
	int i,n,p=0,q; 
	printf("input number:"); 
	scanf("%d",&n); 
	q=n; //ʣ������� 
	for(i=0;i<n;i++) 
		a[i]=i+1; //����� 
	
	
	for(i=0;;i++) 
	 { 
		 if(i==n) 
		 	i=0; //һ�ֺ������һ��
		 if(a[i]!=0) 
		 	p++;
		 else 
		 	continue; 
		 if(p%3==0)
		   {
		  	  a[i]=0;
			  q--;
			} 
		 if(q==1) 
		 	break;
	 }
	  
	for(i=0;i<n;i++) 
		if(a[i]!=0) 
			printf("spare: %d\n\n",a[i]); 
			
			
}
