#include <stdio.h> 

int main()
{
    char charType; int integerType; float floatType; double doubleType;  //각 데이터 타입의 변수를 선언
    
    printf("[------배기원 2021041081------]\n");
    printf("Size of char: %ld byte\n",sizeof(charType));         //sizeof 연산자로 선언한 변수들의 데이터 타입 크기를 출력.
    printf("Size of int: %ld bytes\n",sizeof(integerType));
    printf("Size of float: %ld bytes\n",sizeof(floatType));
    printf("Size of double: %ld bytes\n",sizeof(doubleType));
    printf("-----------------------------------------\n");
    printf("Size of char: %ld byte\n",sizeof(char));            //자료형별 크기 출력.
    printf("Size of int: %ld bytes\n",sizeof(int));
    printf("Size of float: %ld bytes\n",sizeof(float));
    printf("Size of double: %ld bytes\n",sizeof(double));
    printf("-----------------------------------------\n");
    printf("Size of char*: %ld byte\n",sizeof(char*));          //포인터 변수 자료형은 크기가 모두 같으므로 같은 값이 나옴.
    printf("Size of int*: %ld bytes\n",sizeof(int*));
    printf("Size of float*: %ld bytes\n",sizeof(float*));
    printf("Size of double*: %ld bytes\n",sizeof(double*));
    return 0;
}