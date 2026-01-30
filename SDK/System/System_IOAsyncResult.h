#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct AsyncCallback; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Threading { struct ManualResetEvent; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Threading { struct WaitHandle; };

namespace System::System
{
	struct IOAsyncResult : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::AsyncCallback* async_callback;
		mscorlib::System::Object* async_state;
		mscorlib::System::Threading::ManualResetEvent* wait_handle;
		bool completed_synchronously;
		bool completed;
		void _ctor(mscorlib::System::AsyncCallback* async_callback, mscorlib::System::Object* async_state);
		mscorlib::System::AsyncCallback* get_AsyncCallback();
		mscorlib::System::Object* get_AsyncState();
		mscorlib::System::Threading::WaitHandle* get_AsyncWaitHandle();
		bool get_CompletedSynchronously();
		void set_CompletedSynchronously(bool value);
		bool get_IsCompleted();
		void set_IsCompleted(bool value);
		void CompleteDisposed();
	};
}

