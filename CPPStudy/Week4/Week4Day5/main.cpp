#include"ShaderPermutationInfo.h"
#include<iostream>
int main() {
    std::cout << "==== Day 5: ShaderPermutationInfo 小工具 ====" << std::endl;

    Render::ShaderPermutationInfo shaderInfo;

    // 添加一些 feature
    shaderInfo.AddFeature("USE_NORMALMAP");
    shaderInfo.AddFeature("USE_EMISSIVE");
    shaderInfo.AddFeature("USE_CLEARCOAT");
    shaderInfo.AddFeature("USE_NORMALMAP"); // 故意重复添加

    //打印feature
    shaderInfo.PrintAllFeature();
    std::cout << "-------------------" << std::endl;
    // 按关键词筛选
    shaderInfo.FindFeatureByKeyWord("USE");
    std::cout << "-------------------" << std::endl;
    shaderInfo.FindFeatureByKeyWord("CLEAR");
    std::cout << "-------------------" << std::endl;
    shaderInfo.FindFeatureByKeyWord("TESSELLATION");
    std::cout << "-------------------" << std::endl;
    // 查询 feature
    if (shaderInfo.HasFeature("USE_EMISSIVE")) {
        std::cout << "找到feature:USE_EMISSIVE" << std::endl;
    }
    else
    {
        std::cout << "未找到feature:USE_EMISSIVE" << std::endl;
    }
    std::cout << "-------------------" << std::endl;
    // 删除测试
    shaderInfo.DeleteFeature("USE_NORMALMAP");

    std::cout << "-------------------" << std::endl;
    //打印feature
    shaderInfo.PrintAllFeature();
    std::cout << "-------------------" << std::endl;
}