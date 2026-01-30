#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System::Collections { struct Hashtable; };
namespace mscorlib::System::Runtime::Serialization::Formatters::Binary { struct BinaryFormatter; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System { struct Object; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::Reflection { struct MethodInfo; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Reflection { struct MethodBase; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System::Runtime::Remoting::Messaging { struct IMethodReturnMessage; };
namespace mscorlib::System { struct MarshalByRefObject; };
namespace mscorlib::System::Runtime::Remoting::Messaging { struct IMethodCallMessage; };
namespace mscorlib::System::Runtime::Remoting { struct ObjRef; };
namespace mscorlib::System::Runtime::Remoting::Proxies { struct RealProxy; };
namespace mscorlib::System::Runtime::Remoting::Messaging { struct IMethodMessage; };
namespace mscorlib::System::Runtime::Serialization { struct SerializationInfo; };
#include "System_Runtime_Serialization_StreamingContext.h"
namespace mscorlib::System::Runtime::Serialization { struct StreamingContext; };
namespace mscorlib::System::Runtime::Remoting { struct ActivatedClientTypeEntry; };
namespace mscorlib::System::Runtime::Remoting { struct WellKnownClientTypeEntry; };
namespace mscorlib::System::Runtime::Remoting { struct Identity; };
namespace mscorlib::System::Runtime::Remoting { struct ClientIdentity; };
namespace mscorlib::System::Runtime::Remoting::Messaging { struct IMessageSink; };
namespace mscorlib::System::Runtime::Remoting { struct ClientActivatedIdentity; };
namespace mscorlib::System::Runtime::Remoting { struct ServerIdentity; };
#include "System_Runtime_Remoting_WellKnownObjectMode.h"
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace mscorlib::System { struct Exception; };
namespace mscorlib::System::Runtime::Remoting::Messaging { struct IMessage; };
namespace mscorlib::System::Reflection { struct ParameterInfo; };

namespace mscorlib::System::Runtime::Remoting
{
	struct RemotingServices : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			mscorlib::System::Collections::Hashtable* uri_hash;
			mscorlib::System::Runtime::Serialization::Formatters::Binary::BinaryFormatter* _serializationFormatter;
			mscorlib::System::Runtime::Serialization::Formatters::Binary::BinaryFormatter* _deserializationFormatter;
			mscorlib::System::String* app_id;
			mscorlib::System::Object* app_id_lock;
			int32_t next_id;
			mscorlib::System::Reflection::MethodInfo* FieldSetterMethod;
			mscorlib::System::Reflection::MethodInfo* FieldGetterMethod;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void _cctor();
		static mscorlib::System::Object* InternalExecute(mscorlib::System::Reflection::MethodBase* method, mscorlib::System::Object* obj, IL2CPP::Array<mscorlib::System::Object*>* parameters, IL2CPP::Array<mscorlib::System::Object*>& out_args);
		static mscorlib::System::Reflection::MethodBase* GetVirtualMethod(mscorlib::System::Type* type, mscorlib::System::Reflection::MethodBase* method);
		static bool IsTransparentProxy(mscorlib::System::Object* proxy);
		static mscorlib::System::Runtime::Remoting::Messaging::IMethodReturnMessage* InternalExecuteMessage(mscorlib::System::MarshalByRefObject* target, mscorlib::System::Runtime::Remoting::Messaging::IMethodCallMessage* reqMsg);
		static mscorlib::System::Object* Connect(mscorlib::System::Type* classToProxy, mscorlib::System::String* url);
		static mscorlib::System::Object* Connect(mscorlib::System::Type* classToProxy, mscorlib::System::String* url, mscorlib::System::Object* data);
		static mscorlib::System::Type* GetServerTypeForUri(mscorlib::System::String* URI);
		static mscorlib::System::Object* Unmarshal(mscorlib::System::Runtime::Remoting::ObjRef* objectRef);
		static mscorlib::System::Object* Unmarshal(mscorlib::System::Runtime::Remoting::ObjRef* objectRef, bool fRefine);
		static mscorlib::System::Runtime::Remoting::ObjRef* Marshal(mscorlib::System::MarshalByRefObject* Obj);
		static mscorlib::System::Runtime::Remoting::ObjRef* Marshal(mscorlib::System::MarshalByRefObject* Obj, mscorlib::System::String* ObjURI, mscorlib::System::Type* RequestedType);
		static mscorlib::System::String* NewUri();
		static mscorlib::System::Runtime::Remoting::Proxies::RealProxy* GetRealProxy(mscorlib::System::Object* proxy);
		static mscorlib::System::Reflection::MethodBase* GetMethodBaseFromMethodMessage(mscorlib::System::Runtime::Remoting::Messaging::IMethodMessage* msg);
		static mscorlib::System::Reflection::MethodBase* GetMethodBaseFromName(mscorlib::System::Type* type, mscorlib::System::String* methodName, IL2CPP::Array<mscorlib::System::Type*>* signature);
		static mscorlib::System::Reflection::MethodBase* FindInterfaceMethod(mscorlib::System::Type* type, mscorlib::System::String* methodName, IL2CPP::Array<mscorlib::System::Type*>* signature);
		static void GetObjectData(mscorlib::System::Object* obj, mscorlib::System::Runtime::Serialization::SerializationInfo* info, mscorlib::System::Runtime::Serialization::StreamingContext context);
		static bool IsOneWay(mscorlib::System::Reflection::MethodBase* method);
		static mscorlib::System::Object* CreateClientProxy(mscorlib::System::Runtime::Remoting::ActivatedClientTypeEntry* entry, IL2CPP::Array<mscorlib::System::Object*>* activationAttributes);
		static mscorlib::System::Object* CreateClientProxy(mscorlib::System::Type* objectType, mscorlib::System::String* url, IL2CPP::Array<mscorlib::System::Object*>* activationAttributes);
		static mscorlib::System::Object* CreateClientProxy(mscorlib::System::Runtime::Remoting::WellKnownClientTypeEntry* entry);
		static mscorlib::System::Object* CreateClientProxyForContextBound(mscorlib::System::Type* type, IL2CPP::Array<mscorlib::System::Object*>* activationAttributes);
		static mscorlib::System::Runtime::Remoting::Identity* GetIdentityForUri(mscorlib::System::String* uri);
		static mscorlib::System::String* RemoveAppNameFromUri(mscorlib::System::String* uri);
		static mscorlib::System::Runtime::Remoting::ClientIdentity* GetOrCreateClientIdentity(mscorlib::System::Runtime::Remoting::ObjRef* objRef, mscorlib::System::Type* proxyType, mscorlib::System::Object& clientProxy);
		static mscorlib::System::Runtime::Remoting::Messaging::IMessageSink* GetClientChannelSinkChain(mscorlib::System::String* url, mscorlib::System::Object* channelData, mscorlib::System::String& objectUri);
		static mscorlib::System::Runtime::Remoting::ClientActivatedIdentity* CreateContextBoundObjectIdentity(mscorlib::System::Type* objectType);
		static mscorlib::System::Runtime::Remoting::ClientActivatedIdentity* CreateClientActivatedServerIdentity(mscorlib::System::MarshalByRefObject* realObject, mscorlib::System::Type* objectType, mscorlib::System::String* objectUri);
		static mscorlib::System::Runtime::Remoting::ServerIdentity* CreateWellKnownServerIdentity(mscorlib::System::Type* objectType, mscorlib::System::String* objectUri, mscorlib::System::Runtime::Remoting::WellKnownObjectMode mode);
		static void RegisterServerIdentity(mscorlib::System::Runtime::Remoting::ServerIdentity* identity);
		static mscorlib::System::Object* GetProxyForRemoteObject(mscorlib::System::Runtime::Remoting::ObjRef* objref, mscorlib::System::Type* classToProxy);
		static mscorlib::System::Object* GetRemoteObject(mscorlib::System::Runtime::Remoting::ObjRef* objRef, mscorlib::System::Type* proxyType);
		static IL2CPP::Array<uint8_t>* SerializeCallData(mscorlib::System::Object* obj);
		static mscorlib::System::Object* DeserializeCallData(IL2CPP::Array<uint8_t>* array);
		static IL2CPP::Array<uint8_t>* SerializeExceptionData(mscorlib::System::Exception* ex);
		static void RegisterInternalChannels();
		static void DisposeIdentity(mscorlib::System::Runtime::Remoting::Identity* ident);
		static mscorlib::System::Runtime::Remoting::Identity* GetMessageTargetIdentity(mscorlib::System::Runtime::Remoting::Messaging::IMessage* msg);
		static void SetMessageTargetIdentity(mscorlib::System::Runtime::Remoting::Messaging::IMessage* msg, mscorlib::System::Runtime::Remoting::Identity* ident);
		static bool UpdateOutArgObject(mscorlib::System::Reflection::ParameterInfo* pi, mscorlib::System::Object* local, mscorlib::System::Object* remote);
		static mscorlib::System::String* GetNormalizedUri(mscorlib::System::String* uri);
	};
}

