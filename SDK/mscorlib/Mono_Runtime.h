#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System { struct Exception; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace mscorlib::Mono
{
	struct Runtime : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static void mono_runtime_install_handlers();
		static void InstallSignalHandlers();
		static void mono_runtime_cleanup_handlers();
		static void RemoveSignalHandlers();
		static mscorlib::System::String* GetDisplayName();
		static mscorlib::System::String* GetNativeStackTrace(mscorlib::System::Exception* exception);
		static bool SetGCAllowSynchronousMajor(bool flag);
	};
}

