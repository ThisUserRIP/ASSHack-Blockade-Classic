#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_IO_Stream_SynchronousAsyncResult.h"
namespace mscorlib::System::IO { struct Stream_SynchronousAsyncResult; };
namespace mscorlib::System::Threading { struct ManualResetEvent; };
namespace mscorlib::System { template <typename TResult> struct Func_1; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::System::IO
{
	struct Stream_SynchronousAsyncResult___c : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			mscorlib::System::IO::Stream_SynchronousAsyncResult___c* __9;
			mscorlib::System::Func_1<mscorlib::System::Threading::ManualResetEvent>* __9__12_0;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void _cctor();
		void _ctor();
		mscorlib::System::Threading::ManualResetEvent* _get_AsyncWaitHandle_b__12_0();
	};
}

