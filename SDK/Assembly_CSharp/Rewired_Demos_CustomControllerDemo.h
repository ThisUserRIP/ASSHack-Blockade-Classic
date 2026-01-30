#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace Assembly_CSharp::Rewired::Demos { struct TouchJoystickExample; };
namespace Assembly_CSharp::Rewired::Demos { struct TouchButtonExample; };
namespace Rewired_Core::Rewired { struct CustomController; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::Rewired::Demos
{
	struct CustomControllerDemo : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t playerId;
		mscorlib::System::String* controllerTag;
		bool useUpdateCallbacks;
		int32_t buttonCount;
		int32_t axisCount;
		IL2CPP::Array<float>* axisValues;
		IL2CPP::Array<bool>* buttonValues;
		IL2CPP::Array<Assembly_CSharp::Rewired::Demos::TouchJoystickExample*>* joysticks;
		IL2CPP::Array<Assembly_CSharp::Rewired::Demos::TouchButtonExample*>* buttons;
		Rewired_Core::Rewired::CustomController* controller;
		bool initialized;
		void Awake();
		void Initialize();
		void Update();
		void OnInputSourceUpdate();
		void GetSourceAxisValues();
		void GetSourceButtonValues();
		void SetControllerAxisValues();
		void SetControllerButtonValues();
		float GetAxisValueCallback(int32_t index);
		bool GetButtonValueCallback(int32_t index);
		void _ctor();
	};
}

