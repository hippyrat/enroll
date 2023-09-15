#include <stdio.h>
int main(){
    int a,b,c;
    printf("please enter three sides of the triangle(use , to separate them):");
    scanf("%d,%d,%d",&a,&b,&c);
    int A=a*a,B=b*b,C=c*c;                     //为了用勾股定理
    if(a+b>c&&a+c>b&&b+c>a){                   //第一层if判断是否是三角形
        if(A+B==C||A+C==B||B+C==A){            //判断直角
            printf("Right triangle\n");        
        }else if(A+B>C&&A+C>B&&C+B>A){         //判断锐角
            printf("Acute triangle\n");
        }else{
            printf("Obtuse triangle\n");
        }
        if(a==b||a==c||b==c){                  //判断等腰
            printf("Isosceles triangle\n");
        }
        if(a==b&&b==c){                       //判断等边
            printf("Equilateral triangle\n");
        }
    }
    else{
        printf("Not triangle\n");
    }
}