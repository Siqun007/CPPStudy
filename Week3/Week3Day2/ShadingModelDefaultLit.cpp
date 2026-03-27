#include<iostream>
#include<string>
#include"ShadingModelDefaultLit.h"
namespace Render {
    //ShadingModelDefaultLit::ShadingModelDefaultLit():ShadingModelDefaultLit()
    //{
    //        std::cout << "[派生无参构造] ShadingModelDefaulit 被创建" << std::endl;
    //}

    ShadingModelDefaultLit::ShadingModelDefaultLit(const std::string& name) :ShadingModelBase(name)
    {
        std::cout << "[派生有参构造] ShadingModelDefaulit 被创建" << std::endl;
    }

    ShadingModelDefaultLit::~ShadingModelDefaultLit()
    {
        std::cout << "[派生析构] ShadingModelDefaulit 被销毁" << std::endl;
    }

    void ShadingModelDefaultLit::RenderDefaultLit()
    {
        std::cout << "执行DefaultLit渲染算法" << std::endl;
    }

    float ShadingModelDefaultLit::evaluateLight()
    {
        std::cout << "执行DefaultLit光照计算" << std::endl;
        return 1.0f;
    }
}