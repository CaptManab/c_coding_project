#include<stdio.h>
int main()
{ int a,b;
printf("enter the value of a\t");
printf("enter the value of b\t");
scanf("%d %d", &a,&b); // taking both user input using a single statement
 // the main swaping task perform
  a=a+b;
  b=a-b;
  a=a-b;
printf("%d=a %d=b is the swaping value ", a,b); // output of the swaping value
return 0;
}