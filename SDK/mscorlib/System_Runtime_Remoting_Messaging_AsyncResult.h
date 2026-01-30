#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Threading { struct WaitHandle; };
#include "System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System::Threading { struct ExecutionContext; };
#include "System_Int64.h"
namespace mscorlib::System { struct Int64; };
namespace mscorlib::System::Runtime::Remoting::Messaging { struct MonoMethodMessage; };
namespace mscorlib::System::Runtime::Remoting::Messaging { struct IMessageCtrl; };
namespace mscorlib::System::Runtime::Remoting::Messaging { struct IMessage; };
namespace mscorlib::System::Threading { struct WaitCallback; };
namespace mscorlib::System::Threading { struct ContextCallback; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Runtime::Remoting::Messaging { struct IMessageSink; };
namespace mscorlib::System::Threading { struct ThreadAbortException; };

namespace mscorlib::System::Runtime::Remoting::Messaging
{
	struct AsyncResult : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Object* async_state;
		mscorlib::System::Threading::WaitHandle* handle;
		mscorlib::System::Object* async_delegate;
		intptr_t data;
		mscorlib::System::Object* object_data;
		bool sync_completed;
		bool completed;
		bool endinvoke_called;
		mscorlib::System::Object* async_callback;
		mscorlib::System::Threading::ExecutionContext* current;
		mscorlib::System::Threading::ExecutionContext* original;
		int64_t add_time;
		mscorlib::System::Runtime::Remoting::Messaging::MonoMethodMessage* call_message;
		mscorlib::System::Runtime::Remoting::Messaging::IMessageCtrl* message_ctrl;
		mscorlib::System::Runtime::Remoting::Messaging::IMessage* reply_message;
		mscorlib::System::Threading::WaitCallback* orig_cb;
		struct StaticFields
		{
			mscorlib::System::Threading::ContextCallback* ccb;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		void _ctor(mscorlib::System::Threading::WaitCallback* cb, mscorlib::System::Object* state, bool capture_context);
		static void WaitCallback_Context(mscorlib::System::Object* state);
		mscorlib::System::Object* get_AsyncState();
		mscorlib::System::Threading::WaitHandle* get_AsyncWaitHandle();
		bool get_CompletedSynchronously();
		bool get_IsCompleted();
		bool get_EndInvokeCalled();
		void set_EndInvokeCalled(bool value);
		mscorlib::System::Object* get_AsyncDelegate();
		mscorlib::System::Runtime::Remoting::Messaging::IMessageSink* get_NextSink();
		mscorlib::System::Runtime::Remoting::Messaging::IMessageCtrl* AsyncProcessMessage(mscorlib::System::Runtime::Remoting::Messaging::IMessage* msg, mscorlib::System::Runtime::Remoting::Messaging::IMessageSink* replySink);
		mscorlib::System::Runtime::Remoting::Messaging::IMessage* GetReplyMessage();
		void SetMessageCtrl(mscorlib::System::Runtime::Remoting::Messaging::IMessageCtrl* mc);
		void SetCompletedSynchronously(bool completed);
		mscorlib::System::Runtime::Remoting::Messaging::IMessage* EndInvoke();
		mscorlib::System::Runtime::Remoting::Messaging::IMessage* SyncProcessMessage(mscorlib::System::Runtime::Remoting::Messaging::IMessage* msg);
		mscorlib::System::Runtime::Remoting::Messaging::MonoMethodMessage* get_CallMessage();
		void set_CallMessage(mscorlib::System::Runtime::Remoting::Messaging::MonoMethodMessage* value);
		void System_Threading_IThreadPoolWorkItem_ExecuteWorkItem();
		void System_Threading_IThreadPoolWorkItem_MarkAborted(mscorlib::System::Threading::ThreadAbortException* tae);
		mscorlib::System::Object* Invoke();
		static void _cctor();
		void __ctor_b__17_0(mscorlib::System::Object* _p0_);
	};
}

