#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Rewired_ComponentControls_CustomControllerControl.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "Rewired_ComponentControls_TiltControl_TiltDirection.h"
namespace Rewired_Core::Rewired::ComponentControls::Data { struct CustomControllerElementTargetSetForFloat; };
namespace Rewired_Core::Rewired::Internal { struct StandaloneAxis2D; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
namespace mscorlib::System { template <typename TResult> struct Func_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Rewired_Core::Rewired { struct AxisCalibration; };
namespace Rewired_Core::Rewired { struct Axis2DCalibration; };

namespace Rewired_Core::Rewired::ComponentControls
{
	struct TiltControl : Rewired_Core::Rewired::ComponentControls::CustomControllerControl
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Rewired_Core::Rewired::ComponentControls::TiltControl_TiltDirection _allowedTiltDirections;
		Rewired_Core::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForFloat* _horizontalTiltCustomControllerElement;
		float _horizontalTiltLimit;
		float _horizontalRestAngle;
		Rewired_Core::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForFloat* _forwardTiltCustomControllerElement;
		float _forwardTiltLimit;
		float _forwardRestAngle;
		Rewired_Core::Rewired::Internal::StandaloneAxis2D* _axis2D;
		bool _useHAxis;
		bool _useFAxis;
		mscorlib::System::Func_1<UnityEngine_CoreModule::UnityEngine::Vector3>* _getAccelerationValue;
		struct StaticFields
		{
			float maxFullTiltAngle;
			float maxAngleOffset;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		Rewired_Core::Rewired::ComponentControls::TiltControl_TiltDirection get_axesToUse();
		void set_axesToUse(Rewired_Core::Rewired::ComponentControls::TiltControl_TiltDirection value);
		Rewired_Core::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForFloat* get_horizontalTiltCustomControllerElement();
		float get_horizontalTiltLimit();
		void set_horizontalTiltLimit(float value);
		float get_horizontalRestAngle();
		void set_horizontalRestAngle(float value);
		Rewired_Core::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForFloat* get_forwardTiltCustomControllerElement();
		float get_forwardTiltLimit();
		void set_forwardTiltLimit(float value);
		float get_forwardRestAngle();
		void set_forwardRestAngle(float value);
		Rewired_Core::Rewired::AxisCalibration* get_horizontalAxisCalibration();
		Rewired_Core::Rewired::AxisCalibration* get_verticalAxisCalibration();
		Rewired_Core::Rewired::Axis2DCalibration* get_deadZoneType();
		Rewired_Core::Rewired::Axis2DCalibration* get_axis2DCalibration();
		Rewired_Core::Rewired::Internal::StandaloneAxis2D* get_axis2D();
		UnityEngine_CoreModule::UnityEngine::Vector3 get_acceleration();
		void _ctor();
		void SetAccelerationSourceCallback(mscorlib::System::Func_1<UnityEngine_CoreModule::UnityEngine::Vector3>* callback);
		void SetRestOrientation();
		void OnValidate();
		bool OnInitialize();
		void OnUpdate();
		void OnCustomControllerUpdate();
		void ClearValue();
		void XNkgNKdNsBeFZMVNvSNLGjtafisj();
		void ploYCnqLevbEfSdLtgCWldMxtMz();
		void ERMBGygowlymgRrXdCjvwvhqOJSi(Rewired_Core::Rewired::ComponentControls::TiltControl_TiltDirection A_1);
	};
}

