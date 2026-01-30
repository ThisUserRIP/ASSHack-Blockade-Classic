#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_UI\UnityEngine_EventSystems_EventSystem.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::Rewired::Integration::UnityUI
{
	struct RewiredEventSystem : UnityEngine_UI::UnityEngine::EventSystems::EventSystem
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool _alwaysUpdate;
		bool get_alwaysUpdate();
		void set_alwaysUpdate(bool value);
		void Update();
		void _ctor();
	};
}

