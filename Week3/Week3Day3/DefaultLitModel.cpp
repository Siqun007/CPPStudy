#include<iostream>
#include<string>
#include"DefaultLitModel.h"

namespace Render {

    DefaultLitModel::DefaultLitModel() :ShadingModelBase("DefaultLit")
    {
        std::cout << "[子类析构]DefaultLitModel被创建了。" << std::endl;
    }

    DefaultLitModel::~DefaultLitModel()
    {
        std::cout << "[子类析构]DefaultLitModel被销毁了。" << std::endl;
    }

    float DefaultLitModel::evaluateLight()
    {
        std::cout << "" << std::endl;
        return 0.3f;
    }
}