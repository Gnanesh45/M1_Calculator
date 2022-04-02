#include <calculator_operations.h>

int add(int operand1, int operand2)
{
    int ans=operand1 + operand2;
    return ans;
}

int subtract(int operand1, int operand2)
{
    int ans1=operand1 - operand2;
    return ans1;
}

int multiply(int operand1, int operand2)
{
    int ans2=operand1 * operand2;
    return ans2;
}

int divide(int operand1, int operand2)
{
    if(0 == operand2)
        return 0;
    else
        return operand1 / operand2;
}