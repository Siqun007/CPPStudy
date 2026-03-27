#pragma once
#include "ShadingModelBase.h"
namespace Render {
    class ClothModel : public ShadingModelBase
    {
    public:
        ClothModel();
        ~ClothModel();
        float evaluateLight() const override;

    };

}