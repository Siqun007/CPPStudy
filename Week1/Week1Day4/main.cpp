#include<iostream>
#include "MaterialParam.h"

int main() {
	Render::MaterialParam dafaultMaterial;
	dafaultMaterial.PrintMaterialParam();

	Render::Color3 skinColor = { 1.0f, 0.5f, 0.2f };
	Render::Vector3 skinNormal = { 0.2f, 0.5f, 1.0f };
	float skinRoughness = 0.44f;

	Render::MaterialParam skinMaterial(skinColor, 0.0, skinRoughness, 1.0, skinNormal, Render::ShadingModel::SKIN);
	skinMaterial.PrintMaterialParam();

	return 0;
}