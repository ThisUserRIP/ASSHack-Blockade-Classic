#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Diagnostics_Tracing_EventProvider.h"
namespace mscorlib::System::Diagnostics::Tracing { struct EventProvider; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::System::Diagnostics::Tracing
{
	struct EventProvider_SessionInfo
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t sessionIdBit;
		int32_t etwSessionId;
		void _ctor(int32_t sessionIdBit_, int32_t etwSessionId_);
	};
}

