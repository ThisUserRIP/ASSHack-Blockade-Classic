#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector4.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector4; };
#include "..\mscorlib\System_ValueTuple_3.h"
namespace mscorlib::System { template <typename T1, typename T2, typename T3> struct ValueTuple_3; };
#include "..\mscorlib\System_ValueTuple_2.h"
namespace mscorlib::System { template <typename T1, typename T2> struct ValueTuple_2; };
namespace UnityEngine_CoreModule::UnityEngine { struct Color; };
namespace UnityEngine_CoreModule::UnityEngine { struct Color; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "..\UnityEngine_CoreModule\UnityEngine_Color.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering
{
	struct ColorUtils : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			float s_LightMeterCalibrationConstant;
			float s_LensAttenuation;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static float get_lensImperfectionExposureScale();
		static float StandardIlluminantY(float x);
		static UnityEngine_CoreModule::UnityEngine::Vector3 CIExyToLMS(float x, float y);
		static UnityEngine_CoreModule::UnityEngine::Vector3 ColorBalanceToLMSCoeffs(float temperature, float tint);
		static mscorlib::System::ValueTuple_3<UnityEngine_CoreModule::UnityEngine::Vector4, UnityEngine_CoreModule::UnityEngine::Vector4, UnityEngine_CoreModule::UnityEngine::Vector4> PrepareShadowsMidtonesHighlights(UnityEngine_CoreModule::UnityEngine::Vector4& inShadows, UnityEngine_CoreModule::UnityEngine::Vector4& inMidtones, UnityEngine_CoreModule::UnityEngine::Vector4& inHighlights);
		static mscorlib::System::ValueTuple_3<UnityEngine_CoreModule::UnityEngine::Vector4, UnityEngine_CoreModule::UnityEngine::Vector4, UnityEngine_CoreModule::UnityEngine::Vector4> PrepareLiftGammaGain(UnityEngine_CoreModule::UnityEngine::Vector4& inLift, UnityEngine_CoreModule::UnityEngine::Vector4& inGamma, UnityEngine_CoreModule::UnityEngine::Vector4& inGain);
		static mscorlib::System::ValueTuple_2<UnityEngine_CoreModule::UnityEngine::Vector4, UnityEngine_CoreModule::UnityEngine::Vector4> PrepareSplitToning(UnityEngine_CoreModule::UnityEngine::Vector4& inShadows, UnityEngine_CoreModule::UnityEngine::Vector4& inHighlights, float balance);
		static float Luminance(UnityEngine_CoreModule::UnityEngine::Color& color);
		static float ComputeEV100(float aperture, float shutterSpeed, float ISO);
		static float ConvertEV100ToExposure(float EV100);
		static float ConvertExposureToEV100(float exposure);
		static float ComputeEV100FromAvgLuminance(float avgLuminance);
		static float ComputeISO(float aperture, float shutterSpeed, float targetEV100);
		static uint32_t ToHex(UnityEngine_CoreModule::UnityEngine::Color c);
		static UnityEngine_CoreModule::UnityEngine::Color ToRGBA(uint32_t hex);
		static void _cctor();
	};
}

