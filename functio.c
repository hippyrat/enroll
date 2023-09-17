#include <stdio.h>
#include <stdlib.h> // 为了使用atoi函数
#include <string.h> // 为了使用strtok函数

void haomafan(const char *input) {
    // 用于存储拆分后的两个数
    int num1, num2;
    
    // 使用strtok函数拆分字符串
    char *token = strtok(strdup(input), ",");
    
    
        // 将第一个拆分出的字符串转换为整数
        num1 = atoi(token);
        
        // 使用NULL让他继续拆分并将第二个字符串转换为整数
        token = strtok(NULL, ",");     
       
            num2 = atoi(token);
            
            // 计算两个数的和
            int sum = num1 + num2;
            
            // 将和转换为二进制并输出
            printf("Sum of %d and %d is: %d\n", num1, num2, sum);
            printf("Binary representation: ");
            
            // 输出和的二进制表示
            for (int i = 31; i >= 0; i--) {
                int bit = (sum >> i) & 1; // 获取二进制位
                printf("%d", bit);
            }
            
            printf("\n");
        
    }

int main() {
    char input[100]; // 用于存储用户输入的字符串
    
    printf("Enter a string in the format \"num1,num2\": ");
    scanf("%s", input);
    
    // 调用函数处理用户输入的字符串
    haomafan(input);
    
    return 0;
}
