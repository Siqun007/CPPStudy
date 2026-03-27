#include<iostream>
#include<string>
#include"ShadingModelBase.h"

namespace Render {

    //ShadingModelBase::ShadingModelBase():m_name("defaulit")
    //{
    //        std::cout << "[基类无参构造] ShadingModelBase 被创建，名字是:" << m_name << std::endl;
    //}

    ShadingModelBase::ShadingModelBase(const std::string& name) :m_name(name)
    {
        std::cout << "[基类有参构造] ShadingModelBase 被创建，名字是:" << m_name << std::endl;
    }

    ShadingModelBase::~ShadingModelBase()
    {
        std::cout << "[基类析构] ShadingModelBase 被销毁，名字是:" << m_name << std::endl;
    }

    std::string ShadingModelBase::getShadingModelName() const
    {
        return m_name;
    }

    void ShadingModelBase::setShadingModelName(const std::string& name)
    {
        m_name = name;
    }
}