#include<iostream>
#include<string>
#include "HairModel.h"
namespace Render {
	HairModel::HairModel() :ShadingModelBase("Hair")
	{
		std::cout << "[派生类构造函数]HairModel被创建" << std::endl;
	}

	HairModel::~HairModel()
	{
		std::cout << "[派生类析构函数]HairModel被销毁" << std::endl;
	}

	float HairModel::evaluateLight() const
	{
		std::cout << "计算Hair的光照算法" << std::endl;
		return 2.0f;
	}
}