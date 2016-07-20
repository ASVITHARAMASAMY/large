#include <stdio.h>

int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&a>c)
      printf("a is largest element");
    else if(b>a&&b>c)
      printf("b is largest element");
    else
      printf("c is the largest element");
    return 0;
}
