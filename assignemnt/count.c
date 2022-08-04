#include<stdio.h>
int main()
{
    int n,user;
    printf("enter the size of an array:");
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++)
    {
        printf("enter the elements %d:",i+1);
        scanf("%d",&arr[i]);
    }
    printf("the elemenet to chesk:");
    scanf("%d",&user);
    int c=0;
     for (int i=0;i<n;i++)
     {
         if (arr[i]<=user)
             c++;
     }
     printf("%d\n",c);
     return 0;
}
