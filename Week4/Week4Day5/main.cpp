#include"ShaderPermutationInfo.h"
#include<iostream>
int main() {
    std::cout << "==== Day 5: ShaderPermutationInfo ====" << std::endl;

    Render::ShaderPermutationInfo shaderInfo;

    // 添加feature
    std::cout << "==================添加Feature Begin==================" << std::endl;
    shaderInfo.AddFeature("USE_NORMALMAP");
    shaderInfo.AddFeature("USE_EMISSIVE");
    shaderInfo.AddFeature("USE_CLEARCOAT");
    shaderInfo.AddFeature("USE_NORMALMAP");
    std::cout << "==================添加Feature End==================\n" << std::endl;

    // 添加param
    std::cout << "==================添加Param Begin==================" << std::endl;
    shaderInfo.SetParam("Metallic", 0.0f);
    shaderInfo.SetParam("Specular", 0.04f);
    shaderInfo.SetParam("Roughness", 0.5f);
    shaderInfo.SetParam("ao", 0.8f);
    shaderInfo.SetParam("opacity", 1.0f);
    std::cout << "==================添加Param End==================\n" << std::endl;

    // 打印feature
    std::cout << "==================打印Feature Begin==================" << std::endl;
    shaderInfo.PrintAllFeature();
    std::cout << "==================打印Feature End==================\n" << std::endl;

    // 打印Param
    std::cout << "==================打印Parma Begin==================" << std::endl;
    shaderInfo.PrintAllParam();
    std::cout << "==================打印Param End==================\n" << std::endl;

    //根据关键字查找feature
    std::cout << "==================根据关键字查找feature Begin==================" << std::endl;
    shaderInfo.FindFeatureByKeyWord("USE");
    shaderInfo.FindFeatureByKeyWord("CLEAR");
    shaderInfo.FindFeatureByKeyWord("TESSELLATION");
    std::cout << "==================根据关键字查找feature End==================\n" << std::endl;

    //根据关键字查找Param
    std::cout << "==================根据关键字查找Param Begin==================" << std::endl;
    shaderInfo.FindParamByKeyWord("ough");
    std::cout << "==================根据关键字查找Param End==================\n" << std::endl;

    //判断是否有feature
    std::cout << "==================判断是否有feature Begin==================" << std::endl;
    if (shaderInfo.HasFeature("USE_EMISSIVE")) {
        std::cout << "存在feature:USE_EMISSIVE" << std::endl;
    }
    else
    {
        std::cout << "不存在feature:USE_EMISSIVE" << std::endl;
    }
    std::cout << "==================判断是否有feature End==================\n" << std::endl;

    //判断是否有Param
    std::cout << "==================判断是否有Param Begin==================" << std::endl;
    if (shaderInfo.HasParam("opacity")) {
        std::cout << "存在Param:opacity" << std::endl;
    }
    else
    {
        std::cout << "不存在Param:opacity" << std::endl;
    }
    std::cout << "==================判断是否有Param End==================\n" << std::endl;


    //删除feature
    std::cout << "==================删除feature Begin==================" << std::endl;
    shaderInfo.DeleteFeature("USE_NORMALMAP");
    std::cout << "==================删除feature End==================\n" << std::endl;

    //删除Param
    std::cout << "==================删除feature Begin==================" << std::endl;
    shaderInfo.DeleteParam("ao");
    std::cout << "==================删除feature End==================\n" << std::endl;

    // 打印feature
    std::cout << "==================打印Feature Begin==================" << std::endl;
    shaderInfo.PrintAllFeature();
    std::cout << "==================打印Feature End==================\n" << std::endl;

    // 打印Param
    std::cout << "==================打印Param Begin==================" << std::endl;
    shaderInfo.PrintAllParam();
    std::cout << "==================打印Param End==================\n" << std::endl;

    return 0;
}