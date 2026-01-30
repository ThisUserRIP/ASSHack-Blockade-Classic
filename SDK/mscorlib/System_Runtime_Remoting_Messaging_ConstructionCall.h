#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Runtime_Remoting_Messaging_MethodCall.h"
namespace mscorlib::System::Runtime::Remoting::Activation { struct IActivator; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Collections { struct IList; };
namespace mscorlib::System { struct String; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System::Runtime::Remoting::Proxies { struct RemotingProxy; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Runtime::Serialization { struct SerializationInfo; };
#include "System_Runtime_Serialization_StreamingContext.h"
namespace mscorlib::System::Runtime::Serialization { struct StreamingContext; };
namespace mscorlib::System::Collections { struct IDictionary; };

namespace mscorlib::System::Runtime::Remoting::Messaging
{
	struct ConstructionCall : mscorlib::System::Runtime::Remoting::Messaging::MethodCall
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Runtime::Remoting::Activation::IActivator* _activator;
		IL2CPP::Array<mscorlib::System::Object*>* _activationAttributes;
		mscorlib::System::Collections::IList* _contextProperties;
		mscorlib::System::Type* _activationType;
		mscorlib::System::String* _activationTypeName;
		bool _isContextOk;
		mscorlib::System::Runtime::Remoting::Proxies::RemotingProxy* _sourceProxy;
		void _ctor(mscorlib::System::Type* type);
		void _ctor(mscorlib::System::Runtime::Serialization::SerializationInfo* info, mscorlib::System::Runtime::Serialization::StreamingContext context);
		void InitDictionary();
		bool get_IsContextOk();
		void set_IsContextOk(bool value);
		mscorlib::System::Type* get_ActivationType();
		mscorlib::System::String* get_ActivationTypeName();
		mscorlib::System::Runtime::Remoting::Activation::IActivator* get_Activator();
		void set_Activator(mscorlib::System::Runtime::Remoting::Activation::IActivator* value);
		IL2CPP::Array<mscorlib::System::Object*>* get_CallSiteActivationAttributes();
		void SetActivationAttributes(IL2CPP::Array<mscorlib::System::Object*>* attributes);
		mscorlib::System::Collections::IList* get_ContextProperties();
		void InitMethodProperty(mscorlib::System::String* key, mscorlib::System::Object* value);
		void GetObjectData(mscorlib::System::Runtime::Serialization::SerializationInfo* info, mscorlib::System::Runtime::Serialization::StreamingContext context);
		mscorlib::System::Collections::IDictionary* get_Properties();
		mscorlib::System::Runtime::Remoting::Proxies::RemotingProxy* get_SourceProxy();
		void set_SourceProxy(mscorlib::System::Runtime::Remoting::Proxies::RemotingProxy* value);
	};
}

