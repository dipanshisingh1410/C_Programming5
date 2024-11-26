//gcd using recursion
#include <stdio.h> 
void gcd(int a,int b,int g)
{ 
    if(a%g==0 && b%g==0)
    printf("%d",g); 
    else 
    {g--; 
    gcd(a,b,g);} 
}
int main()
{ 
    int a, b; 
    scanf("%d%d",&a,&b); 
    gcd(a,b,a); 
    return 0; 
}