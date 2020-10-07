#include<function.h>

int main()
{
    int choice,input1,input2,result;
    double triginput,trigoutput;
    printf("\nPlease select the required operation to be performed \n");
    printf("1.Addition\n");
    printf("2.Subtraction\n");
    printf("3.Multiplication\n");
    printf("4.Division\n");
    printf("5.Square Root\n");
    printf("6.Modulus\n");
    printf("7.Factorial\n");
    printf("8.Find Cos of value\n");
    printf("9.Power of x,y\n");
    printf("10.Find the sin value\n");
    printf("\nEnter you choice: ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
            printf("\nEnter two number to add");
            scanf("%d%d",&input1,&input2);
            result = add(input1,input2);
            printf("%d",result);
            break;
            
        case 2:
            printf("\nEnter two number to subtract");
            scanf("%d%d",&input1,&input2);
            result = subtract(input1,input2);
            printf("%d",result);
            break;
            
        case 3:
            printf("\nEnter two number to multiply");
            scanf("%d%d",&input1,&input2);
            result = multiply(input1,input2);
            printf("%d",result);
            break;
            
        case 4:
            printf("\nEnter two number to Divide");
            scanf("%d%d",&input1,&input2);
            result = divide(input1,input2);
            printf("%d",result);
            break;
            
        case 5:
            printf("\nEnter a number for squareroot");
            scanf("%lf",&triginput);
            trigoutput = squareroot(triginput);
            printf("%lf",trigoutput);
            break;
            
        case 6:
            printf("\nEnter two number to Mod");
            scanf("%d%d",&input1,&input2);
            result = modulus(input1,input2);
            printf("%d",result);
            break;
            
            
        case 7:
            printf("\nEnter a number for factorial");
            scanf("%d",&input1);
            result = fact(input1);
            printf("%d",result);
            break;
            
        case 8:
            printf("\nEnter a number to find cosine");
            scanf("%lf",&triginput);
            trigoutput = cosine(triginput);
            printf("%lf",trigoutput);
            break;
        
        case 9:
            printf("\nEnter a number to find sin");
            scanf("%lf",&triginput);
            trigoutput = sine(triginput);
            printf("%lf",trigoutput);
            break;
            
            
        case 10:
            printf("\nEnter a number for exponention");
            scanf("%d%d",&input1,&input2);
            result = power(input1,input2);
            printf("%d",result);
            break;
            
        
        
    }

    return 0;
}
