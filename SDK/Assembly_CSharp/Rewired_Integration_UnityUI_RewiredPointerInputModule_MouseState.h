#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Rewired_Integration_UnityUI_RewiredPointerInputModule.h"
namespace Assembly_CSharp::Rewired::Integration::UnityUI { struct RewiredPointerInputModule; };
namespace Assembly_CSharp::Rewired::Integration::UnityUI { struct RewiredPointerInputModule_ButtonState; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\UnityEngine_UI\UnityEngine_EventSystems_PointerEventData_FramePressState.h"
namespace Assembly_CSharp::Rewired::Integration::UnityUI { struct PlayerPointerEventData; };

namespace Assembly_CSharp::Rewired::Integration::UnityUI
{
	struct RewiredPointerInputModule_MouseState : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::Rewired::Integration::UnityUI::RewiredPointerInputModule_ButtonState>* m_TrackedButtons;
		bool AnyPressesThisFrame();
		bool AnyReleasesThisFrame();
		Assembly_CSharp::Rewired::Integration::UnityUI::RewiredPointerInputModule_ButtonState* GetButtonState(int32_t button);
		void SetButtonState(int32_t button, UnityEngine_UI::UnityEngine::EventSystems::PointerEventData_FramePressState stateForMouseButton, Assembly_CSharp::Rewired::Integration::UnityUI::PlayerPointerEventData* data);
		void _ctor();
	};
}

