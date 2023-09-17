#include <stdio.h>
 
void Visit(int a[][100],int n) 
{
    int p=0,q=n-1;
    int count=0;
 
    while(count<n*n)
    {
        for(int i=p;i<=q;i++)//从上面开始赋值
            a[p][i]=++count;
 
        for(int i=p+1;i<=q;i++)//从右边开始赋值
            a[i][q]=++count;
 
        for(int i=q-1;i>=p;i--)//从下面开始赋值
            a[q][i]=++count;
 
        for(int i=q-1;i>=p+1;i--)
            a[i][p]=++count;
            p++;
            q--;
    }
 
 
}
 
void Print(int a[][100],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            printf(" %2d",a[i][j]);
        printf("\n");
    }
}
 
int main()
{
    int n,a[100][100];
    scanf("%d",&n);
    Visit(a,n);
    Print(a,n);
    return 0;
}
