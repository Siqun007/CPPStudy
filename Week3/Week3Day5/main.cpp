#include <iostream>
#include <vector>
#include "MaterialSystem.h"
#include "ShadingModelBase.h"
#include "DefaultLitModel.h"
#include "HairModel.h"
#include "ClothModel.h"

int main()
{

	std::cout << "==============================" << std::endl;
	std::cout << " Day 5 : 假装材质系统小 Demo " << std::endl;
	std::cout << "==============================\n" << std::endl;

	Render::MaterialSystem material_system;

	Render::ShadingModelBase* mat01 = new Render::DefaultLitModel();
	material_system.AddMaterial(mat01);

	Render::ShadingModelBase* mat02 = new Render::HairModel();
	material_system.AddMaterial(mat02);

	Render::ShadingModelBase* mat03 = new Render::ClothModel();
	material_system.AddMaterial(mat03);

	material_system.PrintAllMaterialName();
	material_system.EvaluateAllMaterialLighting();


	std::cout << "Demo 运行结束，准备退出程序。\n" << std::endl;

	return 0;
}