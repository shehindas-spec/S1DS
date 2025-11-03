#include <stdio.h>

void main()
{
 int a1[30],a2[30],a3[50],a4[50],i,k=0,n1,n2,n3,j,temp;
 printf("Enter the first array limit\n");
 scanf("%d",&n1);
 printf("Enter the second array limit\n");
 scanf("%d",&n2);
 n3=n1+n2;
 printf("Enter the first array array\n");
 for(i=0;i<n1;i++)
 {
  scanf("%d",&a1[i]);
  a3[i]=a1[i];
  }
  k=n1;
 printf("Enter the second array array\n");
 for(i=0;i<n2;i++)
 {
  scanf("%d",&a2[i]);
  a3[k]=a2[i];
  k++;
  }
 printf("Merged array\n");
 for(i=0;i<n3;i++)
  {
   printf(" %d ",a3[i]);
  }
  printf("\n")
for(i=0;i<n3-1;i++)
{
 for(j=i+1;j<n3;j++)
 {
  if(a3[i]>a3[j])
   {
    temp=a3[i];
    a3[i]=a3[j];
    a3[j]=temp;
   }
 }
}
printf("The sorted array is\n");
for(i=0;i<n3;i++)
  {
   printf(" %d ",a3[i]);
  }
}
