#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_MarshalByRefObject.h"
#include "System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct AssemblyLoadEventHandler; };
namespace mscorlib::System { struct ResolveEventHandler; };
namespace mscorlib::System { struct EventHandler; };
namespace mscorlib::System { struct UnhandledExceptionEventHandler; };
namespace mscorlib::System::Runtime::ExceptionServices { struct FirstChanceExceptionEventArgs; };
namespace mscorlib::System { template <typename TEventArgs> struct EventHandler_1; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct AppDomainSetup; };
namespace mscorlib::System::Reflection { struct Assembly; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System::Security::Policy { struct Evidence; };
namespace mscorlib::System::Reflection { struct AssemblyName; };
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace mscorlib::System::Runtime::Remoting::Contexts { struct Context; };
namespace mscorlib::System::Reflection { struct MethodInfo; };
namespace mscorlib::System::Runtime::Remoting::Messaging { struct CADMethodCallMessage; };
namespace mscorlib::System::Runtime::Remoting::Messaging { struct CADMethodReturnMessage; };

namespace mscorlib::System
{
	struct AppDomain : mscorlib::System::MarshalByRefObject
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		intptr_t _mono_app_domain;
		mscorlib::System::Object* _evidence;
		mscorlib::System::Object* _granted;
		int32_t _principalPolicy;
		mscorlib::System::AssemblyLoadEventHandler* AssemblyLoad;
		mscorlib::System::ResolveEventHandler* AssemblyResolve;
		mscorlib::System::EventHandler* DomainUnload;
		mscorlib::System::EventHandler* ProcessExit;
		mscorlib::System::ResolveEventHandler* ResourceResolve;
		mscorlib::System::ResolveEventHandler* TypeResolve;
		mscorlib::System::UnhandledExceptionEventHandler* UnhandledException;
		mscorlib::System::EventHandler_1<mscorlib::System::Runtime::ExceptionServices::FirstChanceExceptionEventArgs>* FirstChanceException;
		mscorlib::System::Object* _domain_manager;
		mscorlib::System::ResolveEventHandler* ReflectionOnlyAssemblyResolve;
		mscorlib::System::Object* _activation;
		mscorlib::System::Object* _applicationIdentity;
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>* compatibility_switch;
		struct StaticFields
		{
			mscorlib::System::String* _process_guid;
			mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::Object>* type_resolve_in_progress;
			mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::Object>* assembly_resolve_in_progress;
			mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::Object>* assembly_resolve_in_progress_refonly;
			mscorlib::System::Object* _principal;
			mscorlib::System::AppDomain* default_domain;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		mscorlib::System::AppDomainSetup* getSetup();
		mscorlib::System::AppDomainSetup* get_SetupInformation();
		mscorlib::System::String* getFriendlyName();
		static mscorlib::System::AppDomain* getCurDomain();
		static mscorlib::System::AppDomain* get_CurrentDomain();
		IL2CPP::Array<mscorlib::System::Reflection::Assembly*>* GetAssemblies(bool refOnly);
		IL2CPP::Array<mscorlib::System::Reflection::Assembly*>* GetAssemblies();
		mscorlib::System::Object* GetData(mscorlib::System::String* name);
		mscorlib::System::Object* InitializeLifetimeService();
		mscorlib::System::Reflection::Assembly* LoadAssembly(mscorlib::System::String* assemblyRef, mscorlib::System::Security::Policy::Evidence* securityEvidence, bool refOnly);
		mscorlib::System::Reflection::Assembly* Load(mscorlib::System::Reflection::AssemblyName* assemblyRef);
		mscorlib::System::Reflection::Assembly* LoadSatellite(mscorlib::System::Reflection::AssemblyName* assemblyRef, bool throwOnError);
		mscorlib::System::Reflection::Assembly* Load(mscorlib::System::Reflection::AssemblyName* assemblyRef, mscorlib::System::Security::Policy::Evidence* assemblySecurity);
		mscorlib::System::Reflection::Assembly* Load(mscorlib::System::String* assemblyString);
		mscorlib::System::Reflection::Assembly* Load(mscorlib::System::String* assemblyString, mscorlib::System::Security::Policy::Evidence* assemblySecurity, bool refonly);
		mscorlib::System::Reflection::Assembly* Load(IL2CPP::Array<uint8_t>* rawAssembly);
		mscorlib::System::Reflection::Assembly* LoadAssemblyRaw(IL2CPP::Array<uint8_t>* rawAssembly, IL2CPP::Array<uint8_t>* rawSymbolStore, mscorlib::System::Security::Policy::Evidence* securityEvidence, bool refonly);
		mscorlib::System::Reflection::Assembly* Load(IL2CPP::Array<uint8_t>* rawAssembly, IL2CPP::Array<uint8_t>* rawSymbolStore, mscorlib::System::Security::Policy::Evidence* securityEvidence);
		mscorlib::System::Reflection::Assembly* Load(IL2CPP::Array<uint8_t>* rawAssembly, IL2CPP::Array<uint8_t>* rawSymbolStore, mscorlib::System::Security::Policy::Evidence* securityEvidence, bool refonly);
		static mscorlib::System::AppDomain* InternalSetDomainByID(int32_t domain_id);
		static mscorlib::System::AppDomain* InternalSetDomain(mscorlib::System::AppDomain* context);
		static void InternalPushDomainRefByID(int32_t domain_id);
		static void InternalPopDomainRef();
		static mscorlib::System::Runtime::Remoting::Contexts::Context* InternalSetContext(mscorlib::System::Runtime::Remoting::Contexts::Context* context);
		static mscorlib::System::Runtime::Remoting::Contexts::Context* InternalGetContext();
		static mscorlib::System::Runtime::Remoting::Contexts::Context* InternalGetDefaultContext();
		static mscorlib::System::String* InternalGetProcessGuid(mscorlib::System::String* newguid);
		static mscorlib::System::Object* InvokeInDomainByID(int32_t domain_id, mscorlib::System::Reflection::MethodInfo* method, mscorlib::System::Object* obj, IL2CPP::Array<mscorlib::System::Object*>* args);
		static mscorlib::System::String* GetProcessGuid();
		static bool InternalIsFinalizingForUnload(int32_t domain_id);
		bool IsFinalizingForUnload();
		int32_t getDomainID();
		static int32_t GetCurrentThreadId();
		mscorlib::System::String* ToString();
		void DoAssemblyLoad(mscorlib::System::Reflection::Assembly* assembly);
		mscorlib::System::Reflection::Assembly* DoAssemblyResolve(mscorlib::System::String* name, mscorlib::System::Reflection::Assembly* requestingAssembly, bool refonly);
		mscorlib::System::Reflection::Assembly* DoTypeResolve(mscorlib::System::Object* name_or_tb);
		mscorlib::System::Reflection::Assembly* DoResourceResolve(mscorlib::System::String* name, mscorlib::System::Reflection::Assembly* requesting);
		void DoDomainUnload();
		IL2CPP::Array<uint8_t>* GetMarshalledDomainObjRef();
		void ProcessMessageInDomain(IL2CPP::Array<uint8_t>* arrRequest, mscorlib::System::Runtime::Remoting::Messaging::CADMethodCallMessage* cadMsg, IL2CPP::Array<uint8_t>& arrResponse, mscorlib::System::Runtime::Remoting::Messaging::CADMethodReturnMessage& cadMrm);
		void add_DomainUnload(mscorlib::System::EventHandler* value);
		void remove_DomainUnload(mscorlib::System::EventHandler* value);
		void add_ProcessExit(mscorlib::System::EventHandler* value);
		void remove_ProcessExit(mscorlib::System::EventHandler* value);
		void add_UnhandledException(mscorlib::System::UnhandledExceptionEventHandler* value);
		void remove_UnhandledException(mscorlib::System::UnhandledExceptionEventHandler* value);
	};
}

