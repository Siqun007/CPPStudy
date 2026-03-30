#include "ShaderPermutationInfo.h"
#include<iostream>
namespace Render {
	ShaderPermutationInfo::ShaderPermutationInfo()
	{
		std::cout << "[构造函数]ShaderPermutationInfo被创建" << std::endl;
	}
	ShaderPermutationInfo::~ShaderPermutationInfo()
	{
		std::cout << "[析构函数]ShaderPermutationInfo被销毁" << std::endl;
	}
	void ShaderPermutationInfo::AddFeature(const std::string& feature_name)
	{
		m_features.push_back(feature_name);
	}

	void ShaderPermutationInfo::DeleteFeature(std::string feature_name)
	{
		if (m_features.empty())
		{
			std::cout << "feature已清空" << std::endl;
		}
		else
		{
			for (int i = 0; i < m_features.size();i++) 
			{
				if (m_features[i] == feature_name)
				{
					m_features.erase(m_features.begin()+ i);
					std::cout << "已删除:" << feature_name << std::endl;
				}
			}
		}
	}

	bool ShaderPermutationInfo::HasFeature(std::string feature_name) const
	{
		for (auto& feature: m_features)
		{
			if (feature == feature_name)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		return false;
	}

	void ShaderPermutationInfo::FindFeatureByKeyWord(std::string key_word) const
	{
		std::cout << "=== 按关键词筛选 Feature ===" << std::endl;
		std::cout << "关键词: " << key_word << std::endl;
		bool found = false;
		for (auto& feature : m_features)
		{
			if (feature.find(key_word) != std::string::npos)
			{
				std::cout << "匹配到feature:" << feature << std::endl;
				found = true;
			}
		}

		if (!found)
		{
			std::cout << "未匹配到feature:" << key_word << std::endl;
		}
	}

	void ShaderPermutationInfo::PrintAllFeature() const
	{
		std::cout << "feature列表-------------"<< std::endl;
		for (auto& feature : m_features)
		{
			std::cout << "feature:" << feature << std::endl;
		}
		std::cout << "feature列表-------------" << std::endl;
	}

}