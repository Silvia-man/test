/*  1.�����ÿ��������Ϊһ�����ݣ��� i�����ݶ�Ӧ��һ���Ǹ�������������ֵ cost[i](������0��ʼ)��

	ÿ��������һ�������㶼Ҫ���Ѷ�Ӧ����������ֵ��Ȼ�������ѡ�������һ�����ݻ������������ݡ�
	
	����Ҫ�ҵ��ﵽ¥�㶥������ͻ��ѡ��ڿ�ʼʱ�������ѡ�������Ϊ 0 �� 1 ��Ԫ����Ϊ��ʼ���ݡ�
	
	ʾ�� 1:
	
	����: cost = [10, 15, 20]
	���: 15
	����: ��ͻ����Ǵ�cost[1]��ʼ��Ȼ�����������ɵ����ݶ���һ������15��
	 ʾ�� 2:
	
	����: cost = [1, 100, 1, 1, 1, 100, 1, 1, 100, 1]
	���: 6
	����: ��ͻ��ѷ�ʽ�Ǵ�cost[0]��ʼ�����������Щ1������cost[3]��һ������6��

*/ 

#include<stdio.h>
#include<malloc.h>
int minCostClimbingStairs(int* cost, int costSize) {
	int i;
    int a[costSize];//*a = (int *)malloc(sizeof(int) * costSize);
    a[0] = cost[0];
    a[1] = cost[1];
    for(i = 2; i < costSize+1; i++)
    {
        if(a[i-1] > a[i-2])
            a[i] = a[i-2] + cost[i];
        else
            a[i] = a[i-1] + cost[i];
    }
    return a[costSize-1] > a[costSize-2] ? a[costSize-2] : a[costSize-1]; 
}

int main(){
	int sum,i;
	printf("һ���ж��ٽ�¥�ݣ�\n");
	scanf("%d", &sum);
	int cost[sum];
	printf("\n�밴˳��������������ֵ��\n");
	for(i = 0; i < sum; i++){
		scanf("%d", &cost[i]);
	} 
	
	int t = minCostClimbingStairs(cost, 10);
	printf("\n�ﵽ¥�㶥������ͻ���:%d\n", t);
	return 0;
} 
