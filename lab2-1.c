#include <stdio.h> 

int main()
{
    char charType; int integerType; float floatType; double doubleType;  //�� ������ Ÿ���� ������ ����
    
    printf("[------���� 2021041081------]\n");
    printf("Size of char: %ld byte\n",sizeof(charType));         //sizeof �����ڷ� ������ �������� ������ Ÿ�� ũ�⸦ ���.
    printf("Size of int: %ld bytes\n",sizeof(integerType));
    printf("Size of float: %ld bytes\n",sizeof(floatType));
    printf("Size of double: %ld bytes\n",sizeof(doubleType));
    printf("-----------------------------------------\n");
    printf("Size of char: %ld byte\n",sizeof(char));            //�ڷ����� ũ�� ���.
    printf("Size of int: %ld bytes\n",sizeof(int));
    printf("Size of float: %ld bytes\n",sizeof(float));
    printf("Size of double: %ld bytes\n",sizeof(double));
    printf("-----------------------------------------\n");
    printf("Size of char*: %ld byte\n",sizeof(char*));          //������ ���� �ڷ����� ũ�Ⱑ ��� �����Ƿ� ���� ���� ����.
    printf("Size of int*: %ld bytes\n",sizeof(int*));
    printf("Size of float*: %ld bytes\n",sizeof(float*));
    printf("Size of double*: %ld bytes\n",sizeof(double*));
    return 0;
}