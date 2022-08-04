#include<stdio.h>
int posOfRightMostDiffBit(int m,int n)
{
    if(m==n)
        return -1;
        int count=1;
        while(m%2==n%2)//cheking we get remainder compared them  if both same
        {
            m=m/2;// next digit will be provided for both m and n
            n=n/2;
            count++;
        }
        return count;
        //printf("%d\n",count);
}
int main()
{
    int n,m,k;
    scanf("%d %d",&m,&n);
    k=posOfRightMostDiffBit(m,n);
    printf("%d\n",k);
    return 0;
}
