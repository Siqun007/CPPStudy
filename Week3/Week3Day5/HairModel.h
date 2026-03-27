#pragma once
#include "ShadingModelBase.h"
namespace Render {
    class HairModel : public ShadingModelBase
    {
    public:
        HairModel();
        ~HairModel();
        float evaluateLight() const override;

    };

}