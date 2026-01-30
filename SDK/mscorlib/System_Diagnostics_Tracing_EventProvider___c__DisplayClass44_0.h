#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Diagnostics_Tracing_EventProvider.h"
namespace mscorlib::System::Diagnostics::Tracing { struct EventProvider; };
#include "System_Diagnostics_Tracing_EventProvider_SessionInfo.h"
namespace mscorlib::System::Diagnostics::Tracing { struct EventProvider_SessionInfo; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Int64.h"
namespace mscorlib::System { struct Int64; };

namespace mscorlib::System::Diagnostics::Tracing
{
	struct EventProvider___c__DisplayClass44_0 : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::Diagnostics::Tracing::EventProvider_SessionInfo>* liveSessionList;
		void _ctor();
		void _GetSessions_b__0(int32_t etwSessionId, int64_t matchAllKeywords);
	};
}

