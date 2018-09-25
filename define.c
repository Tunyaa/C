#include <stdio.h>
#define SUM(a,b) (a+b)*2
#define P 2
int main()
{
  int a,b,c,d;
  a=3;
  b=5;
  c=(a+b)*2;
  d=SUM(a,b);
  printf("a=%d\nb=%d\nc=%d\nd=%d\n",a,b,c,d);
#if P==1
  printf("vipoln9ets9 vetka 1 P=%d",P);
#elif P==2
  printf("vetka 2 P=%d", P);
#else
  printf("vipoln9ets9 ina4e P=%d",P);
#endif

  getchar();
#undef P
#define P 5000
  printf("novoe zna4enie P=%d",P);

}
