#pragma once
#include"ShadingModelBase.h"

namespace Render {
    class DefaultLitModel :public ShadingModelBase
    {
    public:
        DefaultLitModel();
        ~DefaultLitModel();
        float evaluateLight() override;
    private:


    };
}