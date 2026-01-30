#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Runtime_Remoting_Messaging_CADMessageBase.h"
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Runtime::Remoting::Messaging { struct CADArgHolder; };
namespace mscorlib::System::Runtime::Remoting::Messaging { struct IMessage; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Runtime::Remoting::Messaging { struct IMethodReturnMessage; };
namespace mscorlib::System::Collections { struct ArrayList; };
namespace mscorlib::System { struct Exception; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace mscorlib::System::Runtime::Remoting::Messaging
{
	struct CADMethodReturnMessage : mscorlib::System::Runtime::Remoting::Messaging::CADMessageBase
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Object* _returnValue;
		mscorlib::System::Runtime::Remoting::Messaging::CADArgHolder* _exception;
		IL2CPP::Array<mscorlib::System::Type*>* _sig;
		static mscorlib::System::Runtime::Remoting::Messaging::CADMethodReturnMessage* Create(mscorlib::System::Runtime::Remoting::Messaging::IMessage* callMsg);
		void _ctor(mscorlib::System::Runtime::Remoting::Messaging::IMethodReturnMessage* retMsg);
		mscorlib::System::Collections::ArrayList* GetArguments();
		IL2CPP::Array<mscorlib::System::Object*>* GetArgs(mscorlib::System::Collections::ArrayList* args);
		mscorlib::System::Object* GetReturnValue(mscorlib::System::Collections::ArrayList* args);
		mscorlib::System::Exception* GetException(mscorlib::System::Collections::ArrayList* args);
		int32_t get_PropertiesCount();
	};
}

