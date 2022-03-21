#include <stdio.h> 

int main()
{
    int i;       //정수형 변수 선언
    int *ptr;    //싱글 포인터 변수 선언
    int **dptr;  //더블 포인터 변수 선언
    i = 1234;
    
    printf("[------배기원 2021041081------]\n");
    printf("[checking values before ptr = &i] \n"); 
    printf("value of i == %d\n", i);              //정수형 변수 i출력.
    printf("address of i == %p\n", &i);           //정수형 변수 i의 주소 출력.
    printf("value of ptr == %p\n", ptr);          //초기화 안된 포인터 변수 ptr의 쓰레기값 출력.
    printf("address of ptr == %p\n", &ptr);       //ptr의 주소 출력.

    ptr = &i;  /* ptr is now holding the address of i */

    printf("\n[checking values after ptr = &i] \n");
    printf("value of i == %d\n", i);              
    printf("address of i == %p\n", &i);           
    printf("value of ptr == %p\n", ptr);          //포인터 변수 ptr에 저장돼 있는 정수형 변수i의 주소 출력.
    printf("address of ptr == %p\n", &ptr);       
    printf("value of *ptr == %d\n", *ptr);        //ptr가 가르키는 주소에 저장되어 있는 값(i)을 출력.

    dptr = &ptr; /* dptr is now holding the address of ptr */

    printf("\n[checking values after dptr = &ptr] \n");
    printf("value of i == %d\n", i);
    printf("address of i == %p\n", &i);
    printf("value of ptr == %p\n", ptr);
    printf("address of ptr == %p\n", &ptr);
    printf("value of *ptr == %d\n", *ptr);
    printf("value of dptr == %p\n", dptr);        //더블 포인터 변수 dptr에 저장된 ptr의 주소 출력.
    printf("address of ptr == %p\n", &dptr);      //더블 포인터 변수 dptr의 주소 출력.
    printf("value of *dptr == %p\n", *dptr);      //dptr이 가리키는 주소에 저장되어 있는 값(i의 주소)를 출력.
    printf("value of **dptr == %d\n", **dptr);    //dptr이 가리키는 포인터 변수 ptr 주소에 저장된 주소에 저장된 값을 출력(i값).

    *ptr = 7777; /* changing the value of *ptr */

    printf("\n[after *ptr = 7777] \n");
    printf("value of i == %d\n", i);           //위에서 ptr가 가르키는 주소의 값에 대입했으므로 i값이 7777.
    printf("value of *ptr == %d\n", *ptr);      //이 세가지 출력함수 모두 같은 값을 참조.
    printf("value of **dptr == %d\n", **dptr);

    **dptr = 8888; /* changing the value of **dptr */

    printf("\n[after **dptr = 8888] \n");
    printf("value of i == %d\n", i);         //위에서 dptr이 가르키는 포인터 변수 ptr 주소에 저장된 주소에 저장된 값에 대입했으므로 i값은 8888.
    printf("value of *ptr == %d\n", *ptr);    //세가지 출력함수 모두 같은 값을 참조.
    printf("value of **dptr == %d\n", **dptr);

    return 0;
}