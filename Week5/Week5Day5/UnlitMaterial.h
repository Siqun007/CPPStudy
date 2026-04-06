#pragma once
#include "MaterialBase.h"
#include "Color.h"
namespace Render {
    class UnlitMaterial : public MaterialBase
    {
    private:
        Color m_emissive_color;
        float m_opacity;
        float m_opacity_mask;

    public:
        UnlitMaterial(const std::string& name);
        UnlitMaterial(const std::string& name, BlendMode& blend_mode);
        ~UnlitMaterial() override;

        Color GetEmissiveColor() const;
        void SetEmissiveColor(const Color& emissive_color);

        float GetOpacity() const;
        void SetOpacity(float opacity);

        float GetOpacityMask() const;
        void SetOpacityMask(float opacity_mask);


        void PrintMaterialAllParams() override;
    };

}


