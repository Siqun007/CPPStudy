#pragma once
#include"ShadingModelBase.h"

namespace Render {
    class CartoonModel :public ShadingModelBase
    {
    public:
        CartoonModel();
        ~CartoonModel();
        float evaluateLight() override;
    private:


    };
}