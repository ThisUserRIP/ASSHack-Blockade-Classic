#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_UIntPtr.h"
namespace mscorlib::System { struct UIntPtr; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Runtime::Remoting::Messaging { struct IMessageSink; };
namespace mscorlib::System::Runtime::Remoting::Contexts { struct IContextProperty; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace mscorlib::System { struct LocalDataStoreHolder; };
namespace mscorlib::System { struct LocalDataStoreMgr; };
namespace mscorlib::System::Runtime::Remoting::Contexts { struct DynamicPropertyCollection; };
namespace mscorlib::System::Runtime::Remoting::Contexts { struct ContextCallbackObject; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System::Runtime::Remoting::Contexts { struct IDynamicProperty; };
namespace mscorlib::System { struct ContextBoundObject; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Runtime::Remoting::Messaging { struct IMessage; };
namespace mscorlib::System { struct MarshalByRefObject; };
namespace mscorlib::System::Runtime::Remoting::Activation { struct IConstructionCallMessage; };
namespace mscorlib::System::Runtime::Remoting::Contexts { struct CrossContextDelegate; };
namespace mscorlib::System { struct LocalDataStore; };
namespace mscorlib::System { struct LocalDataStoreSlot; };

namespace mscorlib::System::Runtime::Remoting::Contexts
{
	struct Context : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t domain_id;
		int32_t context_id;
		uintptr_t static_data;
		uintptr_t data;
		mscorlib::System::Runtime::Remoting::Messaging::IMessageSink* server_context_sink_chain;
		mscorlib::System::Runtime::Remoting::Messaging::IMessageSink* client_context_sink_chain;
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::Runtime::Remoting::Contexts::IContextProperty>* context_properties;
		mscorlib::System::LocalDataStoreHolder* _localDataStore;
		mscorlib::System::Runtime::Remoting::Contexts::DynamicPropertyCollection* context_dynamic_properties;
		mscorlib::System::Runtime::Remoting::Contexts::ContextCallbackObject* callback_object;
		struct StaticFields
		{
			IL2CPP::Array<mscorlib::System::Object*>* local_slots;
			mscorlib::System::Runtime::Remoting::Messaging::IMessageSink* default_server_context_sink;
			int32_t global_count;
			mscorlib::System::LocalDataStoreMgr* _localDataStoreMgr;
			mscorlib::System::Runtime::Remoting::Contexts::DynamicPropertyCollection* global_dynamic_properties;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void RegisterContext(mscorlib::System::Runtime::Remoting::Contexts::Context* ctx);
		static void ReleaseContext(mscorlib::System::Runtime::Remoting::Contexts::Context* ctx);
		void _ctor();
		void Finalize();
		static mscorlib::System::Runtime::Remoting::Contexts::Context* get_DefaultContext();
		int32_t get_ContextID();
		IL2CPP::Array<mscorlib::System::Runtime::Remoting::Contexts::IContextProperty*>* get_ContextProperties();
		bool get_IsDefaultContext();
		bool get_NeedsContextSink();
		static bool RegisterDynamicProperty(mscorlib::System::Runtime::Remoting::Contexts::IDynamicProperty* prop, mscorlib::System::ContextBoundObject* obj, mscorlib::System::Runtime::Remoting::Contexts::Context* ctx);
		static bool UnregisterDynamicProperty(mscorlib::System::String* name, mscorlib::System::ContextBoundObject* obj, mscorlib::System::Runtime::Remoting::Contexts::Context* ctx);
		static mscorlib::System::Runtime::Remoting::Contexts::DynamicPropertyCollection* GetDynamicPropertyCollection(mscorlib::System::ContextBoundObject* obj, mscorlib::System::Runtime::Remoting::Contexts::Context* ctx);
		static void NotifyGlobalDynamicSinks(bool start, mscorlib::System::Runtime::Remoting::Messaging::IMessage* req_msg, bool client_site, bool async);
		static bool get_HasGlobalDynamicSinks();
		void NotifyDynamicSinks(bool start, mscorlib::System::Runtime::Remoting::Messaging::IMessage* req_msg, bool client_site, bool async);
		bool get_HasDynamicSinks();
		bool get_HasExitSinks();
		mscorlib::System::Runtime::Remoting::Contexts::IContextProperty* GetProperty(mscorlib::System::String* name);
		void SetProperty(mscorlib::System::Runtime::Remoting::Contexts::IContextProperty* prop);
		void Freeze();
		mscorlib::System::String* ToString();
		mscorlib::System::Runtime::Remoting::Messaging::IMessageSink* GetServerContextSinkChain();
		mscorlib::System::Runtime::Remoting::Messaging::IMessageSink* GetClientContextSinkChain();
		mscorlib::System::Runtime::Remoting::Messaging::IMessageSink* CreateServerObjectSinkChain(mscorlib::System::MarshalByRefObject* obj, bool forceInternalExecute);
		mscorlib::System::Runtime::Remoting::Messaging::IMessageSink* CreateEnvoySink(mscorlib::System::MarshalByRefObject* serverObject);
		static mscorlib::System::Runtime::Remoting::Contexts::Context* SwitchToContext(mscorlib::System::Runtime::Remoting::Contexts::Context* newContext);
		static mscorlib::System::Runtime::Remoting::Contexts::Context* CreateNewContext(mscorlib::System::Runtime::Remoting::Activation::IConstructionCallMessage* msg);
		void DoCallBack(mscorlib::System::Runtime::Remoting::Contexts::CrossContextDelegate* deleg);
		mscorlib::System::LocalDataStore* get_MyLocalStore();
		static mscorlib::System::LocalDataStoreSlot* AllocateDataSlot();
		static mscorlib::System::LocalDataStoreSlot* AllocateNamedDataSlot(mscorlib::System::String* name);
		static void FreeNamedDataSlot(mscorlib::System::String* name);
		static mscorlib::System::LocalDataStoreSlot* GetNamedDataSlot(mscorlib::System::String* name);
		static mscorlib::System::Object* GetData(mscorlib::System::LocalDataStoreSlot* slot);
		static void SetData(mscorlib::System::LocalDataStoreSlot* slot, mscorlib::System::Object* data);
		static void _cctor();
	};
}

