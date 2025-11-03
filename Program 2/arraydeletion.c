#include<stdio.h>
int main()
{
 int a[100],i,l,pos,w;
 printf("Enter the array lmit\n");
 scanf("%d",&l);
 printf("Enter the array elements\n");
 for(i=0;i<l;i++)
 {
  scanf("%d",&a[i]);
 }
 printf("Inserted Array\n");
 for(i=0;i<l;i++)
 {
  printf(" %d, ",a[i]);
 }
 printf("\n");
 printf("Enter the deleting element position\n");
 scanf("%d",&pos);
 for(i=pos;i<l-1;i++)
 {
  a[i]=a[i+1];
 }
 l--;
 printf("Deleted Array\n");
 for(i=0;i<l;i++)
 {
  printf(" %d, ",a[i]);
 }
 return (0);
 }
