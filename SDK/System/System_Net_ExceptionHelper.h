#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct NotImplementedException; };
namespace mscorlib::System { struct NotSupportedException; };
namespace System::System::Net { struct WebException; };

namespace System::System::Net
{
	struct ExceptionHelper : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static mscorlib::System::NotImplementedException* get_MethodNotImplementedException();
		static mscorlib::System::NotImplementedException* get_PropertyNotImplementedException();
		static mscorlib::System::NotSupportedException* get_PropertyNotSupportedException();
		static System::Net::WebException* get_RequestAbortedException();
	};
}

