#pragma once
#include<vector>
#include<string>
#include<unordered_map>
namespace Render {
	class ShaderPermutationInfo
	{
	private:
		std::vector<std::string>m_features;
		std::unordered_map<std::string, float>m_params;
	public:
		ShaderPermutationInfo();
		~ShaderPermutationInfo();

		// 添加一个 feature
		// 删除一个 feature
		// 判断某个 feature 是否存在
		// 按关键词筛选 feature
		void AddFeature(const std::string& feature_name);
		void DeleteFeature(const std::string feature_name);
		bool HasFeature(const std::string feature_name) const;
		void FindFeatureByKeyWord(const std::string key_word) const;
		void PrintAllFeature() const;

		// 添加一个 param
		// 删除一个 param
		// 判断某个 param 是否存在
		// 按关键词筛选 param
		void AddParam();
		void DeleteParam();
		bool HasParam() const;
		void FindParamByKeyWord() const;

	};
}
