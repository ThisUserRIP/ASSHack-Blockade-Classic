#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Diagnostics_Tracing_ActivityFilter.h"
namespace mscorlib::System::Diagnostics::Tracing { struct ActivityFilter; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Guid.h"
namespace mscorlib::System { struct Guid; };

namespace mscorlib::System::Diagnostics::Tracing
{
	struct ActivityFilter___c__DisplayClass11_0 : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Diagnostics::Tracing::ActivityFilter* filterList;
		void _ctor();
		void _GetActivityDyingDelegate_b__0(mscorlib::System::Guid oldActivity);
	};
}

