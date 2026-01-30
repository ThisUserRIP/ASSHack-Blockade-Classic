#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Threading_ReaderWriterLockSlim.h"
namespace System_Core::System::Threading { struct ReaderWriterLockSlim; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace System_Core::System::Threading
{
	struct ReaderWriterLockSlim_TimeoutTracker
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t m_total;
		int32_t m_start;
		void _ctor(int32_t millisecondsTimeout);
		int32_t get_RemainingMilliseconds();
		bool get_IsExpired();
	};
}

