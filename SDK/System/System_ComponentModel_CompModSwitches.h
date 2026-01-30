#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace System::System::Diagnostics { struct BooleanSwitch; };
namespace System::System::Diagnostics { struct TraceSwitch; };

namespace System::System::ComponentModel
{
	struct CompModSwitches : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			System::Diagnostics::BooleanSwitch* commonDesignerServices;
			System::Diagnostics::TraceSwitch* eventLog;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static System::Diagnostics::BooleanSwitch* get_CommonDesignerServices();
		static System::Diagnostics::TraceSwitch* get_EventLog();
	};
}

