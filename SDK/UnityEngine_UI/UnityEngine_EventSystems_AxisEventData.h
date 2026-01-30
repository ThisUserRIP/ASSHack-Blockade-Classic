#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_EventSystems_BaseEventData.h"
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
#include "UnityEngine_EventSystems_MoveDirection.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_UI::UnityEngine::EventSystems { struct EventSystem; };

namespace UnityEngine_UI::UnityEngine::EventSystems
{
	struct AxisEventData : UnityEngine_UI::UnityEngine::EventSystems::BaseEventData
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Vector2 _moveVector_k__BackingField;
		UnityEngine_UI::UnityEngine::EventSystems::MoveDirection _moveDir_k__BackingField;
		UnityEngine_CoreModule::UnityEngine::Vector2 get_moveVector();
		void set_moveVector(UnityEngine_CoreModule::UnityEngine::Vector2 value);
		UnityEngine_UI::UnityEngine::EventSystems::MoveDirection get_moveDir();
		void set_moveDir(UnityEngine_UI::UnityEngine::EventSystems::MoveDirection value);
		void _ctor(UnityEngine_UI::UnityEngine::EventSystems::EventSystem* eventSystem);
	};
}

