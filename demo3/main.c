
#include <stdio.h>
#include "add.h"
#include "div.h"
#include "mul.h"



int main()
{
    int num1 = 100;
    int num2 = 20;


    int data = myadd(num1, num2);

    data = mydiv(num1, num2);
    printf("data: %d\n", data);
}