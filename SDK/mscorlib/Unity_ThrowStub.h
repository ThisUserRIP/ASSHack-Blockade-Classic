#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_ObjectDisposedException.h"
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::Unity
{
	struct ThrowStub : mscorlib::System::ObjectDisposedException
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static void ThrowNotSupportedException();
	};
}

