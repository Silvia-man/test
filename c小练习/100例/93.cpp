//93.	��Ŀ�������������飬��дһ���������������ǵĽ���
#include<stdio.h>
#include <string.h>

void removeDuplicate(char str[])		//ȥ�� 
{
    int len = strlen(str);
    int p = 0;
    int i;
    int j;
    for (i=0; i<len; i++) 
	{
        if (str[i] != '\0') 
		{
        	str[p++] = str[i];			//��������������Ҫ������⣬�����鲹ȫ��λ���� 
            for (j=i+1; j<len; j++) 
			{
                if (str[i] == str[j]) 
                    str[j] = '\0';
                
            }
        }
    }
    str[p] = '\0';
}
int main()
{
	char s1[10];
	char s2[10];
	char s3[10];
	char s4[10]={"0"};
	int i,j,k=0,p=0;
	printf("�������һ���ַ�����");
	scanf("%s",s1);
	printf("������ڶ����ַ�����"); 
	scanf("%s",s2);
	
	for(i=0;s1[i];i++)
	{
		for(j=0;s2[j];j++)
		{
			if(s1[i]==s2[j])
				{
					s3[k]=s1[i];
					k++;
				}
		}
	}
	

	removeDuplicate(s3);
	printf("����Ϊ��"); 
	puts(s3);
	return 0;
}
