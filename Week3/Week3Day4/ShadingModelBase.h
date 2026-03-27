#pragma once
#include<string>
namespace Render {
    class ShadingModelBase
    {
    private:
        std::string m_name;


    public:
        ShadingModelBase(const std::string& name);

        virtual ~ShadingModelBase();

        std::string getShadingModelName() const;

        void setShadingModelName(const std::string& name);

        virtual float evaluateLight();
    };

}