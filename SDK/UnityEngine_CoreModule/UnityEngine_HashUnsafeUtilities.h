#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
namespace UnityEngine_CoreModule::UnityEngine { struct Hash128; };
namespace UnityEngine_CoreModule::UnityEngine { struct Hash128; };

namespace UnityEngine_CoreModule::UnityEngine
{
	struct HashUnsafeUtilities : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static void ComputeHash128(void* data, uint64_t dataSize, uint64_t* hash1, uint64_t* hash2);
		static void ComputeHash128(void* data, uint64_t dataSize, UnityEngine_CoreModule::UnityEngine::Hash128* hash);
	};
}

