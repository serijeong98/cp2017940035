#include <stdio.h>
#include <stdlib.h>
//����ü ����: ������ ������ Ÿ������ �����Ͽ� ���ο� ������ Ÿ���� �����Ѵ�.
//struct complex {
//	double real;//��� ���� (member variable)
//	double imag; //�� (ditto)
//};//����ü ������ �ݵ�� �����ݷ����� ������ �Ѵ�.
//
//typedef struct complex Complex;//�ڷ��� "struct complex:�� ������ "Complex"��� �θ��ڴ�.

//���� �� ������ �ѹ������� ���� �� �ִ�.
typedef struct complex {
	double real;
	double imag;
} Complex;


//������ Ÿ���� ���� ����
typedef int myIntType;//�ڷ��� "int"�� ������ "myIntType"��� �θ��ڴ�.

//�Լ� printComplex()
//�Է�: ���Ҽ�
//���: ����
//�μ�ȿ��: ����
void printComplex(Complex* ptr) {//��κ��� ���, ����ü �����͸� �Ű������� ���޹޴´�.
	printf("%f +j%f\n", ptr->real, ptr->imag);

}

//�Լ� convertToConjugate()
//�Է�: ���Ҽ�(������)
//���: ����
//�μ�ȿ��: �Էµ� ���Ҽ��� �ӷ� ���Ҽ��� ��ȯ
void convertToConjugate(Complex* ptr) {
	//����ο� -1�� ���Ѵ�.
	ptr->imag = -1 * ptr->imag;
}

////�Լ� returnConjugate
////�Է�: ���Ҽ�(������)
////���: ���Ҽ� ����
////�μ�ȣ��: ����
//Complex* returnConjugate(Complex* ptr) {
//	Complex temp;
//	temp.real = ptr->real; temp.imag = -1 * ptr->imag;
//	return &temp;
//}

	//verion 2
Complex* returnConjugate(Complex* ptr) {
	Complex* tempPtr;
	tempPtr = (Complex*) malloc(sizeof(Complex));//�����Ҵ�

	tempPtr->real = ptr->real; tempPtr->imag = -1 * ptr->imag;
	return tempPtr;
}

//�Լ� mulComplex
//�Է� : �� ���Ҽ��� ������
//��� : ���Ҽ��� �� 
Complex* mulComplex(Complex* ptr1, Complex* ptr2) {
	Complex* tempPtr2;
	tempPtr2 = (Complex*)malloc(sizeof(Complex));

	tempPtr2->real = ptr1->real * ptr2->real; tempPtr2->imag = ptr1->imag * ptr2->imag;
	return tempPtr2;
}


int main() {
	myIntType count = 10;//==> int count = 10;
	//����ü ���� ����
	Complex a, b;//==>struct complex a;
	//(a: ����ü ����, struct complex: ������ Ÿ��)
	//����ü ������ ���� ����
	//��κ� ����ü�� ������ ������ ����Ͽ� �����Ѵ�.
	Complex* ptr;
	a.real = 10;//����ü������ ������� ���ٹ�� ==> ����ü �����̸�.��������̸�
	a.imag = 20;
	printComplex(&a);
	ptr = returnConjugate(&a); printComplex(ptr);
	//	convertToConjugate(&a);printComplex(&a);

	ptr = &a;
	ptr->real = 100;//����ü ������ ������ ������� ���ٹ�� ==> ����ü�����̸�->��������̸�
	ptr->imag = 200;
	printComplex(ptr);

	return 0;
}