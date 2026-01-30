#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "UnityEngine_Rendering_Universal_Internal_PostProcessPass.h"
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal { struct PostProcessPass; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal
{
	struct PostProcessPass_ShaderConstants : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			int32_t _TempTarget;
			int32_t _TempTarget2;
			int32_t _StencilRef;
			int32_t _StencilMask;
			int32_t _FullCoCTexture;
			int32_t _HalfCoCTexture;
			int32_t _DofTexture;
			int32_t _CoCParams;
			int32_t _BokehKernel;
			int32_t _PongTexture;
			int32_t _PingTexture;
			int32_t _Metrics;
			int32_t _AreaTexture;
			int32_t _SearchTexture;
			int32_t _EdgeTexture;
			int32_t _BlendTexture;
			int32_t _ColorTexture;
			int32_t _Params;
			int32_t _SourceTexLowMip;
			int32_t _Bloom_Params;
			int32_t _Bloom_RGBM;
			int32_t _Bloom_Texture;
			int32_t _LensDirt_Texture;
			int32_t _LensDirt_Params;
			int32_t _LensDirt_Intensity;
			int32_t _Distortion_Params1;
			int32_t _Distortion_Params2;
			int32_t _Chroma_Params;
			int32_t _Vignette_Params1;
			int32_t _Vignette_Params2;
			int32_t _Lut_Params;
			int32_t _UserLut_Params;
			int32_t _InternalLut;
			int32_t _UserLut;
			int32_t _DownSampleScaleFactor;
			int32_t _FullscreenProjMat;
			IL2CPP::Array<int32_t>* _BloomMipUp;
			IL2CPP::Array<int32_t>* _BloomMipDown;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void _cctor();
	};
}

