#include<stdio.h>

int main()
{
 long int i=0,n=0,p=0,s=0;
 scanf("%li",&n);
 for (i=1;i<=n;i++)
 { 
  scanf("%li",&p);
  if (p<0)
  {
   s++;
  }
 }
 printf("%li\n",s);
 return 0;
}
