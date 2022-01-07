#include <stdio.h>
#include <stdlib.h>

int main(int argc,char*argv[])
{
  int i,j,N,t,c;
  int *a,*p;
  int n = 0, k = 0;
    
  N=argc-1;
  a = (int*) malloc (sizeof(int)*N);
  p = (int*) malloc (sizeof(int)*1000);
  for(i = 1; i < argc ; i++)
  {   
    a[i-1] = atoi(argv[i]);
    c = 0;
    for(j = 1; j <= a[i-1]; j++)
    {
      if (a[i-1]%j == 0)
      {
        c++;
      }
    }
    if (c == 2)
    {
      p[k++] = a[i-1];
      n++; //will count only prime
    }      
  }
  
  for (i = 0; i < n-1; i++)
  {
    for (j = i + 1; j < n; j++)
    {
      if (p[i] > p[j])
      {
        t = p[i];
        p[i] = p[j];
        p[j] = t;
      }
    }
  }
  if(n==0)
  {
    printf("There is no prime number");
  }
  else
  {
    printf("The smallest prime is %d\n", p[n-1]);
    printf("The biggest prime is %d\n", p[0]);
  }
  free(p);
  return 0;
}