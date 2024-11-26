//append array using dma 
#include<stdio.h> 
#include<stdlib.h>
int main()
{ 
int arr[5],i,*p,j,n,k,l,m,z; 

printf("enter the 1st array\n"); 
p=(int*)malloc(5*sizeof(int)); 
for(i=0;i<5;i++)
scanf("%d",&p[i]);

for(j=0;j<5;j++) 
arr[i]=p[i]; 

printf("enter the number of elements of the array to be appended"); scanf("%d",&n); 
p=realloc(p,(5+n)*sizeof(int)); 

int app[n]; 

printf("enter the array :"); 
for(k=0;k<n;k++)
scanf("%d",&app[i]); 

for(l=0;l<5;l++)
p[i]=arr[i]; 

for(m=0;m<n;m++)
p[m+5]=app[m]; 

printf("array:\n"); 
for(z=0;z<n+5;z++)
printf("%d ",p[z]); 

return 0; }

