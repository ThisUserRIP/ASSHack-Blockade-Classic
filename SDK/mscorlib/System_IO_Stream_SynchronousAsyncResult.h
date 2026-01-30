#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_IO_Stream.h"
namespace mscorlib::System::IO { struct Stream; };
namespace mscorlib::System { struct Object; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System::Threading { struct ManualResetEvent; };
namespace mscorlib::System::Runtime::ExceptionServices { struct ExceptionDispatchInfo; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Exception; };
namespace mscorlib::System::Threading { struct WaitHandle; };
namespace mscorlib::System { struct IAsyncResult; };

namespace mscorlib::System::IO
{
	struct Stream_SynchronousAsyncResult : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Object* _stateObject;
		bool _isWrite;
		mscorlib::System::Threading::ManualResetEvent* _waitHandle;
		mscorlib::System::Runtime::ExceptionServices::ExceptionDispatchInfo* _exceptionInfo;
		bool _endXxxCalled;
		int32_t _bytesRead;
		void _ctor(int32_t bytesRead, mscorlib::System::Object* asyncStateObject);
		void _ctor(mscorlib::System::Object* asyncStateObject);
		void _ctor(mscorlib::System::Exception* ex, mscorlib::System::Object* asyncStateObject, bool isWrite);
		bool get_IsCompleted();
		mscorlib::System::Threading::WaitHandle* get_AsyncWaitHandle();
		mscorlib::System::Object* get_AsyncState();
		bool get_CompletedSynchronously();
		void ThrowIfError();
		static int32_t EndRead(mscorlib::System::IAsyncResult* asyncResult);
		static void EndWrite(mscorlib::System::IAsyncResult* asyncResult);
	};
}

