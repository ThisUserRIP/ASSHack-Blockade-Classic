#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace Assembly_CSharp::Rewired::UI::ControlMapper { struct UIImageHelper_State; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\UnityEngine_CoreModule\UnityEngine_Color.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color; };

namespace Assembly_CSharp::Rewired::UI::ControlMapper
{
	struct UIImageHelper : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::Rewired::UI::ControlMapper::UIImageHelper_State* enabledState;
		Assembly_CSharp::Rewired::UI::ControlMapper::UIImageHelper_State* disabledState;
		bool currentState;
		void SetEnabledState(bool newState);
		void SetEnabledStateColor(UnityEngine_CoreModule::UnityEngine::Color color);
		void SetDisabledStateColor(UnityEngine_CoreModule::UnityEngine::Color color);
		void Refresh();
		void _ctor();
	};
}

