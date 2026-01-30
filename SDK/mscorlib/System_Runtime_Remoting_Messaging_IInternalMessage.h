#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
namespace mscorlib::System::Runtime::Remoting { struct Identity; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };

namespace mscorlib::System::Runtime::Remoting::Messaging
{
	struct IInternalMessage
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Runtime::Remoting::Identity* get_TargetIdentity();
		void set_TargetIdentity(mscorlib::System::Runtime::Remoting::Identity* value);
		mscorlib::System::String* get_Uri();
		void set_Uri(mscorlib::System::String* value);
	};
}

