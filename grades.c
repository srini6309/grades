#include<stdio.h>
int main()
{
    int num;
    printf("enter your marks:");
    scanf("%d",&num);
    printf("your mark is %d",num);
    if (num>=85)
    {
      printf("\nAnd your grade is A");
    }
    else if(num>=70)
    {
      printf("\nAnd your grade is B");
    }
    else if(num>=69)
    {
      printf("\nAnd your grade ips C");
    }
    else if(num>=40)
    {
      printf("\nAnd your grade is D");
    }
    else
    {
      printf("\nAnd your grade is F");
    }
 return 0;
}
