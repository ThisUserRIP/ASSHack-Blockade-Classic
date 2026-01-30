#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Attribute.h"
#include "System_Diagnostics_DebuggerBrowsableState.h"
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::System::Diagnostics
{
	struct DebuggerBrowsableAttribute : mscorlib::System::Attribute
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Diagnostics::DebuggerBrowsableState state;
		void _ctor(mscorlib::System::Diagnostics::DebuggerBrowsableState state);
	};
}

