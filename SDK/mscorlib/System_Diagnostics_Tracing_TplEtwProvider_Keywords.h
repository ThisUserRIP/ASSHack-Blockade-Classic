#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Diagnostics_Tracing_TplEtwProvider.h"
namespace mscorlib::System::Diagnostics::Tracing { struct TplEtwProvider; };
#include "System_Diagnostics_Tracing_EventKeywords.h"

namespace mscorlib::System::Diagnostics::Tracing
{
	struct TplEtwProvider_Keywords : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			mscorlib::System::Diagnostics::Tracing::EventKeywords Debug;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
	};
}

