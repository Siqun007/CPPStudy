#include<iostream>
#include<string>
#include "ClothModel.h"
namespace Render {
	ClothModel::ClothModel() :ShadingModelBase("Cloth")
	{
		std::cout << "[派生类构造函数]ClothModel被创建" << std::endl;
	}

	ClothModel::~ClothModel()
	{
		std::cout << "[派生类析构函数]ClothModel被销毁" << std::endl;
	}

	float ClothModel::evaluateLight() const
	{
		std::cout << "计算Cloth的光照算法" << std::endl;
		return 3.0f;
	}
}