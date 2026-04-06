#pragma once
#include "MaterialBase.h"
#include "Color.h"
namespace Render {
    class DefautLitMaterial : public MaterialBase
    {
    private:
        Color m_basecolor;
        Vector3 m_normal;
        float m_metallic;
        float m_specular;
        float m_roughness;
        float m_ao;
        Color m_emissive_color;
        float m_opacity;
        float m_opacity_mask;

    public:
        DefautLitMaterial(const std::string& name);
        DefautLitMaterial(const std::string& name, BlendMode& blend_mode);
        ~DefautLitMaterial() override;

        Color GetBaseColor() const;
        void SetBaseColor(const Color& basecolor);

        Vector3 GetNormal() const;
        void SetNormal(const Vector3& normal);

        float GetMetallic() const;
        void SetMetallic(float metallic);

        float GetSpecular() const;
        void SetSpecular(float specular);

        float GetRoughness() const;
        void SetRoughness(float roughness);

        float GetAO() const;
        void SetAO(float ao);

        Color GetEmissiveColor() const;
        void SetEmissiveColor(const Color& emissive_color);

        float GetOpacity() const;
        void SetOpacity(float opacity);

        float GetOpacityMask() const;
        void SetOpacityMask(float opacity_mask);

        void PrintMaterialAllParams() override;
    };

}


