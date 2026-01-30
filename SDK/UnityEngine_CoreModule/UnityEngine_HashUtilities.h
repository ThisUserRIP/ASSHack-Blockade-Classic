#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_CoreModule::UnityEngine { struct Hash128; };
namespace UnityEngine_CoreModule::UnityEngine { struct Hash128; };

namespace UnityEngine_CoreModule::UnityEngine
{
	struct HashUtilities : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static void AppendHash(UnityEngine_CoreModule::UnityEngine::Hash128& inHash, UnityEngine_CoreModule::UnityEngine::Hash128& outHash);
	};
}

