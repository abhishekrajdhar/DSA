#include <stdio.h>
#include <math.h>
int countprime(int a[], int n)
{
    int i,j, prime=0;
    for(i=0; i<n; i++)
    {
        int count=0;
      if(a[i]<=1)
      count=0;
      for(j=2; j<sqrt(a[i]); j++){
      if(a[i]%j==0)
      count=0;
      else
      count++;}
      if(count==1)
      prime++;
    }

   return prime;
}

void main()
{
    int a[100], n;
    printf("enter the number of elements");
    scanf("%d",&n);
    printf("enter the elements");
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("%d", countprime(a,n));

}