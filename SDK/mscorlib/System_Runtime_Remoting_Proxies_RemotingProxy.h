#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Runtime_Remoting_Proxies_RealProxy.h"
namespace mscorlib::System::Reflection { struct MethodInfo; };
namespace mscorlib::System::Runtime::Remoting::Messaging { struct IMessageSink; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System::Runtime::Remoting::Messaging { struct ConstructionCall; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Runtime::Remoting { struct ClientIdentity; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Runtime::Remoting::Messaging { struct IMessage; };
namespace mscorlib::System::Runtime::Remoting { struct Identity; };
namespace mscorlib::System::Runtime::Remoting::Messaging { struct IMethodMessage; };

namespace mscorlib::System::Runtime::Remoting::Proxies
{
	struct RemotingProxy : mscorlib::System::Runtime::Remoting::Proxies::RealProxy
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Runtime::Remoting::Messaging::IMessageSink* _sink;
		bool _hasEnvoySink;
		mscorlib::System::Runtime::Remoting::Messaging::ConstructionCall* _ctorCall;
		struct StaticFields
		{
			mscorlib::System::Reflection::MethodInfo* _cache_GetTypeMethod;
			mscorlib::System::Reflection::MethodInfo* _cache_GetHashCodeMethod;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(mscorlib::System::Type* type, mscorlib::System::Runtime::Remoting::ClientIdentity* identity);
		void _ctor(mscorlib::System::Type* type, mscorlib::System::String* activationUrl, IL2CPP::Array<mscorlib::System::Object*>* activationAttributes);
		mscorlib::System::Runtime::Remoting::Messaging::IMessage* Invoke(mscorlib::System::Runtime::Remoting::Messaging::IMessage* request);
		void AttachIdentity(mscorlib::System::Runtime::Remoting::Identity* identity);
		mscorlib::System::Runtime::Remoting::Messaging::IMessage* ActivateRemoteObject(mscorlib::System::Runtime::Remoting::Messaging::IMethodMessage* request);
		mscorlib::System::String* get_TypeName();
		bool CanCastTo(mscorlib::System::Type* fromType, mscorlib::System::Object* o);
		void Finalize();
		static void _cctor();
	};
}

