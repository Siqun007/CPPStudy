#pragma once
#include<string>
namespace Render {
    class ShadingModelBase
    {
    public:
        //ShadingModelBase();
        ShadingModelBase(const std::string& name);
        ~ShadingModelBase();
        std::string getShadingModelName() const;
        void setShadingModelName(const std::string& name);

    private:
        std::string m_name;
    };
}