//18.	��Ŀ�����ָ����ʽ�����ڡ�
#include <stdio.h>
#include <time.h>
int main ()
{
   time_t curtime;
 
   time(&curtime);		//C �⺯�� time_t time(time_t *seconds) �����Լ�Ԫ Epoch��1970-01-01 00:00:00 UTC���𾭹���ʱ�䣬
                        //	����Ϊ��λ����� seconds ��Ϊ�գ��򷵻�ֵҲ�洢�ڱ��� seconds �С�
 
   printf("��ǰʱ�� = %s", ctime(&curtime));		//C �⺯�� char *ctime(const time_t *timer) ����һ����ʾ����ʱ����ַ���������ʱ���ǻ��ڲ��� timer��
 
   return 0;
}
/*
#include <time.h>
main(){
  time_t timep;
  time (&timep);
  printf("%s", asctime(gmtime(&timep)));
}
*/

/*
#include <stdio.h>
#include <time.h>
int main()
{
    time_t rawtime;
    struct tm * timeinfo;
    char timE [80];
    time ( &rawtime );
    timeinfo = localtime ( &rawtime );
    strftime ( timE,80,"%a %b %d %I:%M:%S  %Y  ",timeinfo);
    printf ("Local time is:");
    printf ("%s", timE);
    return 0;
}

*/
