//83.	��Ŀ���Ӽ�������һЩ�ַ������������д�������ļ��ϣ�ֱ������һ�� # Ϊֹ��
#include<stdio.h>
#include<stdlib.h>
int main()
{
	char c;
	FILE *w =fopen("output.txt","w");
    if(w==NULL)
    {
       printf("���ļ�ʧ��!");
       return 0; 
    }
	c=getchar(); 
	while(c!='#')
	{
		fprintf(w,"%c",c);
		c=getchar();		
	}
	fclose(w);

	return 0;
}
