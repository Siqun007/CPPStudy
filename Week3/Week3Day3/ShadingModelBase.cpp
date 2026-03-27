#include<iostream>
#include<string>
#include"ShadingModelBase.h"

namespace Render {

    ShadingModelBase::ShadingModelBase(const std::string& name) :m_name(name)
    {
        std::cout << "[基类有参构造]ShadingModelBase 被创建，名字是：" << m_name << std::endl;
    }

    ShadingModelBase::~ShadingModelBase()
    {
        std::cout << "[基类有参构造]ShadingModelBase 被销毁，名字是：" << m_name << std::endl;
    }

    std::string ShadingModelBase::getShadingModelName() const
    {
        return m_name;
    }

    void ShadingModelBase::setShadingModelName(const std::string& name)
    {
        m_name = name;
    }

    float ShadingModelBase::evaluateLight()
    {
        std::cout << "[" << m_name << "] " << std::endl;;
        return 0.0f;
    }
}