#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Console.h"
namespace Assembly_CSharp { struct Console; };
namespace mscorlib::System { struct String; };
#include "..\UnityEngine_CoreModule\UnityEngine_LogType.h"

namespace Assembly_CSharp
{
	struct Console_Log
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* message;
		mscorlib::System::String* stackTrace;
		UnityEngine_CoreModule::UnityEngine::LogType type;
	};
}

