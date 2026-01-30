#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_MonoCustomAttrs.h"
namespace mscorlib::System { struct MonoCustomAttrs; };
namespace mscorlib::System { struct AttributeUsageAttribute; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::System
{
	struct MonoCustomAttrs_AttributeInfo : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::AttributeUsageAttribute* _usage;
		int32_t _inheritanceLevel;
		void _ctor(mscorlib::System::AttributeUsageAttribute* usage, int32_t inheritanceLevel);
		mscorlib::System::AttributeUsageAttribute* get_Usage();
		int32_t get_InheritanceLevel();
	};
}

