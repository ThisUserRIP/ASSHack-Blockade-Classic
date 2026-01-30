#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Doozy_Engine_Touchy_TouchInfo.h"
namespace Assembly_CSharp::Doozy::Engine::Touchy { struct TouchInfo; };
#include "..\UnityEngine_CoreModule\UnityEngine_Events_UnityEvent_1.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::Doozy::Engine::Touchy
{
	struct TouchInfoEvent : UnityEngine_CoreModule::UnityEngine::Events::UnityEvent_1<Assembly_CSharp::Doozy::Engine::Touchy::TouchInfo>
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor();
	};
}

