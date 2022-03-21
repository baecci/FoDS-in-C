#include <stdio.h> 

int main()
{
    int i;       //������ ���� ����
    int *ptr;    //�̱� ������ ���� ����
    int **dptr;  //���� ������ ���� ����
    i = 1234;
    
    printf("[------���� 2021041081------]\n");
    printf("[checking values before ptr = &i] \n"); 
    printf("value of i == %d\n", i);              //������ ���� i���.
    printf("address of i == %p\n", &i);           //������ ���� i�� �ּ� ���.
    printf("value of ptr == %p\n", ptr);          //�ʱ�ȭ �ȵ� ������ ���� ptr�� �����Ⱚ ���.
    printf("address of ptr == %p\n", &ptr);       //ptr�� �ּ� ���.

    ptr = &i;  /* ptr is now holding the address of i */

    printf("\n[checking values after ptr = &i] \n");
    printf("value of i == %d\n", i);              
    printf("address of i == %p\n", &i);           
    printf("value of ptr == %p\n", ptr);          //������ ���� ptr�� ����� �ִ� ������ ����i�� �ּ� ���.
    printf("address of ptr == %p\n", &ptr);       
    printf("value of *ptr == %d\n", *ptr);        //ptr�� ����Ű�� �ּҿ� ����Ǿ� �ִ� ��(i)�� ���.

    dptr = &ptr; /* dptr is now holding the address of ptr */

    printf("\n[checking values after dptr = &ptr] \n");
    printf("value of i == %d\n", i);
    printf("address of i == %p\n", &i);
    printf("value of ptr == %p\n", ptr);
    printf("address of ptr == %p\n", &ptr);
    printf("value of *ptr == %d\n", *ptr);
    printf("value of dptr == %p\n", dptr);        //���� ������ ���� dptr�� ����� ptr�� �ּ� ���.
    printf("address of ptr == %p\n", &dptr);      //���� ������ ���� dptr�� �ּ� ���.
    printf("value of *dptr == %p\n", *dptr);      //dptr�� ����Ű�� �ּҿ� ����Ǿ� �ִ� ��(i�� �ּ�)�� ���.
    printf("value of **dptr == %d\n", **dptr);    //dptr�� ����Ű�� ������ ���� ptr �ּҿ� ����� �ּҿ� ����� ���� ���(i��).

    *ptr = 7777; /* changing the value of *ptr */

    printf("\n[after *ptr = 7777] \n");
    printf("value of i == %d\n", i);           //������ ptr�� ����Ű�� �ּ��� ���� ���������Ƿ� i���� 7777.
    printf("value of *ptr == %d\n", *ptr);      //�� ������ ����Լ� ��� ���� ���� ����.
    printf("value of **dptr == %d\n", **dptr);

    **dptr = 8888; /* changing the value of **dptr */

    printf("\n[after **dptr = 8888] \n");
    printf("value of i == %d\n", i);         //������ dptr�� ����Ű�� ������ ���� ptr �ּҿ� ����� �ּҿ� ����� ���� ���������Ƿ� i���� 8888.
    printf("value of *ptr == %d\n", *ptr);    //������ ����Լ� ��� ���� ���� ����.
    printf("value of **dptr == %d\n", **dptr);

    return 0;
}