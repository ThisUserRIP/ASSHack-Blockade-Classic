#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Xml_DtdParser.h"
namespace System_Xml::System::Xml { struct DtdParser; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System_Xml::System::Xml
{
	struct DtdParser_UndeclaredNotation : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* name;
		int32_t lineNo;
		int32_t linePos;
		System_Xml::System::Xml::DtdParser_UndeclaredNotation* next;
		void _ctor(mscorlib::System::String* name, int32_t lineNo, int32_t linePos);
	};
}

