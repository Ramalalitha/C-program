#include <stdio.h>

int main() {
    int flag;
    int a[5],i,j;
    printf("enter elements into array\n");
    for(i=0;i<5;i++)
    scanf("%d",&a[i]);
    printf("The prime numbers of array\n");
    for(i=0;i<5;i++)
    {
        flag=0;
        for(j=2;j<a[i];j++)
        {
            if(a[i]>=0)
            flag=1;
            break;
            
        }
    }
  if(flag==0)
  printf("%d\t",a[i]);
  
    return 0;
}
