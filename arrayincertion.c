#include<stdio.h>
int main()
{
 int a[100],i,l,pos,n,w;
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
 printf("Enter the element position\n");
 scanf("%d",&pos);
 w=pos-1;
 printf("Enter the element\n");
 scanf("%d",&n);
 for(i=l;i>w;i--)
 {
  a[i]=a[i-1];
 }
 a[pos]=n;
 l++;
 printf("New element inserted array\n");
 for(i=0;i<l;i++)
 {
  printf(" %d,",a[i]);
 }
 return (0);
 }
