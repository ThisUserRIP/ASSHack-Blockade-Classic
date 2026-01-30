#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_IOOperation.h"
namespace System::System { struct IOAsyncCallback; };
namespace System::System { struct IOAsyncResult; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Threading { struct ThreadAbortException; };

namespace System::System
{
	struct IOSelectorJob : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System::IOOperation operation;
		System::IOAsyncCallback* callback;
		System::IOAsyncResult* state;
		void _ctor(System::IOOperation operation, System::IOAsyncCallback* callback, System::IOAsyncResult* state);
		void System_Threading_IThreadPoolWorkItem_ExecuteWorkItem();
		void System_Threading_IThreadPoolWorkItem_MarkAborted(mscorlib::System::Threading::ThreadAbortException* tae);
		void MarkDisposed();
	};
}

