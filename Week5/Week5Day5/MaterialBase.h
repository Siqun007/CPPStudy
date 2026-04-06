#pragma once
#include<iostream>
#include<string>
#include<vector>
namespace Render {

    using TextureList = std::vector<std::string>;
    enum class BlendMode {
        OPAQUE,
        MASK,
        TRANSLUCENT
    };

    class MaterialBase
    {
    private:
        std::string m_name;
        BlendMode m_blend_mode;
        TextureList m_texture_path;
    public:
        MaterialBase(const std::string& name);
        MaterialBase(const std::string& name, BlendMode& blend_mode);
        virtual ~MaterialBase();

        std::string GetMaterialName() const;
        void SetMaterialName(const std::string& name);

        BlendMode GetMaterialBlendMode() const;
        void SetMaterialBlendMode(BlendMode& blend_mode);

        TextureList GetTexturePath() const;
        void SetTexturePath(std::string& texture_path);
        void PrintAllTexturePath() const;

        virtual void PrintMaterialAllParams() = 0;
    };

}


