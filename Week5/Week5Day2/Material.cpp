#include "Material.h"
namespace Render {
	Material::Material(const std::string& name, MaterialParams& material_params) {
		m_material_name = name;
		m_material_params.push_back(material_params);
	}
	Material::~Material()
	{

	}
}