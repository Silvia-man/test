#include<stdio.h>
#include<math.h>
#define N 3
struct Students{
	int serialNumber;
	char name[10];
	char gender[6];
	double chinese;
	double math;
	double english;
	double physics;
};
void addmessage(struct Students a[N], int i){
	printf("ѧ�ţ�");
	scanf("%d", &a[i].serialNumber); fflush(stdin);
	printf("������");
	gets(a[i].name);
	printf("�Ա�");
	gets(a[i].gender);
	printf("���ĳɼ���");
	scanf("%lf", &a[i].chinese); 
	printf("��ѧ�ɼ�: ");
	scanf("%lf", &a[i].math);
	printf("Ӣ��ɼ���");
	scanf("%lf", &a[i].english);
	printf("����ɼ���");
	scanf("%lf", &a[i].physics);

}

void outMessage(struct Students a[N], int numA){
	int i;
	for(i = 0;i < numA; i++){
		printf("----------------------------------------------------------------------------\n");
		printf("    ѧ��: %-4d  ", a[i].serialNumber);
		printf("    ������%-4s  ", a[i].name);
		printf("    �Ա�%-4s\n", a[i].gender);

		printf("    ���ģ�%-5g ", a[i].chinese);
		printf("    ��ѧ: %-5g ", a[i].math);
		printf("    Ӣ�%-5g ", a[i].english);
		printf("    ����%-5g\n", a[i].physics);
	}
		
}

void avePerson(struct Students a[N],int numA){
	int i;
	for(i = 0; i < numA; i++){
		printf("    %d�� %g\n",a[i].serialNumber, (a[i].chinese + a[i].math + a[i].english + a[i].physics) / 4.0);
	}
		
}
void aveClass(struct Students a[N],int numA){
	int i;
	double sumC = 0, sumM = 0, sumE = 0, sumP = 0;
	double nsC = 0, nsM = 0, nsE = 0, nsP = 0;
	for(i = 0; i < numA; i++){
		sumC += a[i].chinese;
		sumM += a[i].math;
		sumE += a[i].english;
		sumP += a[i].physics;
	}

	printf("\nȫ���ƽ���ɼ�Ϊ:\n");
	printf("����: %-5g ��ѧ: %-5g Ӣ��: %-5g ����: %-5g", sumC/numA ,sumM/numA, sumE/numA, sumP/numA);
	

	for(i = 0; i < numA; i++){
		nsC += pow(a[i].chinese - sumC/numA, 2);
	}
	
	for(i = 0; i < numA; i++){
		nsM += pow(a[i].math - sumM/numA, 2);
	}
	for(i = 0; i < numA; i++){
		nsE += pow(a[i].english - sumE/numA, 2);
	}
	for(i = 0; i < numA; i++){
		nsP += pow(a[i].physics - sumP/numA, 2);
	}
	printf("\n\n���Ʒ���Ϊ:\n");
	printf("����: %-5g ��ѧ: %-5g Ӣ��: %-5g ����: %-5g\n", nsC/numA, nsM/numA, nsE/numA, nsP/numA);


}
void OneSubjetSort(struct Students a[N], int numA, int choice){
	int i, j;
	struct Students temp;

	switch(choice){
	case 1:{
		for(i = 0; i < numA-1; i++){
			for(j= 0; j < numA-1; j++){
				if(a[j].chinese < a[j+1].chinese){
					temp = a[j];
					a[j] = a[j+1];
					a[j+1] = temp;
				}
			}
		}
		break;
	}

	case 2:{
		for(i = 0; i < numA-1; i++){
			for(j= 0; j < numA-1; j++){
				if(a[j].math < a[j+1].math){
					temp = a[j];
					a[j] = a[j+1];
					a[j+1] = temp;
				}
			}
		}
		break;
	}

	case 3:{
		for(i = 0; i < numA-1; i++){
			for(j= 0; j < numA-1; j++){
				if(a[j].english < a[j+1].english){
					temp = a[j];
					a[j] = a[j+1];
					a[j+1] = temp;
				}
			}
		}
		break;
	}


	case 4:{
		for(i = 0; i < numA-1; i++){
			for(j= 0; j < numA-1; j++){
				if(a[j].physics < a[j+1].physics){
					temp = a[j];
					a[j] = a[j+1];
					a[j+1] = temp;
				}
			}
		}
		break;
	}
	default:{
		   printf("�������");
	 }
		
	}
}
int main(){
	int numA = N;
	int i, choice;
	struct Students classA[N];
	for(i = 0; i < numA; i++){
		printf("\n�������%d��ѧ������Ϣ��\n", i+1);
		addmessage(classA, i);
	}
//	outMessage(classA, numA);
	printf("\n��ѧ����ƽ���ɼ�Ϊ��\n[ѧ��]��\n");
	avePerson(classA, numA);
	printf("\n��ѡ��һ�ſν�������\n1.����  2.��ѧ  3.Ӣ��  4.����\n");
	scanf("%d",&choice);
	OneSubjetSort(classA, numA, choice);
	outMessage(classA, numA);
	aveClass(classA, numA);
	return 0;
}
