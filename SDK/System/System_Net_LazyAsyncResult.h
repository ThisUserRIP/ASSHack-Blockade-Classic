#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace System::System::Net { struct LazyAsyncResult_ThreadContext; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System { struct AsyncCallback; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Threading { struct WaitHandle; };
namespace mscorlib::System::Threading { struct ManualResetEvent; };
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };

namespace System::System::Net
{
	struct LazyAsyncResult : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Object* m_AsyncObject;
		mscorlib::System::Object* m_AsyncState;
		mscorlib::System::AsyncCallback* m_AsyncCallback;
		mscorlib::System::Object* m_Result;
		int32_t m_IntCompleted;
		bool m_UserEvent;
		mscorlib::System::Object* m_Event;
		struct StaticFields
		{
			System::Net::LazyAsyncResult_ThreadContext* t_ThreadContext;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static System::Net::LazyAsyncResult_ThreadContext* get_CurrentThreadContext();
		void _ctor(mscorlib::System::Object* myObject, mscorlib::System::Object* myState, mscorlib::System::AsyncCallback* myCallBack);
		mscorlib::System::Object* get_AsyncObject();
		mscorlib::System::Object* get_AsyncState();
		mscorlib::System::Threading::WaitHandle* get_AsyncWaitHandle();
		bool LazilyCreateEvent(mscorlib::System::Threading::ManualResetEvent& waitHandle);
		bool get_CompletedSynchronously();
		bool get_IsCompleted();
		bool get_InternalPeekCompleted();
		void ProtectedInvokeCallback(mscorlib::System::Object* result, intptr_t userToken);
		void InvokeCallback(mscorlib::System::Object* result);
		void Complete(intptr_t userToken);
		void WorkerThreadComplete(mscorlib::System::Object* state);
		void Cleanup();
		mscorlib::System::Object* InternalWaitForCompletion();
		mscorlib::System::Object* WaitForCompletion(bool snap);
	};
}

