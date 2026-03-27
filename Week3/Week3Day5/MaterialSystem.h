#pragma once
#include<iostream>
#include<vector>
#include"ShadingModelBase.h"
namespace Render{
	class MaterialSystem
	{
	private:
		std::vector<ShadingModelBase*> m_materials_list;

	public:
		MaterialSystem();
		void AddMaterial(ShadingModelBase* material);
		void EvaluateAllMaterialLighting() const;
		void PrintAllMaterialName() const;
		void ReleaseAllMaterial();
		~MaterialSystem();
	};
}


