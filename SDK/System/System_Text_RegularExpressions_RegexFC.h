#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace System::System::Text::RegularExpressions { struct RegexCharClass; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Char.h"
namespace mscorlib::System { struct Char; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Globalization { struct CultureInfo; };

namespace System::System::Text::RegularExpressions
{
	struct RegexFC : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System::Text::RegularExpressions::RegexCharClass* _cc;
		bool _nullable;
		bool _caseInsensitive;
		void _ctor(bool nullable);
		void _ctor(wchar_t ch, bool not, bool nullable, bool caseInsensitive);
		void _ctor(mscorlib::System::String* charClass, bool nullable, bool caseInsensitive);
		bool AddFC(System::Text::RegularExpressions::RegexFC* fc, bool concatenate);
		mscorlib::System::String* GetFirstChars(mscorlib::System::Globalization::CultureInfo* culture);
		bool IsCaseInsensitive();
	};
}

