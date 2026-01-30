#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_Behaviour.h"
#include "..\UnityEngine_CoreModule\UnityEngine_Bounds.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Bounds; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace UnityEngine_Physics2DModule::UnityEngine
{
	struct Collider2D : UnityEngine_CoreModule::UnityEngine::Behaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Bounds get_bounds();
		void _ctor();
		void get_bounds_Injected(UnityEngine_CoreModule::UnityEngine::Bounds& ret);
	};
}

