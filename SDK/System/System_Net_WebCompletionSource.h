#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace System::System::Net { struct WebCompletionSource_Result; };
namespace mscorlib::System::Threading::Tasks { template <typename TResult> struct TaskCompletionSource_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Exception; };
namespace mscorlib::System::Threading::Tasks { template <typename TResult> struct Task_1; };

namespace System::System::Net
{
	struct WebCompletionSource : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Threading::Tasks::TaskCompletionSource_1<System::Net::WebCompletionSource_Result>* completion;
		void _ctor();
		bool TrySetCompleted();
		bool TrySetCanceled();
		bool TrySetException(mscorlib::System::Exception* error);
		bool get_IsCompleted();
		void ThrowOnError();
		mscorlib::System::Threading::Tasks::Task_1<mscorlib::System::Boolean>* WaitForCompletion(bool throwOnError);
	};
}

