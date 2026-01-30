#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_XmlNameTable.h"
namespace System_Xml::System::Xml { struct NameTable_Entry; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Char.h"
namespace mscorlib::System { struct Char; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace System_Xml::System::Xml
{
	struct NameTable : System_Xml::System::Xml::XmlNameTable
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<System_Xml::System::Xml::NameTable_Entry*>* entries;
		int32_t count;
		int32_t mask;
		int32_t hashCodeRandomizer;
		void _ctor();
		mscorlib::System::String* Add(mscorlib::System::String* key);
		mscorlib::System::String* Add(IL2CPP::Array<wchar_t>* key, int32_t start, int32_t len);
		mscorlib::System::String* Get(mscorlib::System::String* value);
		mscorlib::System::String* AddEntry(mscorlib::System::String* str, int32_t hashCode);
		void Grow();
		static bool TextEquals(mscorlib::System::String* str1, IL2CPP::Array<wchar_t>* str2, int32_t str2Start, int32_t str2Length);
	};
}

