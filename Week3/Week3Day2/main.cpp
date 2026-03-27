#include<iostream>
#include<string>
#include"ShadingModelDefaultLit.h"
#include"ShadingModelBase.h"

int main() {
    std::cout << "--- 开始模拟 UE 材质系统分配着色模型 ---" << std::endl;

    Render::ShadingModelBase* defaulit_lit = new Render::ShadingModelDefaultLit("defaulit_lit01");

    float finally_lighting = defaulit_lit->evaluateLight();

    std::cout << "finally_lighting = " << finally_lighting << std::endl;

    delete defaulit_lit;
    std::cout << "--- 程序结束 ---" << std::endl;


    return 0;

}