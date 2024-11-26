//series 
#include <stdio.h>
void series(int a , int b, int c)
{
    int s=0;
    s=a+b+c ; 
    if(s<200)
 {  printf(" %d ",s); 
   a=b; 
   b=c; 
   c=s;  
   series(a,b,c); }
} 
int main()
{ 
  int a=1,b=2,c=3; 
  printf("%d %d %d",a,b,c); 
  series(a,b,c); 
  return 0; 
}