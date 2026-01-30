#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System::Runtime::Remoting::Activation { struct IActivator; };
namespace mscorlib::System::Runtime::Remoting::Messaging { struct IMessage; };
namespace mscorlib::System::Runtime::Remoting::Proxies { struct RemotingProxy; };
namespace mscorlib::System::Runtime::Remoting::Messaging { struct ConstructionCall; };
namespace mscorlib::System::Runtime::Remoting::Activation { struct IConstructionCallMessage; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System { struct Object; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace mscorlib::System::Runtime::Remoting::Activation
{
	struct ActivationServices : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			mscorlib::System::Runtime::Remoting::Activation::IActivator* _constructionActivator;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static mscorlib::System::Runtime::Remoting::Activation::IActivator* get_ConstructionActivator();
		static mscorlib::System::Runtime::Remoting::Messaging::IMessage* Activate(mscorlib::System::Runtime::Remoting::Proxies::RemotingProxy* proxy, mscorlib::System::Runtime::Remoting::Messaging::ConstructionCall* ctorCall);
		static mscorlib::System::Runtime::Remoting::Messaging::IMessage* RemoteActivate(mscorlib::System::Runtime::Remoting::Activation::IConstructionCallMessage* ctorCall);
		static mscorlib::System::Runtime::Remoting::Messaging::ConstructionCall* CreateConstructionCall(mscorlib::System::Type* type, mscorlib::System::String* activationUrl, IL2CPP::Array<mscorlib::System::Object*>* activationAttributes);
		static mscorlib::System::Runtime::Remoting::Messaging::IMessage* CreateInstanceFromMessage(mscorlib::System::Runtime::Remoting::Activation::IConstructionCallMessage* ctorCall);
		static mscorlib::System::Object* CreateProxyForType(mscorlib::System::Type* type);
		static mscorlib::System::Object* AllocateUninitializedClassInstance(mscorlib::System::Type* type);
		static void EnableProxyActivation(mscorlib::System::Type* type, bool enable);
	};
}

