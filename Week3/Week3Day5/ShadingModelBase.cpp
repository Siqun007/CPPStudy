#include<iostream>
#include<string>
#include"ShadingModelBase.h"

namespace Render {
	ShadingModelBase::ShadingModelBase(const std::string& name) :m_name(name) 
	{
		std::cout << "[基类构造]ShadingModelBase已被创建，名字是：" << m_name << std::endl;
	}

	ShadingModelBase::~ShadingModelBase()
	{
		std::cout << "[基类析构]ShadingModelBase已被销毁" << std::endl;
	}

	void ShadingModelBase::printShadingModelParam() const{
		std::cout << "该ShadingModel的名字是：" << m_name << std::endl;
	}
}