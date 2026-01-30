#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal
{
	struct ShaderKeywordStrings : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			mscorlib::System::String* MainLightShadows;
			mscorlib::System::String* MainLightShadowCascades;
			mscorlib::System::String* AdditionalLightsVertex;
			mscorlib::System::String* AdditionalLightsPixel;
			mscorlib::System::String* AdditionalLightShadows;
			mscorlib::System::String* SoftShadows;
			mscorlib::System::String* MixedLightingSubtractive;
			mscorlib::System::String* LightmapShadowMixing;
			mscorlib::System::String* ShadowsShadowMask;
			mscorlib::System::String* DepthNoMsaa;
			mscorlib::System::String* DepthMsaa2;
			mscorlib::System::String* DepthMsaa4;
			mscorlib::System::String* DepthMsaa8;
			mscorlib::System::String* LinearToSRGBConversion;
			mscorlib::System::String* SmaaLow;
			mscorlib::System::String* SmaaMedium;
			mscorlib::System::String* SmaaHigh;
			mscorlib::System::String* PaniniGeneric;
			mscorlib::System::String* PaniniUnitDistance;
			mscorlib::System::String* BloomLQ;
			mscorlib::System::String* BloomHQ;
			mscorlib::System::String* BloomLQDirt;
			mscorlib::System::String* BloomHQDirt;
			mscorlib::System::String* UseRGBM;
			mscorlib::System::String* Distortion;
			mscorlib::System::String* ChromaticAberration;
			mscorlib::System::String* HDRGrading;
			mscorlib::System::String* TonemapACES;
			mscorlib::System::String* TonemapNeutral;
			mscorlib::System::String* FilmGrain;
			mscorlib::System::String* Fxaa;
			mscorlib::System::String* Dithering;
			mscorlib::System::String* ScreenSpaceOcclusion;
			mscorlib::System::String* HighQualitySampling;
			mscorlib::System::String* DOWNSAMPLING_SIZE_2;
			mscorlib::System::String* DOWNSAMPLING_SIZE_4;
			mscorlib::System::String* DOWNSAMPLING_SIZE_8;
			mscorlib::System::String* DOWNSAMPLING_SIZE_16;
			mscorlib::System::String* _SPOT;
			mscorlib::System::String* _DIRECTIONAL;
			mscorlib::System::String* _POINT;
			mscorlib::System::String* _DEFERRED_ADDITIONAL_LIGHT_SHADOWS;
			mscorlib::System::String* _GBUFFER_NORMALS_OCT;
			mscorlib::System::String* _DEFERRED_SUBTRACTIVE_LIGHTING;
			mscorlib::System::String* LIGHTMAP_ON;
			mscorlib::System::String* _ALPHATEST_ON;
			mscorlib::System::String* DIRLIGHTMAP_COMBINED;
			mscorlib::System::String* _DETAIL_MULX2;
			mscorlib::System::String* _DETAIL_SCALED;
			mscorlib::System::String* _CLEARCOAT;
			mscorlib::System::String* _CLEARCOATMAP;
			mscorlib::System::String* UseDrawProcedural;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void _cctor();
	};
}

