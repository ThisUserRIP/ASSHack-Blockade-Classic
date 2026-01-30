#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\Microsoft_Win32_SafeHandles_SafeHandleZeroOrMinusOneIsInvalid.h"
namespace mscorlib::System::Threading { struct Thread; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace mscorlib::System::Diagnostics { struct StackTrace; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };

namespace System::System::Net::Sockets
{
	struct SafeSocketHandle : mscorlib::Microsoft::Win32::SafeHandles::SafeHandleZeroOrMinusOneIsInvalid
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::Threading::Thread>* blocking_threads;
		mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::Threading::Thread, mscorlib::System::Diagnostics::StackTrace>* threads_stacktraces;
		bool in_cleanup;
		struct StaticFields
		{
			bool THROW_ON_ABORT_RETRIES;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(intptr_t preexistingHandle, bool ownsHandle);
		bool ReleaseHandle();
		void RegisterForBlockingSyscall();
		void UnRegisterForBlockingSyscall();
		static void _cctor();
	};
}

