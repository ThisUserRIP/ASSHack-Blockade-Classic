#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
namespace Assembly_CSharp::Rewired::Demos { struct DualShock4SpecialFeaturesExample_Touch; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace System::System::Collections::Generic { template <typename T> struct Queue_1; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace UnityEngine_IMGUIModule::UnityEngine { struct GUIStyle; };
namespace Rewired_Core::Rewired { struct Player; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Rewired_Core::Rewired::ControllerExtensions { struct IDualShock4Extension; };

namespace Assembly_CSharp::Rewired::Demos
{
	struct DualShock4SpecialFeaturesExample : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t playerId;
		UnityEngine_CoreModule::UnityEngine::Transform* touchpadTransform;
		UnityEngine_CoreModule::UnityEngine::GameObject* lightObject;
		UnityEngine_CoreModule::UnityEngine::Transform* accelerometerTransform;
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::Rewired::Demos::DualShock4SpecialFeaturesExample_Touch>* touches;
		System::System::Collections::Generic::Queue_1<Assembly_CSharp::Rewired::Demos::DualShock4SpecialFeaturesExample_Touch>* unusedTouches;
		bool isFlashing;
		UnityEngine_IMGUIModule::UnityEngine::GUIStyle* textStyle;
		struct StaticFields
		{
			int32_t maxTouches;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		Rewired_Core::Rewired::Player* get_player();
		void Awake();
		void Update();
		void OnGUI();
		void ResetOrientation();
		void SetRandomLightColor();
		void StartLightFlash();
		void StopLightFlash();
		Rewired_Core::Rewired::ControllerExtensions::IDualShock4Extension* GetFirstDS4(Rewired_Core::Rewired::Player* player);
		void InitializeTouchObjects();
		void HandleTouchpad(Rewired_Core::Rewired::ControllerExtensions::IDualShock4Extension* ds4);
		void _ctor();
	};
}

