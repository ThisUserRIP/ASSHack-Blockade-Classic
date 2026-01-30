#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Xml_NameTable.h"
namespace System_Xml::System::Xml { struct NameTable; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System_Xml::System::Xml
{
	struct NameTable_Entry : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* str;
		int32_t hashCode;
		System_Xml::System::Xml::NameTable_Entry* next;
		void _ctor(mscorlib::System::String* str, int32_t hashCode, System_Xml::System::Xml::NameTable_Entry* next);
	};
}

