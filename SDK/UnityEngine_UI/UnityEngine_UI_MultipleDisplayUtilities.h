#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace UnityEngine_UI::UnityEngine::EventSystems { struct PointerEventData; };
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"

namespace UnityEngine_UI::UnityEngine::UI
{
	struct MultipleDisplayUtilities : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static bool GetRelativeMousePositionForDrag(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* eventData, UnityEngine_CoreModule::UnityEngine::Vector2& position);
		static UnityEngine_CoreModule::UnityEngine::Vector2 GetMousePositionRelativeToMainDisplayResolution();
	};
}

