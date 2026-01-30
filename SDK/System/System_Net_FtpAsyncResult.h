#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace System::System::Net { struct FtpWebResponse; };
namespace mscorlib::System::Threading { struct ManualResetEvent; };
namespace mscorlib::System { struct Exception; };
namespace mscorlib::System { struct AsyncCallback; };
namespace mscorlib::System::IO { struct Stream; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Threading { struct WaitHandle; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace System::System::Net
{
	struct FtpAsyncResult : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System::Net::FtpWebResponse* response;
		mscorlib::System::Threading::ManualResetEvent* waitHandle;
		mscorlib::System::Exception* exception;
		mscorlib::System::AsyncCallback* callback;
		mscorlib::System::IO::Stream* stream;
		mscorlib::System::Object* state;
		bool completed;
		bool synch;
		mscorlib::System::Object* locker;
		void _ctor(mscorlib::System::AsyncCallback* callback, mscorlib::System::Object* state);
		mscorlib::System::Object* get_AsyncState();
		mscorlib::System::Threading::WaitHandle* get_AsyncWaitHandle();
		bool get_CompletedSynchronously();
		bool get_IsCompleted();
		bool get_GotException();
		mscorlib::System::Exception* get_Exception();
		System::Net::FtpWebResponse* get_Response();
		void set_Stream(mscorlib::System::IO::Stream* value);
		bool WaitUntilComplete(int32_t timeout, bool exitContext);
		void SetCompleted(bool synch, mscorlib::System::Exception* exc, System::Net::FtpWebResponse* response);
		void SetCompleted(bool synch, System::Net::FtpWebResponse* response);
		void SetCompleted(bool synch, mscorlib::System::Exception* exc);
		void DoCallback();
	};
}

