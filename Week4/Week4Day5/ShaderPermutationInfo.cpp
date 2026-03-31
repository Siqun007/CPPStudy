#include<iostream>
#include<string>
#include "ShaderPermutationInfo.h"
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
        std::cout << "添加Feature：" << feature_name << std::endl;
    }

    void ShaderPermutationInfo::DeleteFeature(const std::string& feature_name)
    {
        if (m_features.empty())
        {
            std::cout << "feature已清空" << std::endl;
        }
        else
        {
            for (int i = 0; i < m_features.size(); i++)
            {
                if (m_features[i] == feature_name)
                {
                    m_features.erase(m_features.begin() + i);
                    std::cout << "已删除:" << feature_name << std::endl;
                }
            }
        }
    }

    bool ShaderPermutationInfo::HasFeature(const std::string& feature_name) const
    {
        for (auto& feature : m_features)
        {
            if (feature == feature_name)
            {
                return true;
            }
        }

        return false;
    }

    void ShaderPermutationInfo::FindFeatureByKeyWord(const std::string& key_word) const
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
        for (auto& feature : m_features)
        {
            std::cout << "feature:" << feature << std::endl;
        }
    }

    void ShaderPermutationInfo::SetParam(const std::string& param_name, const float& param)
    {
        m_params[param_name] = param;
        std::cout << "添加参数" << param_name << "：" << param << std::endl;
    }

    void ShaderPermutationInfo::GetParamValue(const std::string& param_name, float& out_value) const
    {
        auto pair = m_params.find(param_name);

        if (pair != m_params.end())
        {
            out_value = pair->second;
        }
        else
        {
            std::cout << "未找到参数： " << param_name << std::endl;
        }
    }

    void ShaderPermutationInfo::DeleteParam(const std::string& param_name)
    {
        m_params.erase(param_name);
        std::cout << "删除参数： " << param_name << std::endl;
    }

    bool ShaderPermutationInfo::HasParam(const std::string& param_name) const
    {
        for (auto& pair : m_params)
        {
            if (pair.first == param_name)
            {
                return true;
            }
        }
        return false;
    }

    void ShaderPermutationInfo::FindParamByKeyWord(const std::string& key_word) const
    {
        std::cout << "=== 按关键词筛选 Param ===" << std::endl;
        std::cout << "关键词: " << key_word << std::endl;
        bool found = false;
        for (auto& pair : m_params)
        {
            if (pair.first.find(key_word) != std::string::npos)
            {
                std::cout << "匹配到Param:" << pair.first << std::endl;
                found = true;
            }
        }

        if (!found)
        {
            std::cout << "未匹配到Param:" << key_word << std::endl;
        }
    }

    void ShaderPermutationInfo::PrintAllParam() const
    {
        for (auto& pair : m_params)
        {
            std::cout << pair.first << ": " << pair.second << std::endl;
        }
    }

}