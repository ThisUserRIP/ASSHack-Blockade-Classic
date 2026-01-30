#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering { struct HableCurve_Segment; };
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering { struct HableCurve_Uniforms; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "UnityEngine_Rendering_HableCurve_DirectParams.h"
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering { struct HableCurve_DirectParams; };

namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering
{
	struct HableCurve : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		float _whitePoint_k__BackingField;
		float _inverseWhitePoint_k__BackingField;
		float _x0_k__BackingField;
		float _x1_k__BackingField;
		IL2CPP::Array<Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::HableCurve_Segment*>* segments;
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::HableCurve_Uniforms* uniforms;
		float get_whitePoint();
		void set_whitePoint(float value);
		float get_inverseWhitePoint();
		void set_inverseWhitePoint(float value);
		float get_x0();
		void set_x0(float value);
		float get_x1();
		void set_x1(float value);
		void _ctor();
		float Eval(float x);
		void Init(float toeStrength, float toeLength, float shoulderStrength, float shoulderLength, float shoulderAngle, float gamma);
		void InitSegments(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::HableCurve_DirectParams srcParams);
		void SolveAB(float& lnA, float& B, float x0, float y0, float m);
		void AsSlopeIntercept(float& m, float& b, float x0, float x1, float y0, float y1);
		float EvalDerivativeLinearGamma(float m, float b, float g, float x);
	};
}

