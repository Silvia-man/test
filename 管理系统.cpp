#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

typedef struct Node
{
	char name[20];
	char range[20];
	char profession[50];
	char works[200];
	struct Node *pNext;	
}NODE,*PNODE;

bool Login(void);
bool interface(void);
int menu(void);
int add(PNODE);
PNODE entering(PNODE);
int outing(PNODE);
int browsing(PNODE);
int find_list(PNODE); 
bool change_list(char* ,PNODE ); 
int delete_list(char* ,PNODE); 
int length_list(PNODE);
PNODE sort_list(PNODE pHead,int len);


int main(void)
{
	while(interface())
	{
	};
	system("CLS");
	PNODE pHead=(PNODE)malloc(sizeof(NODE));
	pHead->pNext=NULL;
//	PNODE pTail;
 //	pTail= entering(pHead);
 	char j='y';
	menu();
	int choice,len;
	scanf("%d",&choice);
	char change_name[20];
	char del_name[20];
 	char c3='e';
 	int jg;
 	int tof;
	while(j!='q')
	{
 	switch(choice) 
 	{
 		case(1):
		 {
		 	system("CLS");
			find_list(pHead);
			getchar();
			system("CLS"); 
			//printf("\t\t\t\t\t\t÷Ϫ����ͬ�ļ���\n\n\n"); 
	
			break;
		 }
 		case(2):
		 {
		 	system("CLS");
			puts("������������");
			getchar();
			gets(change_name); 
			//printf("%s",change_name);
			jg=change_list(change_name,pHead);
			if (jg)
				printf("�޸ĳɹ���\n");
			else
				printf("û�������Ŷ���޸�ʧ�ܣ�\n");
			getchar();
		 	system("CLS"); 
		 	//printf("\t\t\t\t\t\t÷Ϫ����ͬ�ļ���\n\n\n");

			break;
		 }
 		case(3):
		 {
		 	system("CLS");
		 	while(c3!='q')
		 	{
		 		add(pHead);
		 		printf("\t\t\t\t\t\t\t\t\t\t�������[ q��+�س� �������˵�]"); 
				c3=getchar();
				system("CLS");
				//printf("\t\t\t\t\t\t÷Ϫ����ͬ�ļ���\n\n\n");
			 }
			 c3='e';
		 	len=length_list(pHead->pNext);
		 	sort_list(pHead,len);
			break;
		 }
		case(4):
		{
			getchar();
			system("CLS");
			puts("ɾ����������");
			gets(del_name);
			delete_list(del_name,pHead);////////////

			getchar();
		 	system("CLS"); 
		 //	printf("\n\t\t\t\t\t\t÷Ϫ����ͬ�ļ���\n\n\n"); 		
			break;//ɾ�� 
		} 
		case(5):
		{
			system("CLS");
			browsing(pHead);
			getchar();
			getchar();
			break;
		}  
	 }
	system("CLS");
	printf("\t\t\t\t\t\t\t\t\t\t\t��ʾ��[q��+�س�]�˳�����\n");
 	menu();
	j=getchar();
 	if (j=='q')
	 {
	 	outing(pHead);	
		remove("amxh.txt");
		if((rename("output.txt","amxh.txt"))==0)
			printf("����ɹ�\n");
		else
			printf("����ʧ��\n");
	 }

 	else
 		choice=j-'0';	 
	}
		
	return 0;
}
int browsing(PNODE pHead)
{
	int i=1;
	PNODE p=pHead->pNext;
	while(p)
   {
       printf("*%d  ������ %s\n\t\t���� %s\n\t\tְҵ�� %s\n\t\t��Ʒ�� %s\n",i,p->name,p->range,p->profession,p->works);
       i++;
       p=p->pNext;        
   }      
   return 0;
}
bool interface(void)
{
	printf("\n\t\t\t\t\t\t÷Ϫ�� * ��ͬ�ļ���\n\n");
	printf("\t\t\t\t\t\t���¼\n");
	return Login();;	
}

int menu(void)
{
	int choice;
	printf("                                                  ÷Ϫ�� * ��ͬ�ļ���\n\n") ;
	printf("               ***-----------*** ***-----------*** ***-----------*** ***-----------***  ***-----------***\n");
	printf("                    (1)����           (2)�޸�           (3)����           (4)ɾ��           (5)���\n");
	printf("               ***-----------*** ***-----------*** ***-----------*** ***-----------***  ***-----------***\n");
	printf("��ѡ��");
	return 0; 
}
bool Login(void)
{
	char sz;
	char opp='e';
	bool pda=true;
	int ott=1;
	while(ott==1)
	{
		printf("��¼  |  ע��(��z��)\n");
		scanf("%c",&sz);
		printf("%c",sz);
		system("CLS");
		printf("\n\t\t\t\t\t\t÷Ϫ�� * ��ͬ�ļ���\n\n");
		printf("\t\t\t\t\t\t���¼\n"); 
		if (sz!='z')
		{
			char adname[20];
			char adpass[20];
			FILE * fp=fopen("ad.txt","r");
			if(fp==NULL)
			{
				printf("��ע��һ�����˺�\n");
				getchar();
				system("CLS");
				return true;
			}
			int c,c1,cnt;
			c=ftell(fp);
			while(fgetc(fp)!='\n')
			{
				c1=ftell(fp);
			}
			
			fseek(fp,c,SEEK_SET);
			cnt=c1-c;
			char inname[20];
			fgets(inname,cnt+1,fp);	
			
			fseek(fp,2,SEEK_CUR);
			c=ftell(fp);
			char ch=fgetc(fp);
			while((ch!='\n')&&(ch!=EOF)) 
			{
				c1=ftell(fp);
				ch=fgetc(fp);
			}
				
			fseek(fp,c,SEEK_SET);
			cnt=c1-c;
			char inpass[20];
			fgets(inpass,cnt+1,fp);
		
			int Flag=0;
			while(1)
			{
				printf("�û�����");
				scanf("%s",adname);
				printf("���룺"); 
				scanf("%s",adpass);
				while(1)
				{
					if ((strcmp(adname,inname)==0) && strcmp(inpass,adpass)==0)
						{
							fclose(fp);
							return false;
						}
					else
					{
						if (ch==EOF)
							{
								printf("�û������������\n�����µ�¼\n");
								getchar();
								system("CLS"); 
								return true; 
							 } 
						else
						{
							getchar();
							fseek(fp,2,SEEK_CUR);
							c=ftell(fp);
							ch=fgetc(fp);
							while((ch!='\n')&&(ch!=EOF)) 
							{
								c1=ftell(fp);
								ch=fgetc(fp);
							}
							
							fseek(fp,c,SEEK_SET);
							cnt=c1-c;
							inname[0]='\0';
							fgets(inname,cnt+1,fp);
							
							fseek(fp,2,SEEK_CUR);
							c=ftell(fp);
							ch=fgetc(fp);
							while((ch!='\n')&&(ch!=EOF)) 
							{
								c1=ftell(fp);
								ch=fgetc(fp);
							}
								
							fseek(fp,c,SEEK_SET);
							cnt=c1-c;
							inpass[0]='\0';
							fgets(inpass,cnt+1,fp);
						}
					}
				}
								
			}
			
		}
		else
		{
			char crename[20]="������";
			char crepass[20]="������";
			char surepass[20];
			FILE * fp2=fopen("ad.txt","a");
			if(fp2==NULL)
			{
				fp2=fopen("ad.txt","w");
				fclose(fp2);
				fp2=fopen("ad.txt","a");
			//	printf("�ļ���ʧ�ܣ�\n");
			//	exit(1);
			}
			printf("������");
			int i;
			while(1)
			{	 
				printf("(�û��������벻�ɰ����ո�\n"); 
				while(1)
				{	
					memset(crename,'\0',sizeof(crename));
					puts("�û�����");
					getchar();
					gets(crename);		
					for(i=0;i<sizeof(crename);i++)
					{
						if (crename[i]==' ')
						{
							printf("�û��������Ƿ��ַ�,����������(����ҳ���밴q��)\n");///////////////
							opp=getchar();
							if (opp=='q')
								return true;
							else
								break;
						}
					}
					if(i=sizeof(crename))
						break;
				}
				while(1)
				{	
					puts("���룺");
					gets(crepass);	
					for(i=0;i<sizeof(crepass);i++)
					{
						if (crepass[i]==' ')
						{
							printf("��������Ƿ��ַ�,����������(����ҳ���밴q��)\n");
							opp=getchar();
							if (opp=='q')
								return true;
							else
							{
								memset(crepass,'\0',sizeof(crepass));
								break;
							}
						}
					}
					if (i==sizeof(crepass)) 
						break; 
				}

				printf("\n��������һ�����룺");
				scanf("%s",surepass);
				if (strcmp(crepass,surepass)==0)
				{
				/*	fwrite(crename, sizeof(crename) , 1, fp2 );
					fwrite("\n", 1, 1, fp2 );
					fwrite(crepass, sizeof(crepass), 1, fp2 );//��������룡    */		
					fprintf(fp2,"%s\n",crename);
					fprintf(fp2,"%s\n",crepass);
					getchar();
					fclose(fp2);
					printf("ע��ɹ�\n");
					getchar();
					system("CLS");
					return true;
				}
				else 
					printf("���벻һ�£�����������\n");		 
			}
		}
	}	
}

 PNODE entering(PNODE pHead)
{
    PNODE p,q;
    p=q=pHead;
    FILE * r= fopen("amxh.txt","r");
    if(r==NULL)
	{
		r= fopen("amxh.txt","w");
		fclose(r);
		r= fopen("amxh.txt","r");
	}
    char ooo[200];
    while(fscanf(r,"%s", ooo)!=EOF)/////
    {  
       	q= (PNODE)malloc(sizeof(NODE));
       	if (q == NULL)
    	{
        	printf("��ȡʧ�ܣ��ڴ�ռ����벻�㣡\n");
        	return NULL;
    	}
       strcpy(q->name,ooo);
       fscanf(r,"%s",q->range);
       fscanf(r,"%s",q->profession);
       fscanf(r,"%s",q->works);
       p->pNext=q;
       p=q;
    }
    fclose(r);
    p->pNext=NULL;
    return p;
}

int find_list(PNODE pHead)
{
	char xx;
	char findname[20]; 
	puts("������������");
	getchar();
	gets(findname);
	//strcpy(findname,'\0');
	PNODE i=pHead;
	int d=0;
	while(NULL!=i->pNext)
	{
		i=i->pNext;
		int w = strcmp(i->name ,findname);		
		if (w==0)
		{
			printf("������%s\n",i->name);
			printf("����%s\n",i->range);
			printf("ְҵ��%s\n",i->profession);
			printf("��Ʒ��%s\n",i->works);
			d++;
			break;
		}		
	}
	if(d==0)
		printf("û����Ŷ��\n");
	else
	{
		printf("��ѡ������Ĳ���\t(1)�޸� (2)ɾ�� (3)�˳�");
		xx=getchar();
		if (xx=='1')
			{
				system("CLS");
				if(change_list(findname,pHead))
					printf("�޸ĳɹ�\n");
				else
					printf("�޸�ʧ��\n");
				getchar();
			}
		else if (xx=='2')
			{
				delete_list(findname, pHead);
				getchar();
			}
	}
	return 0;
 }   
 
int outing(PNODE pHead)
{
   PNODE p=pHead->pNext;
   
   FILE *w =fopen("output.txt","w");
   if(w==NULL)
   {
       printf("���ļ�ʧ��!");
       return 0; 
   }
   while(p)
   {
       fprintf(w,"%s\n%s\n%s\n%s\n",p->name,p->range,p->profession,p->works);
       p=p->pNext;        
   }     
   
   fprintf(w,"\n");
   fclose(w);
   return 0;
}
int add(PNODE pHead)
{
	PNODE i=pHead->pNext;
	PNODE pNew=(PNODE)malloc(sizeof(NODE));
	if (NULL==pNew)
	{
		printf("�½�ʧ�ܣ�\n");
 		exit(-1);
	}
	else
	{
		puts("����:");
		getchar();
		gets(pNew->name);
		puts("����");
		gets(pNew->range);
		puts("ְҵ��");
		gets(pNew->profession);
		puts("��Ʒ��     (�벻Ҫ�Կո�ָ�)"); 
		gets(pNew->works);
		pHead->pNext=pNew;
		pNew->pNext=i;
		printf("��ӳɹ���\n");
	}
	return 0;	
 }
bool change_list(char* c_n,PNODE pHead) 
{
	PNODE i=pHead;
	int xg;
	char aw;
	bool pdla=true;
	while(NULL!=i->pNext)
	{
		i=i->pNext; 
		int b=strcmp(i->name,c_n);
		int len;
		if (b==0)
		{
			printf("������%s\n����%s\nְҵ��%s\n��Ʒ��%s\n",i->name,i->range,i->profession,i->works); 
		//	puts("�༭˭��");
		//	getchar();
		//	gets(change_name); 
			while(pdla)
			{
				printf("�޸�����(1)\t�޸�����(2)\t�޸�ְҵ(3)\t�޸���Ʒ(4)\n");
				scanf("%d",&xg);
				switch(xg)
				{
					case(1):
					{
						printf("��ǰ������");
						puts(i->name);
						printf("�޸ĺ��������");
						getchar();
						gets(i->name); 
						len=length_list(pHead->pNext);
			 			sort_list(pHead,len);
						break;
					}
					
					case(2):
					{
						printf("%s��ǰ����",i->name);
						puts(i->range);
						printf("�޸ĺ������");
						getchar();////
						gets(i->range); 
						break;
					}
					
					case(3):
					{
						printf("%s��ǰְҵ��",i->name);
						puts(i->profession);
						printf("�޸ĺ��ְҵ��");
						getchar();
						gets(i->profession);
						break;
					}
					case(4):
					{
						printf("%s��ǰ��Ʒ��",i->name);
						puts(i->works);
						printf("�޸ĺ����Ʒ��");
						getchar();
						gets(i->works); 
						break;
					}	
				}
				printf("\t\t\t\t\t\t\t\t\t�����޸�[ q��+�س� �˳��޸�]\n");
				aw=getchar();
				if (aw=='q')
					pdla=false;
				
			}
		return true;			 
		}
	}
		return false;			
}

int  delete_list(char* d_n,PNODE pHead)
{
	PNODE i=pHead;
	PNODE t; 
	int n=0;
	int w,len;
	while(NULL!=i->pNext)
	{	
		w=strcmp(i->pNext->name,d_n);
		if (w==0)
		{
			t=i->pNext;
			i->pNext=i->pNext->pNext;
			free(t);
			printf("�ɹ�ɾ��%s\n",d_n);
			len=length_list(pHead->pNext);
			sort_list(pHead,len);	
			return 0;					
		}
		else
			i=i->pNext;	
	}
	printf("ɾ��%sʧ��\n",d_n);
	return 0;
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

PNODE sort_list(PNODE pHead,int len)
{
	int i, j;
	char t[20],ne[20],pn[50],ws[200];
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
				strcpy(ne, p->range);
				strcpy(p->range, q->range);
				strcpy(q->range, ne); 
				strcpy(pn, p->profession);
				strcpy(p->profession, q->profession);
				strcpy(q->profession, pn); 
				strcpy(ws, p->works);
				strcpy(p->works, q->works);
				strcpy(q->works, ws); 			
			}				
		}
	}
	return p;
}
