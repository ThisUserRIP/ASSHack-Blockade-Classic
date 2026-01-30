#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
namespace mscorlib::System { struct Exception; };
namespace mscorlib::System { struct Object; };

namespace mscorlib::System::Runtime::Remoting::Messaging
{
	struct IMethodReturnMessage
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Exception* get_Exception();
		IL2CPP::Array<mscorlib::System::Object*>* get_OutArgs();
		mscorlib::System::Object* get_ReturnValue();
	};
}

