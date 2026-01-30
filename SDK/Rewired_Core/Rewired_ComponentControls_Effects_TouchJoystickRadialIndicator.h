#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
namespace UnityEngine_CoreModule::UnityEngine { struct RectTransform; };
namespace Rewired_Core::Rewired::ComponentControls::Effects { struct TouchJoystickAngleIndicator; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Rewired_Core::Rewired::ComponentControls::Effects
{
	struct TouchJoystickRadialIndicator : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool _scale;
		bool _preserveSpriteAspectRatio;
		float _scaleRatio;
		float _aspectRatioX;
		float _aspectRatioY;
		float _offset;
		UnityEngine_CoreModule::UnityEngine::RectTransform* GXRNQifCNNTKuKJSLZJvDIqWgvC;
		mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator>* KFClwhaHoBMIBHndVCVQviftGLUJ;
		struct StaticFields
		{
			UnityEngine_CoreModule::UnityEngine::Vector2 CJQOYtnTIZbXbogymNfebYBvrOb;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		bool get_scale();
		void set_scale(bool value);
		bool get_preserveSpriteAspectRatio();
		void set_preserveSpriteAspectRatio(bool value);
		float get_scaleRatio();
		void set_scaleRatio(float value);
		float get_aspectRatioX();
		void set_aspectRatioX(float value);
		float get_aspectRatioY();
		void set_aspectRatioY(float value);
		float get_offset();
		void set_offset(float value);
		UnityEngine_CoreModule::UnityEngine::RectTransform* get_rectTransform();
		void Rewired_Utils_Interfaces_IRegistrar_Rewired_ComponentControls_Effects_TouchJoystickAngleIndicator__Register(Rewired_Core::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator* A_1);
		void Rewired_Utils_Interfaces_IRegistrar_Rewired_ComponentControls_Effects_TouchJoystickAngleIndicator__Deregister(Rewired_Core::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator* A_1);
		void Update();
		void OnValidate();
		void OnEnable();
		void OnDestroy();
		void ramTMYgmxIBvzeJqUTjrtHzfnrNB();
		void bHisYokXtauwUkObhyRqTGxsRmy(Rewired_Core::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator* A_1);
		void FEXQmcgsIVfvGMLuLGRXIjWjIctl();
		void WUaDovJZBGYHkDbcPDajhYxFTHtM();
		void _ctor();
		static void _cctor();
	};
}

