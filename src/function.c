#include<function.h>
#include<stdio.h>
#include<math.h>

int add(int input1,int input2)
{
    int result = input1+input2;
    return result;
}

int subtract(int input1,int input2)
{
    int result = input1-input2;
    return result;
}


int multiply(int input1,int input2)
{
    int result = input1*input2;
    return result;
}

int divide(int input1,int input2)
{
    int result = input1/input2;
    return result;
}

double squareroot(double triginput)
{
    double result = sqrt(triginput);
    return result;
}

int modulus(int input1,int input2)
{
    int result = input1 % input2;
    return result;
}

int fact(int input1)
{
    int i,fact =1;
    if (input1 < 0)
        printf("Error! Factorial of a negative number doesn't exist.");
    else {
        for (i = 1; i <= input1; ++i) {
            fact *= i;
        }
        return fact;
    }
}

double cosine(double triginput)
{
    double result = cos(triginput);
    return result;
    
}
double sine(double triginput)
{
    double result = sin(triginput);
    return result;
    
}
int power(int input1,int input2)
{
    int result = pow(input1,input2);
    return result;
}

