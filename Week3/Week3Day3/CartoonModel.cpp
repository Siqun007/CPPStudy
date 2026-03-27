#include<iostream>
#include<string>
#include"CartoonModel.h"

namespace Render {

    CartoonModel::CartoonModel() :ShadingModelBase("Cartoon")
    {
        std::cout << "[子类构造]CartoonModel被创建了。" << std::endl;
    }

    CartoonModel::~CartoonModel()
    {
        std::cout << "[子类析构]CartoonModel被销毁了。" << std::endl;
    }

    float CartoonModel::evaluateLight()
    {
        std::cout << "" << std::endl;

        return 0.5;
    }
}