#include "HairMaterial.h"
#include"Color.h"
namespace Render {
    HairMaterial::HairMaterial(const std::string& name)
        : MaterialBase(name)
        , m_basecolor(Color(1.0f, 1.0f, 1.0f))      // 白色
        , m_normal(Vector3(0.0f, 0.0f, 1.0f))       // 默认法线朝上
        , m_scatter(0.0f)
        , m_specular(0.5f)
        , m_roughness(0.5f)
        , m_ao(1.0f)
        , m_emissive_color(Color(0.0f, 0.0f, 0.0f)) // 无自发光
        , m_opacity(1.0f)
        , m_opacity_mask(1.0f)
    {

    }

    HairMaterial::HairMaterial(const std::string& name, BlendMode& blend_mode)
        : MaterialBase(name, blend_mode)
        , m_basecolor(Color(1.0f, 1.0f, 1.0f))      // 白色
        , m_normal(Vector3(0.0f, 0.0f, 1.0f))       // 默认法线朝上
        , m_scatter(0.0f)
        , m_specular(0.5f)
        , m_roughness(0.5f)
        , m_ao(1.0f)
        , m_emissive_color(Color(0.0f, 0.0f, 0.0f)) // 无自发光
        , m_opacity(1.0f)
        , m_opacity_mask(1.0f)
    {

    }

    HairMaterial::~HairMaterial()
    {

    }

    Color HairMaterial::GetBaseColor() const
    {
        return m_basecolor;
    }

    void HairMaterial::SetBaseColor(const Color& basecolor)
    {
        m_basecolor = basecolor;
    }

    Vector3 HairMaterial::GetNormal() const
    {
        return m_normal;
    }

    void HairMaterial::SetNormal(const Vector3& normal)
    {
        m_normal = normal;
    }

    float HairMaterial::GetScatter() const
    {
        return m_scatter;
    }

    void HairMaterial::SetScatter(float scatter)
    {
        m_scatter = scatter;
    }

    float HairMaterial::GetRoughness() const
    {
        return m_roughness;
    }

    void HairMaterial::SetRoughness(float roughness)
    {
        m_roughness = roughness;
    }

    float HairMaterial::GetSpecular() const
    {
        return m_specular;
    }

    void HairMaterial::SetSpecular(float specular)
    {
        m_specular = specular;
    }

    float HairMaterial::GetAO() const
    {
        return m_ao;
    }

    void HairMaterial::SetAO(float ao)
    {
        m_ao = ao;
    }

    Color HairMaterial::GetEmissiveColor() const
    {
        return m_emissive_color;
    }

    void HairMaterial::SetEmissiveColor(const Color& emissive_color)
    {
        m_emissive_color = emissive_color;
    }

    void HairMaterial::SetOpacity(float opacity)
    {
        m_opacity = opacity;
    }

    float HairMaterial::GetOpacity() const
    {
        return m_opacity;
    }

    void HairMaterial::SetOpacityMask(float opacity_mask)
    {
        m_opacity_mask = opacity_mask;
    }

    float HairMaterial::GetOpacityMask() const
    {
        return m_opacity_mask;
    }

    void HairMaterial::PrintMaterialAllParams()
    {
        std::cout << "MaterialName：" << GetMaterialName() << std::endl;
        std::cout << "ShadingModel：Hair" << std::endl;

        std::cout << "BlendMode：";
        switch (GetMaterialBlendMode())
        {
        case BlendMode::OPAQUE:      std::cout << "OPAQUE"; break;
        case BlendMode::MASK:        std::cout << "MASK"; break;
        case BlendMode::TRANSLUCENT: std::cout << "TRANSLUCENT"; break;
        default:                     std::cout << "OPAQUE"; break;
        }
        std::cout << std::endl;

        Color basecolor = GetBaseColor();
        std::cout << "BaseColor：（" << basecolor.r << "," << basecolor.r << "," << basecolor.g << "）" << std::endl;
        std::cout << "Scatter：" << GetScatter() << std::endl;
        std::cout << "Roughness：" << GetRoughness() << std::endl;
        std::cout << "Specular：" << GetSpecular() << std::endl;
        std::cout << "AO：" << GetAO() << std::endl;
        Vector3 normal = GetNormal();
        std::cout << "Normal：（" << normal.x << "," << normal.y << "," << normal.z << "）" << std::endl;
        Color emissive_color = GetEmissiveColor();
        std::cout << "EmissiveColor：（" << emissive_color.r << "," << emissive_color.r << "," << emissive_color.g << "）" << std::endl;
    }
}