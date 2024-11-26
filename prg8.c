//create a union with name roll number, and marks with percentage 
#include<stdio.h>
union student
{
  int rno; 
  char name[20]; 
  int m[5];
  }x; 
int main()
{   float s=0; 
    printf("enter the rno.:"); scanf("%d",&x.rno);
    printf("enter the name:"); scanf("%s",x.name); 
    for(int i=0;i<5;i++)
    {   printf("marks is sub %d",i+1); 
        scanf("%d",&x.m[i]); 
        s+=x.m[i]; 
    }
   printf("the percentage is :%d",s*0.2); 

   return 0;
}