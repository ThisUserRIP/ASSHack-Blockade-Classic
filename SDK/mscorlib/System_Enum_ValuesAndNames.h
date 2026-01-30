#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Enum.h"
namespace mscorlib::System { struct Enum; };
#include "System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
namespace mscorlib::System { struct String; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::System
{
	struct Enum_ValuesAndNames : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<uint64_t>* Values;
		IL2CPP::Array<mscorlib::System::String*>* Names;
		void _ctor(IL2CPP::Array<uint64_t>* values, IL2CPP::Array<mscorlib::System::String*>* names);
	};
}

