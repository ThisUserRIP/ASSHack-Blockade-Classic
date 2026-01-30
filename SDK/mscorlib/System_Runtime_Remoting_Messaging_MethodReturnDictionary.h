#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Runtime_Remoting_Messaging_MessageDictionary.h"
namespace mscorlib::System { struct String; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Runtime::Remoting::Messaging { struct IMethodReturnMessage; };

namespace mscorlib::System::Runtime::Remoting::Messaging
{
	struct MethodReturnDictionary : mscorlib::System::Runtime::Remoting::Messaging::MessageDictionary
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			IL2CPP::Array<mscorlib::System::String*>* InternalReturnKeys;
			IL2CPP::Array<mscorlib::System::String*>* InternalExceptionKeys;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(mscorlib::System::Runtime::Remoting::Messaging::IMethodReturnMessage* message);
		static void _cctor();
	};
}

