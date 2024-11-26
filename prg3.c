//print string in reverse using pointers
#include<stdio.h> 
void rev(char *a)
{ int i; char m; 
  for(i=0;i<2;i++)
 { m=*(a+i); 
  *(a+i)=*(a+3-i); 
  *(a+3-i)=m; } 

}
int main()
{ 
  char a[5]={"abcd"}; 
  char *t=a; 
  rev(t); 
  printf("%s",a); 

  return 0; 
}