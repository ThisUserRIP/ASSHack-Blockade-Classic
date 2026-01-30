#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Runtime_Remoting_Messaging_MethodResponse.h"
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Runtime::Remoting::Messaging { struct LogicalCallContext; };
namespace mscorlib::System::Runtime::Remoting::Messaging { struct IMethodCallMessage; };
namespace mscorlib::System { struct Exception; };
namespace mscorlib::System::Runtime::Serialization { struct SerializationInfo; };
#include "System_Runtime_Serialization_StreamingContext.h"
namespace mscorlib::System::Runtime::Serialization { struct StreamingContext; };
namespace mscorlib::System::Collections { struct IDictionary; };

namespace mscorlib::System::Runtime::Remoting::Messaging
{
	struct ConstructionResponse : mscorlib::System::Runtime::Remoting::Messaging::MethodResponse
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor(mscorlib::System::Object* resultObject, mscorlib::System::Runtime::Remoting::Messaging::LogicalCallContext* callCtx, mscorlib::System::Runtime::Remoting::Messaging::IMethodCallMessage* msg);
		void _ctor(mscorlib::System::Exception* e, mscorlib::System::Runtime::Remoting::Messaging::IMethodCallMessage* msg);
		void _ctor(mscorlib::System::Runtime::Serialization::SerializationInfo* info, mscorlib::System::Runtime::Serialization::StreamingContext context);
		mscorlib::System::Collections::IDictionary* get_Properties();
	};
}

