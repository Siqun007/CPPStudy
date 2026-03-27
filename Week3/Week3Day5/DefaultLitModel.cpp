#include<iostream>
#include<string>
#include "DefaultLitModel.h"
namespace Render {
	DefaultLitModel::DefaultLitModel() :ShadingModelBase("DefaultLit")
	{
		std::cout << "[派生类构造函数]DefaultLitModel被创建" << std::endl;
	}

	DefaultLitModel::~DefaultLitModel() 
	{
		std::cout << "[派生类析构函数]DefaultLitModel被销毁" << std::endl;
	}

	float DefaultLitModel::evaluateLight() const
	{
		std::cout << "计算DefaultLit的光照算法" << std::endl;
		return 1.0f; 
	}
}