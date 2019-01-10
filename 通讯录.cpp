#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node
{
	char  name[10];
	char  tel[15];
	struct Node * pNext;
	
 } NODE,*PNODE;
 
 
int menu(void); 
PNODE create_list(void);
PNODE add(PNODE pHead);
void traverse_list(PNODE);
int length_list(PNODE pHead);
PNODE sort_list(PNODE,int);
bool delete_list(char* d_n,PNODE pHead);
void find_list(PNODE,char*);
bool change_list(char*,PNODE ) ;
int main(void)
 {
 		
 	PNODE pHead=NULL;
 	pHead=create_list();
 	pHead->pNext=NULL;
 	PNODE pTail=pHead;
 	int choice,len;
 	char j='y';
	menu();
	scanf("%d",&choice);
 	
	while(j!='q')
	{		
	 	switch (choice)
	 	{
		case 1:
			{	
		 		 pTail=add(pTail);
		 		 len=length_list(pHead->pNext);
		 		 sort_list(pHead,len);
				
				 break;
			 }
		case 2:
			{
				char findname[10]; 
				puts("��˭ѽ��");
				getchar();
				gets(findname);
				find_list(pHead,findname);
				break;
			}
		case 3:
			{
				char change_name[10];
				puts("�༭˭��");
				getchar();
				gets(change_name); 
				int jg=change_list(change_name,pHead);
				if (jg)
					printf("�޸ĳɹ���\n");
				else
					printf("���޴��ˣ��޸�ʧ�ܣ�\n");
				break; 		
			}
		case 4:
			{
				char del_name[10];
				getchar();
				puts("����Ҫ˭�ˣ�");
				gets(del_name);
				int tof=delete_list(del_name,pHead);
				if(tof)
					{
					printf("���ɹ�������%s\n",del_name);
					len=length_list(pHead->pNext);
					pTail=sort_list(pHead,len);
					
					}
				else
					printf("����%sʧ��\n",del_name);
				break;
			} 
	 	case 5:
	 		{
				 traverse_list(pHead);
				 
				 getchar();
				 
		 		 break;
			}
	}
 	printf("\n��ʾ��[q��+�س�]�˳�\n");
 	menu();
	j=getchar();
 	if (j=='q')
 		;
 	else
 		choice=j-'0';	
 	}
 	return 0;
 }
 
 int menu (void)
 {
 	int choice;
 	printf("---------------------------------------------------------------------------------------------\n");
 	printf("(1)�½���ϵ��  ��2��������ϵ��   ��3���༭��ϵ��   ��4��ɾ����ϵ��    ��5���鿴������ϵ��\n");
 	printf("---------------------------------------------------------------------------------------------\n");
 	

 	return 0;
 }
 
PNODE create_list(void)
{	 
 	PNODE pHead=(PNODE)malloc(sizeof(NODE));
 	
 	if (NULL==pHead)
 	{
 		printf("�����쳣��ֹ��\n");
 		exit(-1);
	}
	else
		return pHead;
 }

PNODE add(PNODE pTail)
{
	
	PNODE pNew=(PNODE)malloc(sizeof(NODE));
	if (NULL==pNew)
	{
		printf("�½�ʧ�ܣ�\n");
 		exit(-1);
	}
	else
	{
		getchar();
		puts("����:");
		gets(pNew->name);
		puts("�绰��");
		gets(pNew->tel);
		pTail->pNext=pNew;
		pNew->pNext=NULL;
		pTail=pNew;
	
	}
	
	return pTail; 	
 }



PNODE sort_list(PNODE pHead,int len)
{
	int i, j;
	char t[10];
	
	PNODE p, q;
	
	for (i=0,p=pHead->pNext; i<len-1; ++i,p=p->pNext)
	{
		for (j=i+1,q=p->pNext; j<len; ++j,q=q->pNext)
		{
			int w = strcmp(p->name ,q->name);
			
			if (w>0)
			{
				strcpy(t, p->name);
				strcpy(p->name, q->name);
				strcpy(q->name, t); 
			}
				
		}
	}

	return p;
}

bool change_list(char* c_n,PNODE pHead) 
{
	PNODE i=pHead; 
	int n=0;
	while(NULL!=i->pNext)
	{
		i=i->pNext; 
		int b=strcmp(i->name,c_n);
		if (b==0)
		{
			printf("����ϵ��ʽ��");
			puts(i->tel);
			 
			printf("�µ���ϵ��ʽ��");
			gets(i->tel); 
			++n;
		}
	}
	if (n==0)
		return false;
	else
		return true;
	
}

bool delete_list(char* d_n,PNODE pHead)
{
	PNODE i=pHead;
	PNODE t; 
	int n=0;
	int w;
	while(NULL!=i->pNext)
	{	
		w=strcmp(i->pNext->name,d_n);
		if (w==0)
		{
			t=i->pNext;

			i->pNext=i->pNext->pNext;
			free(t);
			++n;
		}
		else
			i=i->pNext;	
	}
	if (n==0)
		return false;
	else
		return true;	
}

void find_list(PNODE pHead,char* findname)
{
	PNODE i=pHead;
	int d=0;
	while(NULL!=i->pNext)
	{
		i=i->pNext;
		int w = strcmp(i->name ,findname);		
		if (w==0)
		{
			printf("������%s",i->name);
			printf("\n�绰��%s\n",i->tel);
			++d;
		}		
	}
	if(d==0)
		printf("���޴��ˣ�\n");
	return;
 } 	
 
void traverse_list(PNODE pHead)
 {
 	
	int len=length_list(pHead->pNext);
	if (0==len)
		printf("û����ϵ�ˣ�\n");
	else
 		{
 			printf("������%dλ��ϵ��\n",len);
 	
		 	PNODE p=pHead->pNext;
		 	while(NULL!=p)
			 	{
			 		printf("������"); 
			 		puts(p->name);
			 		printf("�绰��%s\n",p->tel);
			 		p = p->pNext;
				}
			printf("\n");	
		}
	return;
}

 int length_list(PNODE pNext)
{

	PNODE p = pNext;
	int len = 0;
	
	while (NULL != p)
	{
		++len;
		p = p->pNext;
	} 
	
	return len;
}
