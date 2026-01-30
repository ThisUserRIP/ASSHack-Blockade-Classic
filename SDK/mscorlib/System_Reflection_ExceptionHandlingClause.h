#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Reflection_ExceptionHandlingClauseOptions.h"
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };

namespace mscorlib::System::Reflection
{
	struct ExceptionHandlingClause : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Type* catch_type;
		int32_t filter_offset;
		mscorlib::System::Reflection::ExceptionHandlingClauseOptions flags;
		int32_t try_offset;
		int32_t try_length;
		int32_t handler_offset;
		int32_t handler_length;
		void _ctor();
		mscorlib::System::String* ToString();
	};
}

