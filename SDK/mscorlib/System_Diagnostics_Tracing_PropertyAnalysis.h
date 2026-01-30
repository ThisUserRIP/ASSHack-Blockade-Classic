#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Reflection { struct MethodInfo; };
namespace mscorlib::System::Diagnostics::Tracing { struct TraceLoggingTypeInfo; };
namespace mscorlib::System::Diagnostics::Tracing { struct EventFieldAttribute; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::System::Diagnostics::Tracing
{
	struct PropertyAnalysis : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* name;
		mscorlib::System::Reflection::MethodInfo* getterInfo;
		mscorlib::System::Diagnostics::Tracing::TraceLoggingTypeInfo* typeInfo;
		mscorlib::System::Diagnostics::Tracing::EventFieldAttribute* fieldAttribute;
		void _ctor(mscorlib::System::String* name, mscorlib::System::Reflection::MethodInfo* getterInfo, mscorlib::System::Diagnostics::Tracing::TraceLoggingTypeInfo* typeInfo, mscorlib::System::Diagnostics::Tracing::EventFieldAttribute* fieldAttribute);
	};
}

