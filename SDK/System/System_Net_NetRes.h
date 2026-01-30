#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
#include "System_Net_WebExceptionStatus.h"

namespace System::System::Net
{
	struct NetRes : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static mscorlib::System::String* GetWebStatusString(mscorlib::System::String* Res, System::Net::WebExceptionStatus Status);
		static mscorlib::System::String* GetWebStatusString(System::Net::WebExceptionStatus Status);
	};
}

