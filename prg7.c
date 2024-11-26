//implement bit field 
#include <stdio.h>
#include <string.h>
int main()
{ 
  struct sale
  {
    char i_name[70]; 
    unsigned mrp:10;
    unsigned discount:7;
 }x; 
  x.mrp=100; 
  x.discount=20;
  strcpy(x.i_name,"abhyvcdh"); 

  float total=x.mrp-(x.mrp*x.discount*0.01); 
  printf("%f",total); 
  return 0;  

} 