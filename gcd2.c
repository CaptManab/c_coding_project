#include<stdio.h>
int gcd(int a, int b);
int gcd(int a, int b)
{
    if(a<b)
    {
        if(b%a == 0)
        {
            return a;
        }
        else
        {
            return gcd(b%a,a);
        }
    }
    else
    {
        if(a%b == 0)
        {
            return b;
        }
        else
        {
           return gcd(a%b,b);
        }
    }    
}
int main() 
{
    int a,b,gcdr;
    printf("enter two numbers to find their GCD\n");
    scanf("%d%d", &a,&b);
    gcdr=gcd(a,b);
    printf("The gcd is: %d" , gcdr);
return 0;
}
