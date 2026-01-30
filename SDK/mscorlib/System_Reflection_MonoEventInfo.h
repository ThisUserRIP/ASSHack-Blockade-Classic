#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Reflection { struct MethodInfo; };
#include "System_Reflection_EventAttributes.h"
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Reflection { struct MonoEvent; };

namespace mscorlib::System::Reflection
{
	struct MonoEventInfo
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Type* declaring_type;
		mscorlib::System::Type* reflected_type;
		mscorlib::System::String* name;
		mscorlib::System::Reflection::MethodInfo* add_method;
		mscorlib::System::Reflection::MethodInfo* remove_method;
		mscorlib::System::Reflection::MethodInfo* raise_method;
		mscorlib::System::Reflection::EventAttributes attrs;
		IL2CPP::Array<mscorlib::System::Reflection::MethodInfo*>* other_methods;
		static void get_event_info(mscorlib::System::Reflection::MonoEvent* ev, mscorlib::System::Reflection::MonoEventInfo& info);
		static mscorlib::System::Reflection::MonoEventInfo GetEventInfo(mscorlib::System::Reflection::MonoEvent* ev);
	};
}

