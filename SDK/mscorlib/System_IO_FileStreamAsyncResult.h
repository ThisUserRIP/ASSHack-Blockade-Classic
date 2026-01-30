#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct Object; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System::Threading { struct ManualResetEvent; };
namespace mscorlib::System { struct AsyncCallback; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct IAsyncResult; };
namespace mscorlib::System::Threading { struct WaitHandle; };

namespace mscorlib::System::IO
{
	struct FileStreamAsyncResult : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Object* state;
		bool completed;
		mscorlib::System::Threading::ManualResetEvent* wh;
		mscorlib::System::AsyncCallback* cb;
		bool completedSynch;
		int32_t Count;
		int32_t OriginalCount;
		int32_t BytesRead;
		mscorlib::System::AsyncCallback* realcb;
		void _ctor(mscorlib::System::AsyncCallback* cb, mscorlib::System::Object* state);
		static void CBWrapper(mscorlib::System::IAsyncResult* ares);
		mscorlib::System::Object* get_AsyncState();
		bool get_CompletedSynchronously();
		mscorlib::System::Threading::WaitHandle* get_AsyncWaitHandle();
		bool get_IsCompleted();
	};
}

