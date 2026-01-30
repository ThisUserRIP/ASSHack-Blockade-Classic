#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_ObjectDisposedException.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System_Configuration::Unity
{
	struct ThrowStub : mscorlib::System::ObjectDisposedException
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static void ThrowNotSupportedException();
	};
}

