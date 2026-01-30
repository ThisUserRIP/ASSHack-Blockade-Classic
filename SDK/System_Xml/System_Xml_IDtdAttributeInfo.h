#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace System_Xml::System::Xml
{
	struct IDtdAttributeInfo
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* get_Prefix();
		mscorlib::System::String* get_LocalName();
		int32_t get_LineNumber();
		int32_t get_LinePosition();
		bool get_IsNonCDataType();
		bool get_IsDeclaredInExternal();
		bool get_IsXmlAttribute();
	};
}

