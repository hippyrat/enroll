#include <stdio.h>
int main()
{
    int a [50][50];//定义最大情况50*50矩阵
    int n=0;
    scanf("%d",&n);
    int i=0,j=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            a[i][j]=-1;
        }
    }
    int num=1;
    int way=1;
    i=0,j=0;
    while(num<=n*n)
    {
        if(a[i][j]==-1)//判断之前有没有被填充过数字
        {
            a[i][j]=num;
            num++;
        }
        if(way==1)//先向右填充
        {
            j++;
            if(j==n||a[i][j]!=-1)//要判断是否到达边界和这个地方是否被填充过
            {
                j--;//经实验发现若满足上方条件i要回退一个再换方向才对，我其实不太明白为啥
                way=2;//向下
            }
        }else if(way==2)
        {
            i++;
            if(i==n||a[i][j]!=-1)
            {
                i--;
                way=3;
            }
        }else if(way==3)
        {
            j--;
            if(j==-1||a[i][j]!=-1)
            {
                j++;
                way=4;
            }
        }else if(way==4)
        {
            i--;
            if(i==-1||a[i][j]!=-1)
            {
                i++;
                way=1;
            }
        }
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1;j++)
        {
                printf("%3d",a[i][j]);
        }
        printf("%3d\n",a[i][n-1]);
    }
    i=n-1;
    for(j=0;j<n-1;j++)
    {
        printf("%3d",a[i][j]);
    }
    printf("%3d",a[i][n-1]);
    return 0;
}