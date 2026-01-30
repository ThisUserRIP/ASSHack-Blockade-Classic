#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_LowLevel_PlayerLoopSystem.h"
namespace UnityEngine_CoreModule::UnityEngine::LowLevel { struct PlayerLoopSystem; };
namespace UnityEngine_CoreModule::UnityEngine::LowLevel { struct PlayerLoopSystem_UpdateFunction; };
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
namespace mscorlib::System { struct String; };

namespace UnityEngine_CoreModule::UnityEngine::LowLevel
{
	struct PlayerLoopSystem
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Type* type;
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::LowLevel::PlayerLoopSystem>* subSystemList;
		UnityEngine_CoreModule::UnityEngine::LowLevel::PlayerLoopSystem_UpdateFunction* updateDelegate;
		intptr_t updateFunction;
		intptr_t loopConditionFunction;
		mscorlib::System::String* ToString();
	};
}

