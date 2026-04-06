#include<iostream>
#include"MaterialBase.h"
#include"DefautLitMaterial.h"
#include"HairMaterial.h"
#include"UnlitMaterial.h"
#include"MaterialManager.h"
#include"Color.h"

int main()
{
	Render::MaterialManager material_manager;

	std::cout << "--- ´´½¨ ---" << std::endl;
	auto mat01 = material_manager.CreateMaterial<Render::DefautLitMaterial>("M_BrickWall");
	mat01->SetRoughness(0.7f);
	mat01->SetMetallic(0.0f);

	auto mat02 = material_manager.CreateMaterial<Render::DefautLitMaterial>("M_Steel");
	mat02->SetRoughness(0.2f);
	mat02->SetMetallic(0.9f);

	auto mat03 = material_manager.CreateMaterial<Render::DefautLitMaterial>("M_Glass", Render::BlendMode::TRANSLUCENT);
	mat03->SetRoughness(0.2f);
	mat03->SetMetallic(0.9f);
	mat03->SetOpacity(0.0f);

	auto mat04 = material_manager.CreateMaterial<Render::UnlitMaterial>("M_HoloScreen");
	mat04->SetEmissiveColor(Render::Color(0.2f, 0.8f, 1.0f));

	auto mat05 = material_manager.CreateMaterial<Render::HairMaterial>("M_Hair", Render::BlendMode::MASK);
	mat05->SetRoughness(0.45f);
	mat05->SetScatter(0.6f);
	mat03->SetOpacityMask(0.33f);

	material_manager.ListAllMaterials();

	std::cout << "--- ²éÕÒ ---" << std::endl;
	material_manager.GetMaterialByName("M_Steel")->PrintMaterialAllParams();

	return 0;
}