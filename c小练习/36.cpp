//36.	��Ŀ�����������ڼ��ĵ�һ����ĸ���ж�һ�������ڼ��������һ����ĸһ����������жϵڶ�����ĸ��
#include<stdio.h>
int main()
{
	char s,t,k;
	printf("��Сд��p: ");
	scanf("%c",&s);
	if (s=='m')
	    printf("����һ");
	else if(s=='t')
	    {
	    	printf("np: ");
	    	getchar();
			scanf("%c",&t);
		    if(t=='u')
		        printf("���ڶ�");
		    else if(t=='h')
		        printf("������");
		    else
		        printf("Wrong");
		}
	else if(s=='w')
	    printf("������");
	else if(s=='f')
	    printf("������");
	else if(s=='s')
	 	{
	 		printf("np: ");
	 		getchar();
			scanf("%c",&k);
		    if(k=='a')
	            printf("������");
	   		else if(k=='u')
	              printf("������");
	    	else
	              printf("Wrong");
		 }
	else
          printf("Wrong");

	
	return 0;
 } 



               
