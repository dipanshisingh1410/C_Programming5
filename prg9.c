//structures inside structures 
#include <stdio.h>
struct profile
{ int rn; 
  char name[20]; 
  struct dob
  {int d; 
   int m; 
   int y; }dob[2]; 
}e[2]; 

int main()
{ int i; 
  printf("enter the details:"); 
  for(i=0;i<2;i++)
  { printf("%d",i+1); 
    scanf("%d",&e[i].rn); 
    scanf("%s",e[i].name); 
    scanf("%d%d%d",&e[i].dob[i].d,&e[i].dob[i].m,&e[i].dob[i].y); 
  }  

  printf("the entered details are:"); 
  for(i=0;i<2;i++)
  { printf("%d\n",i+1); 
    printf("%d\n",e[i].rn); 
    printf("%s\n",e[i].name); 
    printf("%d-%d-%d\n",e[i].dob[i].d,e[i].dob[i].m,e[i].dob[i].y); 
  }   

  return 0; 

}