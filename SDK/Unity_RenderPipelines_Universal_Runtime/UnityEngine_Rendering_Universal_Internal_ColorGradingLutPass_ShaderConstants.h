#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "UnityEngine_Rendering_Universal_Internal_ColorGradingLutPass.h"
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal { struct ColorGradingLutPass; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal
{
	struct ColorGradingLutPass_ShaderConstants : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			int32_t _Lut_Params;
			int32_t _ColorBalance;
			int32_t _ColorFilter;
			int32_t _ChannelMixerRed;
			int32_t _ChannelMixerGreen;
			int32_t _ChannelMixerBlue;
			int32_t _HueSatCon;
			int32_t _Lift;
			int32_t _Gamma;
			int32_t _Gain;
			int32_t _Shadows;
			int32_t _Midtones;
			int32_t _Highlights;
			int32_t _ShaHiLimits;
			int32_t _SplitShadows;
			int32_t _SplitHighlights;
			int32_t _CurveMaster;
			int32_t _CurveRed;
			int32_t _CurveGreen;
			int32_t _CurveBlue;
			int32_t _CurveHueVsHue;
			int32_t _CurveHueVsSat;
			int32_t _CurveLumVsSat;
			int32_t _CurveSatVsSat;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void _cctor();
	};
}

