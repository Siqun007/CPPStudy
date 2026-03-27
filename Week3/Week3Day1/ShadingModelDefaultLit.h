#pragma once
#include "ShadingModelBase.h"

namespace Render {
    class ShadingModelDefaultLit :public ShadingModelBase
    {
    public:
        /*ShadingModelDefaultLit();*/
        ShadingModelDefaultLit(const std::string& name);
        ~ShadingModelDefaultLit();
        void RenderDefaultLit();
    private:

    };
}