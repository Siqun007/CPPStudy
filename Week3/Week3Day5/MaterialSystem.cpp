#include "MaterialSystem.h"
namespace Render {
	MaterialSystem::MaterialSystem()
	{

	}

	void MaterialSystem::AddMaterial(ShadingModelBase* material)
	{
		m_materials_list.push_back(material);
	}

	void MaterialSystem::EvaluateAllMaterialLighting() const
	{
		for (int i = 0; i < m_materials_list.size();i++) {
			float final_lighting = m_materials_list[i]->evaluateLight();
			std::cout << "光照结果为："<< final_lighting << std::endl;
		}

	}

	void MaterialSystem::PrintAllMaterialName() const
	{
		for (int i = 0; i < m_materials_list.size();i++) {
			m_materials_list[i]->printShadingModelParam();
		}
	}
	void MaterialSystem::ReleaseAllMaterial()
	{
		for (int i = 0; i < m_materials_list.size();i++) {
			delete m_materials_list[i];
			m_materials_list[i] = nullptr;
		}
		m_materials_list.clear();
	}

	MaterialSystem::~MaterialSystem()
	{
		if (!m_materials_list.empty())
		{
			ReleaseAllMaterial();
		}
	}
}