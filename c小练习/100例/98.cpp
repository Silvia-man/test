//98.	��Ŀ���������ú���chr(),ord()�Լ�randomģ��дһ�������4λ��֤�� 

#include <stdlib.h>
#include <stdio.h>
#include <time.h> 

int main( )

{
	int i,j,m;

	srand((unsigned)time( NULL ) );  
	
	for(i = 0; i < 4;i++)
	{
		do
		{
			j= rand()%122+1;
		//	printf("%d",j);
		}while( j<48||(j>57&&j<97) );
			
		printf("%c",j);
	//	system("pause");

	}
	

}

