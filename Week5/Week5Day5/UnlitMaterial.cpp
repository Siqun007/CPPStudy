#include "UnlitMaterial.h"
#include"Color.h"
namespace Render {
    UnlitMaterial::UnlitMaterial(const std::string& name)
        : MaterialBase(name)
        , m_emissive_color(Color(0.0f, 0.0f, 0.0f)) // 无自发光
        , m_opacity(1.0)
        , m_opacity_mask(1.0)
    {

    }

    UnlitMaterial::UnlitMaterial(const std::string& name, BlendMode& blend_mode)
        : MaterialBase(name, blend_mode)
        , m_emissive_color(Color(0.0f, 0.0f, 0.0f)) // 无自发光
        , m_opacity(1.0)
        , m_opacity_mask(1.0)
    {

    }

    UnlitMaterial::~UnlitMaterial()
    {

    }

    Color UnlitMaterial::GetEmissiveColor() const
    {
        return m_emissive_color;
    }

    void UnlitMaterial::SetEmissiveColor(const Color& emissive_color)
    {
        m_emissive_color = emissive_color;
    }

    void UnlitMaterial::SetOpacity(float opacity)
    {
        m_opacity = opacity;
    }

    float UnlitMaterial::GetOpacity() const
    {
        return m_opacity;
    }

    void UnlitMaterial::SetOpacityMask(float opacity_mask)
    {
        m_opacity_mask = opacity_mask;
    }

    float UnlitMaterial::GetOpacityMask() const
    {
        return m_opacity_mask;
    }

    void UnlitMaterial::PrintMaterialAllParams()
    {
        std::cout << "MaterialName：" << GetMaterialName() << std::endl;
        std::cout << "ShadingModel：Unlit" << std::endl;

        std::cout << "BlendMode：";
        switch (GetMaterialBlendMode())
        {
        case BlendMode::OPAQUE:      std::cout << "OPAQUE"; break;
        case BlendMode::MASK:        std::cout << "MASK"; break;
        case BlendMode::TRANSLUCENT: std::cout << "TRANSLUCENT"; break;
        default:                     std::cout << "OPAQUE"; break;
        }
        std::cout << std::endl;

        Color emissive_color = GetEmissiveColor();
        std::cout << "EmissiveColor：（" << emissive_color.r << "," << emissive_color.g << "," << emissive_color.b << "）" << std::endl;


    }
}