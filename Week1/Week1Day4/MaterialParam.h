#pragma once
namespace Render {
	enum class ShadingModel {
		UNLIT,
		LIT,
		SKIN,
		HAIR
	};

	struct Color3 {
		float r = 1.0;
		float g = 1.0;
		float b = 1.0;
	};

	struct Vector3 {
		float x = 1.0;
		float y = 1.0;
		float z = 1.0;
	};

	class MaterialParam {
		Color3 base_color;
		float metallic;
		float roughness;
		float ao;
		Vector3 normal;
		ShadingModel shading_model;

	public:
		MaterialParam();
		MaterialParam(
			Color3 base_color,
			float metallic,
			float roughness,
			float ao,
			Vector3 normal,
			ShadingModel shading_model
		);

		void PrintMaterialParam() const;

	};
}
