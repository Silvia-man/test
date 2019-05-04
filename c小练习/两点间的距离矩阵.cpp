#include<stdio.h>
#include <malloc.h>
#include<math.h>
#define N 2

void input(double** points, int m); 
void output(double** disMat,  int m, int n);
void outPoints(double** points,  int m);		//���������ľ��� ����ʱ���� 
void disMatrix(double** points, double** disMat, int m);

int main()  
{   
  	int m;
	printf("���������ܸ���: ");
	scanf("%d", &m);
	
    double** points = new double* [m];  
    points[0] = new double[m * N]; 	// ���������ڴ�  
    								// ��pArray[1][0]�޷�Ѱַ������ָ���±�Ѱַ��ʽ  
    for(int i = 1; i < m; i++)  
    {  
        points[i] = points[i-1] + N;  
    }  
    
    double** disMat = new double* [m];  
    disMat[0] = new double[m * m]; 	
    					
    for(int i = 1; i < m; i++)  
    {  
        disMat[i] = disMat[i-1] + m;  
    }
  
    input(points, m); 
//	outPoints(points, m); 
	printf("\n\n�����ľ������Ϊ��\n"); 
    disMatrix(points, disMat, m); 
	output(disMat, m, m);
	
	free(points);
	free(disMat);
}

void disMatrix(double** points, double** disMat, int m){
	int i, j;

	for(i = 0; i < m-1; i++){
		disMat[i][i] = 0;
		 
		for(j = i+1; j < m; j++){
			disMat[i][j] = sqrt( pow(points[j][0] - points[i][0], 2) + pow(points[j][1] - points[i][1], 2) );
			disMat[j][i] = disMat[i][j];	
		}
		
	}
	disMat[i][i] = 0;

}
void input(double** points, int m)  
{  
  	int i;
	for(i = 0; i < m; i++) {
		printf("��ֱ����� x%d��y%d: ", i+1, i+1);
		scanf("%lf%lf", &points[i][0], &points[i][1]);
	}
} 
 
void output(double** disMat,  int m, int n){
	int i, j;
	printf("   ");
	for(i = 0; i < m; i++) {
		printf(" x%-6d  ", i+1); 			
	}
	printf("\n");
	for(i = 0; i < m; i++) {
		printf("x%d  ", i+1); 
		for(j = 0; j < n; j++){
			printf("%-8g  ", disMat[i][j]); 
		}
		printf("\n");	
			
	}
		
}


void outPoints(double** points,  int m){							//���������ľ��� ����ʱ���� 
	int i;
	for(i = 0; i < m; i++) {
		printf("%lf   %lf\n", points[i][0], points[i][1]); 
	}
		
}
