#include "MaterialManager.h"
namespace Render {
	MaterialManager::MaterialManager()
	{

	}

	MaterialManager::~MaterialManager()
	{

	}

	std::shared_ptr<MaterialBase> MaterialManager::GetMaterialByName(const std::string& name) const
	{
		auto material = m_material_list.find(name);
		if (material != m_material_list.end())
		{
			return material->second;
		}
		return nullptr;
	}

	void MaterialManager::RemoveMaterial(const std::string& name)
	{
		m_material_list.erase(name);
	}

	void MaterialManager::ListAllMaterials() const
	{
		for (auto& material : m_material_list)
		{
			std::cout << "=====================================" << std::endl;
			material.second->PrintMaterialAllParams();
			std::cout << "=====================================\n" << std::endl;
		}
	}

	size_t MaterialManager::GetMaterialsCount() const
	{
		return m_material_list.size();
	}	

}