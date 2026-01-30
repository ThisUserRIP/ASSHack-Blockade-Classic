#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Diagnostics_Tracing_EtwSession.h"
namespace mscorlib::System::Diagnostics::Tracing { struct EtwSession; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { template <typename T> struct WeakReference_1; };

namespace mscorlib::System::Diagnostics::Tracing
{
	struct EtwSession___c__DisplayClass1_0 : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Diagnostics::Tracing::EtwSession* etwSession;
		void _ctor();
		bool _RemoveEtwSession_b__0(mscorlib::System::WeakReference_1<mscorlib::System::Diagnostics::Tracing::EtwSession>* wrEtwSession);
	};
}

