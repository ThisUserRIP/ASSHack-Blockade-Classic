#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Attribute.h"
#include "System_Diagnostics_DebuggableAttribute_DebuggingModes.h"
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::System::Diagnostics
{
	struct DebuggableAttribute : mscorlib::System::Attribute
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Diagnostics::DebuggableAttribute_DebuggingModes m_debuggingModes;
		void _ctor(mscorlib::System::Diagnostics::DebuggableAttribute_DebuggingModes modes);
	};
}

