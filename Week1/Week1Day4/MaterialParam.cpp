#include<iostream>
#include "MaterialParam.h"

namespace Render {
	MaterialParam::MaterialParam()
	{
		base_color = { 1.0, 1.0, 1.0 };
		metallic = 0.0;
		roughness = 0.5;
		ao = 1.0;
		normal = { 0.0,0.0,1.0 };
		shading_model = ShadingModel::LIT;
	}

	MaterialParam::MaterialParam(
		Color3 base_color,
		float metallic,
		float roughness,
		float ao,
		Vector3 normal,
		ShadingModel shading_model
	)
	{
		this->base_color = base_color;
		this->metallic = metallic;
		this->roughness = roughness;
		this->ao = ao;
		this->normal = normal;
		this->shading_model = shading_model;
	}

	void MaterialParam::PrintMaterialParam() const
	{
		std::cout << "MaterialParam:" << std::endl;
		std::cout << "BaseColor: (" << this->base_color.r << "," << this->base_color.g << "," << this->base_color.b << ")" << std::endl;
		std::cout << "Metallic:" << this->metallic << std::endl;
		std::cout << "Roughness:" << this->roughness << std::endl;
		std::cout << "AO:" << this->ao << std::endl;
		std::cout << "Normal: (" << this->normal.x << "," << this->normal.y << "," << this->normal.z << ")" << std::endl;
		std::cout << "ShadingModel:";
		switch (this->shading_model)
		{
		case ShadingModel::UNLIT:
			std::cout << "Unlit" << std::endl;
			break;
		case ShadingModel::LIT:
			std::cout << "Lit" << std::endl;;
			break;
		case ShadingModel::HAIR:
			std::cout << "Hair" << std::endl;;
			break;
		case ShadingModel::SKIN:
			std::cout << "Skin" << std::endl;;
			break;
		}
		std::cout << "--------------------" << std::endl;
	}
}