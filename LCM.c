#include<stdio.h>
int main()
 { int a,b,gcd,lcm;
 printf("enter the first number");
 scanf("%d", &a);
 printf(" enter the second number");
 scanf("%d", &b);
  for(int i=1;i<=a&&b>=i;i++)
   { 
    if(a%i==0&&0==b%i)
    { 
        gcd=i;
    }
   }
   lcm = (a*b)/gcd;
   printf("the lcm of %d and %d is %d",a,b,lcm);
return 0;
    }