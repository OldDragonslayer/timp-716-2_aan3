#include<stdio.h>

int main()
{
long int n=0;
int i=0,s=0,a=0,c=0;
  scanf("%li",&n);
for(i=1;i<=n;i++)
{
  scanf("%i",&a);
  c=c+a*a;
}
  printf("%i\n",c);
return 0;
}

