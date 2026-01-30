#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System::Threading { struct SynchronizationContext; };
namespace mscorlib::System::Runtime::Remoting::Messaging { struct LogicalCallContext; };
namespace mscorlib::System::Runtime::Remoting::Messaging { struct IllogicalCallContext; };
#include "System_Threading_ExecutionContext_Flags.h"
namespace mscorlib::System::Threading { struct IAsyncLocal; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Threading { struct ContextCallback; };
namespace mscorlib::System::Threading { struct ExecutionContextSwitcher; };
namespace mscorlib::System::Threading { struct ExecutionContextSwitcher; };
namespace mscorlib::System::Threading { struct Thread; };
#include "System_Threading_ExecutionContextSwitcher.h"
#include "System_Threading_StackCrawlMark.h"
#include "System_Threading_ExecutionContext_CaptureOptions.h"
namespace mscorlib::System::Runtime::Serialization { struct SerializationInfo; };
#include "System_Runtime_Serialization_StreamingContext.h"
namespace mscorlib::System::Runtime::Serialization { struct StreamingContext; };

namespace mscorlib::System::Threading
{
	struct ExecutionContext : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Threading::SynchronizationContext* _syncContext;
		mscorlib::System::Threading::SynchronizationContext* _syncContextNoFlow;
		mscorlib::System::Runtime::Remoting::Messaging::LogicalCallContext* _logicalCallContext;
		mscorlib::System::Runtime::Remoting::Messaging::IllogicalCallContext* _illogicalCallContext;
		mscorlib::System::Threading::ExecutionContext_Flags _flags;
		mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::Threading::IAsyncLocal, mscorlib::System::Object>* _localValues;
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::Threading::IAsyncLocal>* _localChangeNotifications;
		struct StaticFields
		{
			mscorlib::System::Threading::ExecutionContext* s_dummyDefaultEC;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		bool get_isNewCapture();
		void set_isNewCapture(bool value);
		bool get_isFlowSuppressed();
		void set_isFlowSuppressed(bool value);
		static mscorlib::System::Threading::ExecutionContext* get_PreAllocatedDefault();
		bool get_IsPreAllocatedDefault();
		void _ctor();
		void _ctor(bool isPreAllocatedDefault);
		static mscorlib::System::Object* GetLocalValue(mscorlib::System::Threading::IAsyncLocal* local);
		static void SetLocalValue(mscorlib::System::Threading::IAsyncLocal* local, mscorlib::System::Object* newValue, bool needChangeNotifications);
		static void OnAsyncLocalContextChanged(mscorlib::System::Threading::ExecutionContext* previous, mscorlib::System::Threading::ExecutionContext* current);
		mscorlib::System::Runtime::Remoting::Messaging::LogicalCallContext* get_LogicalCallContext();
		void set_LogicalCallContext(mscorlib::System::Runtime::Remoting::Messaging::LogicalCallContext* value);
		mscorlib::System::Runtime::Remoting::Messaging::IllogicalCallContext* get_IllogicalCallContext();
		void set_IllogicalCallContext(mscorlib::System::Runtime::Remoting::Messaging::IllogicalCallContext* value);
		mscorlib::System::Threading::SynchronizationContext* get_SynchronizationContext();
		void set_SynchronizationContext(mscorlib::System::Threading::SynchronizationContext* value);
		mscorlib::System::Threading::SynchronizationContext* get_SynchronizationContextNoFlow();
		void set_SynchronizationContextNoFlow(mscorlib::System::Threading::SynchronizationContext* value);
		void Dispose();
		static void Run(mscorlib::System::Threading::ExecutionContext* executionContext, mscorlib::System::Threading::ContextCallback* callback, mscorlib::System::Object* state);
		static void Run(mscorlib::System::Threading::ExecutionContext* executionContext, mscorlib::System::Threading::ContextCallback* callback, mscorlib::System::Object* state, bool preserveSyncCtx);
		static void RunInternal(mscorlib::System::Threading::ExecutionContext* executionContext, mscorlib::System::Threading::ContextCallback* callback, mscorlib::System::Object* state, bool preserveSyncCtx);
		static void EstablishCopyOnWriteScope(mscorlib::System::Threading::ExecutionContextSwitcher& ecsw);
		static void EstablishCopyOnWriteScope(mscorlib::System::Threading::Thread* currentThread, bool knownNullWindowsIdentity, mscorlib::System::Threading::ExecutionContextSwitcher& ecsw);
		static mscorlib::System::Threading::ExecutionContextSwitcher SetExecutionContext(mscorlib::System::Threading::ExecutionContext* executionContext, bool preserveSyncCtx);
		mscorlib::System::Threading::ExecutionContext* CreateCopy();
		mscorlib::System::Threading::ExecutionContext* CreateMutableCopy();
		static bool IsFlowSuppressed();
		static mscorlib::System::Threading::ExecutionContext* Capture();
		static mscorlib::System::Threading::ExecutionContext* FastCapture();
		static mscorlib::System::Threading::ExecutionContext* Capture(mscorlib::System::Threading::StackCrawlMark& stackMark, mscorlib::System::Threading::ExecutionContext_CaptureOptions options);
		void GetObjectData(mscorlib::System::Runtime::Serialization::SerializationInfo* info, mscorlib::System::Runtime::Serialization::StreamingContext context);
		void _ctor(mscorlib::System::Runtime::Serialization::SerializationInfo* info, mscorlib::System::Runtime::Serialization::StreamingContext context);
		bool IsDefaultFTContext(bool ignoreSyncCtx);
		static void _cctor();
	};
}

