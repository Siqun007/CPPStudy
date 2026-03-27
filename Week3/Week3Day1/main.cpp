#include<iostream>
#include<string>
#include"ShadingModelDefaultLit.h"
int main() {
    std::cout << "--- 开始模拟 UE 材质系统分配着色模型 ---" << std::endl;
    {
        Render::ShadingModelDefaultLit defaulit_lit("defaulit01");
        defaulit_lit.RenderDefaultLit();

        Render::ShadingModelDefaultLit defaulit_lit02("defaulit02");
        defaulit_lit02.RenderDefaultLit();

        std::cout << "--- 准备离开作用域，触发析构 ---" << std::endl;
    }

    std::cout << "--- 程序结束 ---" << std::endl;


    return 0;
}