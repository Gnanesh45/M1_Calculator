#include<stdio.h>
int addition();
int subtraction();
int multiplication();
int division();
int modulus();
int power();
int factorial();

int main() {
  int choice; 
  int n1,n2,ans=0;
  printf("Select the operation : ");
  printf("1.Additon\n 2.Subtraction\n 3.Multplication\n 4.Division\n 5.Modulo\n 6.Power\n 7.Factorial\n");
  scanf("%d",&choice);

 switch(choice)
 {
    case 1:
      printf("Enter any two number for Addition:");
      scanf("%d %d",&n1,&n2);    
      ans=addition(n1,n2); //calling addition function
      printf("Result = %d",ans);
      break;
    case 2:
      printf("Enter any two number for Subtraction:");
      scanf("%d %d",&n1,&n2);
      ans=subtraction(n1,n2); //calling subtraction function
      printf("Result = %d",ans);
      break;
    case 3:
      printf("Enter any two number for Multiplication:");
      scanf("%d %d",&n1,&n2);
      ans=multiplication(n1,n2); //calling multiply function 
      printf("Result = %d",ans);
      break;
    case 4:
      printf("Enter any two number for Division:");
      scanf("%d %d",&n1,&n2);     
      ans=division(n1,n2);    //calling division function
      printf("Result = %d",ans);
      break;
    case 5: 
        printf("Enter any two number to find the modulus :");
        scanf("%d %d",&n1,&n2);
        ans=modulus(n1,n2);  // calling modulus function
        printf("Result = %d",ans);
        break;  
    case 6: 
        printf("\nEnter two numbers to find the power \n");
        printf("number: ");
        scanf("%d",&n1);
        printf("power : ");
        scanf("%d",&n2);      // calling power function
        ans=power(n1,n2);
        printf("Result = %d",ans);
        break; 
    case 7: 
        printf("\nEnter a number to find the factorial : ");
        scanf("%d",&n1);
        ans=factorial(n1); //calling  factorial function
        printf("Result = %d",ans);
        break;  
    // Incase operator doesn't match any given input
    default:
      printf("Error! operator is not correct");
  }
  return 0;
}