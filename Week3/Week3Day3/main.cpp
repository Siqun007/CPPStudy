#include <iostream>
#include "ShadingModelBase.h"
#include "DefaultLitModel.h"
#include "CartoonModel.h"

int main()
{

    std::cout << "==== Day 3 : 渲染管线初始化 ====\n\n";

    Render::ShadingModelBase* material01 = new Render::DefaultLitModel();
    Render::ShadingModelBase* material02 = new Render::CartoonModel();

    std::cout << "\n--- 开始正式渲染光照 ---\n";

    float light01 = material01->evaluateLight();
    std::cout << " -> 材质1 最终光照强度: " << light01 << "\n\n";

    float light02 = material02->evaluateLight();
    std::cout << " -> 材质2 最终光照强度: " << light02 << "\n\n";


    std::cout << "--- 渲染结束，开始清理内存 ---\n";
    delete material01;
    delete material02;
    return 0;
}