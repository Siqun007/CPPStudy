#pragma once
#include<string>
namespace Render {
    class ShadingModelBase
    {
    public:
        //ShadingModelBase();
        ShadingModelBase(const std::string& name);
        virtual ~ShadingModelBase();
        std::string getShadingModelName() const;
        void setShadingModelName(const std::string& name);
        virtual float evaluateLight() = 0;

    private:
        std::string m_name;
    };
}