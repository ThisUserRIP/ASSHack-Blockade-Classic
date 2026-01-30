#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
namespace UnityEngine_CoreModule::UnityEngine::LowLevel { struct PlayerLoopSystem_UpdateFunction; };
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace UnityEngine_CoreModule::UnityEngine::LowLevel
{
	struct PlayerLoopSystemInternal
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Type* type;
		UnityEngine_CoreModule::UnityEngine::LowLevel::PlayerLoopSystem_UpdateFunction* updateDelegate;
		intptr_t updateFunction;
		intptr_t loopConditionFunction;
		int32_t numSubSystems;
	};
}

