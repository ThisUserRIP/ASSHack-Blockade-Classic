#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "UnityEngine_Rendering_Universal_Internal_DeferredLights.h"
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal { struct DeferredLights; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal
{
	struct DeferredLights_ShaderConstants : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			int32_t _LitStencilRef;
			int32_t _LitStencilReadMask;
			int32_t _LitStencilWriteMask;
			int32_t _SimpleLitStencilRef;
			int32_t _SimpleLitStencilReadMask;
			int32_t _SimpleLitStencilWriteMask;
			int32_t _StencilRef;
			int32_t _StencilReadMask;
			int32_t _StencilWriteMask;
			int32_t _LitPunctualStencilRef;
			int32_t _LitPunctualStencilReadMask;
			int32_t _LitPunctualStencilWriteMask;
			int32_t _SimpleLitPunctualStencilRef;
			int32_t _SimpleLitPunctualStencilReadMask;
			int32_t _SimpleLitPunctualStencilWriteMask;
			int32_t _LitDirStencilRef;
			int32_t _LitDirStencilReadMask;
			int32_t _LitDirStencilWriteMask;
			int32_t _SimpleLitDirStencilRef;
			int32_t _SimpleLitDirStencilReadMask;
			int32_t _SimpleLitDirStencilWriteMask;
			int32_t _ClearStencilRef;
			int32_t _ClearStencilReadMask;
			int32_t _ClearStencilWriteMask;
			int32_t UDepthRanges;
			int32_t _DepthRanges;
			int32_t _DownsamplingWidth;
			int32_t _DownsamplingHeight;
			int32_t _SourceShiftX;
			int32_t _SourceShiftY;
			int32_t _TileShiftX;
			int32_t _TileShiftY;
			int32_t _tileXCount;
			int32_t _DepthRangeOffset;
			int32_t _BitmaskTex;
			int32_t UTileList;
			int32_t _TileList;
			int32_t UPunctualLightBuffer;
			int32_t _PunctualLightBuffer;
			int32_t URelLightList;
			int32_t _RelLightList;
			int32_t _TilePixelWidth;
			int32_t _TilePixelHeight;
			int32_t _InstanceOffset;
			int32_t _DepthTex;
			int32_t _DepthTexSize;
			int32_t _ScreenSize;
			int32_t _ScreenToWorld;
			int32_t _unproject0;
			int32_t _unproject1;
			int32_t _MainLightPosition;
			int32_t _MainLightColor;
			int32_t _SpotLightScale;
			int32_t _SpotLightBias;
			int32_t _SpotLightGuard;
			int32_t _LightPosWS;
			int32_t _LightColor;
			int32_t _LightAttenuation;
			int32_t _LightOcclusionProbInfo;
			int32_t _LightDirection;
			int32_t _LightFlags;
			int32_t _ShadowLightIndex;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void _cctor();
	};
}

