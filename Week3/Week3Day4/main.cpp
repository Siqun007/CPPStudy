#include <iostream>
#include <vector>
#include "ShadingModelBase.h"
#include "DefaultLitModel.h"
#include "CartoonModel.h"

int main()
{

    std::cout << "==== Day 3 : 渲染管线初始化 ====\n\n";
	std::vector<Render::ShadingModelBase*> materials_list;
	Render::ShadingModelBase* material01 = new Render::DefaultLitModel();
    Render::ShadingModelBase* material02 = new Render::DefaultLitModel();
    Render::ShadingModelBase* material03 = new Render::CartoonModel();
    Render::ShadingModelBase* material04 = new Render::CartoonModel();
    materials_list.push_back(material01);
	materials_list.push_back(material02);
    materials_list.push_back(material03);
    materials_list.push_back(material04);

    for (Render::ShadingModelBase* material : materials_list)
    {
		float result = material->evaluateLight();
        std::cout << "返回的光照结果是" << result << std::endl;
    }

    std::cout << "--- 渲染结束，开始清理内存 ---\n";

    for (Render::ShadingModelBase* material : materials_list)
    {
		delete material;
    }
    
	materials_list.clear();

    return 0;
}