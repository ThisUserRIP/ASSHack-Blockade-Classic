#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "UnityEngine_EventSystems_PointerInputModule.h"
namespace UnityEngine_UI::UnityEngine::EventSystems { struct PointerInputModule; };
#include "UnityEngine_EventSystems_PointerEventData_FramePressState.h"
namespace UnityEngine_UI::UnityEngine::EventSystems { struct PointerEventData; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace UnityEngine_UI::UnityEngine::EventSystems
{
	struct PointerInputModule_MouseButtonEventData : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_UI::UnityEngine::EventSystems::PointerEventData_FramePressState buttonState;
		UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* buttonData;
		bool PressedThisFrame();
		bool ReleasedThisFrame();
		void _ctor();
	};
}

