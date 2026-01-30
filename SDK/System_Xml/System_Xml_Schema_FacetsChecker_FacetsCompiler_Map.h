#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_Schema_FacetsChecker_FacetsCompiler.h"
namespace System_Xml::System::Xml::Schema { struct FacetsChecker_FacetsCompiler; };
#include "..\mscorlib\System_Char.h"
namespace mscorlib::System { struct Char; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System_Xml::System::Xml::Schema
{
	struct FacetsChecker_FacetsCompiler_Map
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		wchar_t match;
		mscorlib::System::String* replacement;
		void _ctor(wchar_t m, mscorlib::System::String* r);
	};
}

