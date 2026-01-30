#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_ConsoleKeyInfo.h"
namespace mscorlib::System { struct ConsoleKeyInfo; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace mscorlib::System
{
	struct IConsoleDriver
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::ConsoleKeyInfo ReadKey(bool intercept);
	};
}

