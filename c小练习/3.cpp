//3.	��Ŀ��һ��������������100����һ����ȫƽ�������ټ���168����һ����ȫƽ���������ʸ����Ƕ��٣�

#include<stdio.h>
#include<math.h>
int main ()
{
    
    float n,m;
    for ( int i=1;i<100000;i++)
    {
        m=sqrt(100+i);
        n=sqrt(268+i);
        if(int(m)!=m||int(n)!=n)
        	continue;
        if( m*m==i+100 && n*n==i+268)
      	  printf("%ld ",i);
    }
    
    return 0;
 } 

