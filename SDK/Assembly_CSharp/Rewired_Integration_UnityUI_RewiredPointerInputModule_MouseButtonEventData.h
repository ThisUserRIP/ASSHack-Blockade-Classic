#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Rewired_Integration_UnityUI_RewiredPointerInputModule.h"
namespace Assembly_CSharp::Rewired::Integration::UnityUI { struct RewiredPointerInputModule; };
#include "..\UnityEngine_UI\UnityEngine_EventSystems_PointerEventData_FramePressState.h"
namespace Assembly_CSharp::Rewired::Integration::UnityUI { struct PlayerPointerEventData; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::Rewired::Integration::UnityUI
{
	struct RewiredPointerInputModule_MouseButtonEventData : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_UI::UnityEngine::EventSystems::PointerEventData_FramePressState buttonState;
		Assembly_CSharp::Rewired::Integration::UnityUI::PlayerPointerEventData* buttonData;
		bool PressedThisFrame();
		bool ReleasedThisFrame();
		void _ctor();
	};
}

