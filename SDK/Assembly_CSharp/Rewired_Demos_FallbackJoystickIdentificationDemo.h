#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Rewired_Core::Rewired { struct Joystick; };
namespace System::System::Collections::Generic { template <typename T> struct Queue_1; };
namespace UnityEngine_IMGUIModule::UnityEngine { struct GUIStyle; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Rewired_Core::Rewired { struct ControllerStatusChangedEventArgs; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace Assembly_CSharp::Rewired::Demos
{
	struct FallbackJoystickIdentificationDemo : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool identifyRequired;
		System::System::Collections::Generic::Queue_1<Rewired_Core::Rewired::Joystick>* joysticksToIdentify;
		float nextInputAllowedTime;
		UnityEngine_IMGUIModule::UnityEngine::GUIStyle* style;
		struct StaticFields
		{
			float windowWidth;
			float windowHeight;
			float inputDelay;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void Awake();
		void JoystickConnected(Rewired_Core::Rewired::ControllerStatusChangedEventArgs* args);
		void JoystickDisconnected(Rewired_Core::Rewired::ControllerStatusChangedEventArgs* args);
		void IdentifyAllJoysticks();
		void SetInputDelay();
		void OnGUI();
		void DrawDialogWindow(int32_t windowId);
		void Reset();
		void _ctor();
	};
}

