#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Runtime_Remoting_Messaging_CADMessageBase.h"
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Runtime::Remoting::Messaging { struct IMessage; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Runtime::Remoting::Messaging { struct IMethodCallMessage; };
namespace mscorlib::System::Collections { struct ArrayList; };
namespace mscorlib::System { struct Object; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace mscorlib::System::Runtime::Remoting::Messaging
{
	struct CADMethodCallMessage : mscorlib::System::Runtime::Remoting::Messaging::CADMessageBase
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* _uri;
		mscorlib::System::String* get_Uri();
		static mscorlib::System::Runtime::Remoting::Messaging::CADMethodCallMessage* Create(mscorlib::System::Runtime::Remoting::Messaging::IMessage* callMsg);
		void _ctor(mscorlib::System::Runtime::Remoting::Messaging::IMethodCallMessage* callMsg);
		mscorlib::System::Collections::ArrayList* GetArguments();
		IL2CPP::Array<mscorlib::System::Object*>* GetArgs(mscorlib::System::Collections::ArrayList* args);
		int32_t get_PropertiesCount();
	};
}

