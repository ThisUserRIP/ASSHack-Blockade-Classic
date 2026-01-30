#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
#include "System_Net_HttpStatusCode.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace System::System::Net
{
	struct HttpStatusDescription : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static mscorlib::System::String* Get(System::Net::HttpStatusCode code);
		static mscorlib::System::String* Get(int32_t code);
	};
}

