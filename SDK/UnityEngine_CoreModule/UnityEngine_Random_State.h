#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_Random.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Random_; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace UnityEngine_CoreModule::UnityEngine
{
	struct Random_State
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t s0;
		int32_t s1;
		int32_t s2;
		int32_t s3;
	};
}

