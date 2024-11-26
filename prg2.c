//largest element by dynamic memory allocation
#include<stdio.h> 
#include<stdlib.h>
int main()
{ 
    int *a,i,t=0,j; 
    a=(int*)malloc(10*sizeof(int)); 
    for(j=0;j<10;j++)
    scanf("%d",&a[j]); 
    for(i=0;i<10;i++)
    if(a[i]>t)
    t=a[i]; 
    printf("\n%d",t); 

    return 0; 

} 