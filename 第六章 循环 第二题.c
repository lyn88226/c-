#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    int min,max,m,n,num;
    printf("Enter two integers(with /): ");
    scanf("%d/%d",&m,&n);
    if (m>=n) {
      max=m;
      min=n;
    } else {
      max=n;
      min=m;
    }
    for(int mid=0;;){
      if(min==0){
        num=max;
        goto p_1;
      }
      mid=min;
      min=max%min;
      max=mid;
    }
    p_1:
    {
      m=m/num;
      n=n/num;
      printf("GCD is %d \n \t and it's print %d / %d.\n",num,m,n);
    }
    return 0;
}
