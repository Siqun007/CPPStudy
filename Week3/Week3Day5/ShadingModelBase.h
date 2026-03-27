#pragma once
#include<string>
namespace Render {
	class ShadingModelBase {
	private:
		const std::string m_name;

	public:
		ShadingModelBase(const std::string& name);
		virtual ~ShadingModelBase();
		void printShadingModelParam() const;
		virtual float evaluateLight() const = 0;
	};
}