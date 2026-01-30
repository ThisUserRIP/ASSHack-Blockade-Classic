#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace UnityEngine_CoreModule::UnityEngine { struct Shader; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_CoreModule::UnityEngine { struct Material; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector4.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector4; };

namespace Unity_TextMeshPro::TMPro
{
	struct ShaderUtilities : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			int32_t ID_MainTex;
			int32_t ID_FaceTex;
			int32_t ID_FaceColor;
			int32_t ID_FaceDilate;
			int32_t ID_Shininess;
			int32_t ID_UnderlayColor;
			int32_t ID_UnderlayOffsetX;
			int32_t ID_UnderlayOffsetY;
			int32_t ID_UnderlayDilate;
			int32_t ID_UnderlaySoftness;
			int32_t ID_UnderlayOffset;
			int32_t ID_UnderlayIsoPerimeter;
			int32_t ID_WeightNormal;
			int32_t ID_WeightBold;
			int32_t ID_OutlineTex;
			int32_t ID_OutlineWidth;
			int32_t ID_OutlineSoftness;
			int32_t ID_OutlineColor;
			int32_t ID_Outline2Color;
			int32_t ID_Outline2Width;
			int32_t ID_Padding;
			int32_t ID_GradientScale;
			int32_t ID_ScaleX;
			int32_t ID_ScaleY;
			int32_t ID_PerspectiveFilter;
			int32_t ID_Sharpness;
			int32_t ID_TextureWidth;
			int32_t ID_TextureHeight;
			int32_t ID_BevelAmount;
			int32_t ID_GlowColor;
			int32_t ID_GlowOffset;
			int32_t ID_GlowPower;
			int32_t ID_GlowOuter;
			int32_t ID_GlowInner;
			int32_t ID_LightAngle;
			int32_t ID_EnvMap;
			int32_t ID_EnvMatrix;
			int32_t ID_EnvMatrixRotation;
			int32_t ID_MaskCoord;
			int32_t ID_ClipRect;
			int32_t ID_MaskSoftnessX;
			int32_t ID_MaskSoftnessY;
			int32_t ID_VertexOffsetX;
			int32_t ID_VertexOffsetY;
			int32_t ID_UseClipRect;
			int32_t ID_StencilID;
			int32_t ID_StencilOp;
			int32_t ID_StencilComp;
			int32_t ID_StencilReadMask;
			int32_t ID_StencilWriteMask;
			int32_t ID_ShaderFlags;
			int32_t ID_ScaleRatio_A;
			int32_t ID_ScaleRatio_B;
			int32_t ID_ScaleRatio_C;
			mscorlib::System::String* Keyword_Bevel;
			mscorlib::System::String* Keyword_Glow;
			mscorlib::System::String* Keyword_Underlay;
			mscorlib::System::String* Keyword_Ratios;
			mscorlib::System::String* Keyword_MASK_SOFT;
			mscorlib::System::String* Keyword_MASK_HARD;
			mscorlib::System::String* Keyword_MASK_TEX;
			mscorlib::System::String* Keyword_Outline;
			mscorlib::System::String* ShaderTag_ZTestMode;
			mscorlib::System::String* ShaderTag_CullMode;
			float m_clamp;
			bool isInitialized;
			UnityEngine_CoreModule::UnityEngine::Shader* k_ShaderRef_MobileSDF;
			UnityEngine_CoreModule::UnityEngine::Shader* k_ShaderRef_MobileBitmap;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static UnityEngine_CoreModule::UnityEngine::Shader* get_ShaderRef_MobileSDF();
		static UnityEngine_CoreModule::UnityEngine::Shader* get_ShaderRef_MobileBitmap();
		static void _cctor();
		static void GetShaderPropertyIDs();
		static void UpdateShaderRatios(UnityEngine_CoreModule::UnityEngine::Material* mat);
		static UnityEngine_CoreModule::UnityEngine::Vector4 GetFontExtent(UnityEngine_CoreModule::UnityEngine::Material* material);
		static bool IsMaskingEnabled(UnityEngine_CoreModule::UnityEngine::Material* material);
		static float GetPadding(UnityEngine_CoreModule::UnityEngine::Material* material, bool enableExtraPadding, bool isBold);
		static float GetPadding(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Material*>* materials, bool enableExtraPadding, bool isBold);
	};
}

