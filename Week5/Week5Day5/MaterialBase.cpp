#include "MaterialBase.h"
namespace Render {

    MaterialBase::MaterialBase(const std::string& name) :m_name(name), m_blend_mode(BlendMode::OPAQUE)
    {

    }

    MaterialBase::MaterialBase(const std::string& name, BlendMode& blend_mode) :m_name(name), m_blend_mode(blend_mode)
    {

    }

    MaterialBase::~MaterialBase()
    {

    }

    std::string MaterialBase::GetMaterialName() const
    {
        return m_name;
    }

    void MaterialBase::SetMaterialName(const std::string& name)
    {
        m_name = name;
    }

    BlendMode MaterialBase::GetMaterialBlendMode() const
    {
        return m_blend_mode;
    }

    void MaterialBase::SetMaterialBlendMode(BlendMode& blend_mode)
    {
        m_blend_mode = blend_mode;
    }

    TextureList MaterialBase::GetTexturePath() const
    {
        if (m_texture_path.empty())
        {
            return {};
        }
        else
        {
            return m_texture_path;
        }
    }

    void MaterialBase::SetTexturePath(std::string& texture_path)
    {
        m_texture_path.push_back(texture_path);
    }

    void MaterialBase::PrintAllTexturePath() const
    {
        for (const auto& texture_path : m_texture_path) {
            std::cout << "texture_path" << std::endl;
        }
    }

}