#pragma once
#include<string>
#include<vector>
namespace Render {
	struct MaterialParams {
		float specular;
		float metallic;
		float roughness;
		float ao;
	};
	class Material
	{
	private:
		std::string m_material_name;
		std::vector<MaterialParams> m_material_params;

	public:
		Material(const std::string& name, MaterialParams& material_params);
		~Material();
	};
}
