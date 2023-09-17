#include <stdio.h>
#include <string.h>

struct Material {    // 定义原料结构
    char name[50];
    double quantity; // 原料数量
};

struct Product {     // 定义商品信息结构
    char category[50]; // 商品品类
    char manufacturer[50]; // 生产厂商
    double price; // 商品价格
    int numMaterials; // 原料数量
    struct Material materials[50]; // 最多支持10种原料
};

int main() {
    // 创建商品信息
    struct Product product;
    
    // 填充商品信息
    strcpy(product.category, "产品1");
    strcpy(product.manufacturer, "公司1");
    product.price = 233.33;
    product.numMaterials = 2;
    
    // 填充原料信息
    strcpy(product.materials[0].name, "原料1");
    product.materials[0].quantity = 0.5;
    
    strcpy(product.materials[1].name, "原料2");
    product.materials[1].quantity = 0.2;
    
    printf("商品品类: %s\n", product.category);
    printf("生产厂商: %s\n", product.manufacturer);
    printf("商品价格: %.2f 元\n", product.price);
    printf("原料信息:\n");
    for (int i = 0; i < product.numMaterials; i++) {
        printf("  - %s: %.2f 千克\n", product.materials[i].name, product.materials[i].quantity);
    }  //遍历商品中的所有原料，并以格式化的方式将每种原料的名称和数量打印出来
    
    return 0;
}