#pragma once
#include<iostream>
#include<unordered_map>
#include<memory>
#include"MaterialBase.h"
namespace Render {
	class MaterialManager
	{
	private:
		std::unordered_map<std::string, std::shared_ptr<MaterialBase>> m_material_list;

	public:
		MaterialManager();
		~MaterialManager();
		template <typename T, typename...Args>
		std::shared_ptr<T> CreateMaterial(const std::string& name, Args...args)
		{
			auto material = std::make_shared<T>(name, args...);
			m_material_list[name] = material;
			return material;
		}

		std::shared_ptr<MaterialBase>GetMaterialByName(const std::string& name) const;

		void RemoveMaterial(const std::string& name);

		void ListAllMaterials() const;

		size_t GetMaterialsCount() const;

	};

}

