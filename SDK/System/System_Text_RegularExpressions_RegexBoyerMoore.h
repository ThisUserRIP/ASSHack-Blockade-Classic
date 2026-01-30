#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System::Globalization { struct CultureInfo; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System::System::Text::RegularExpressions
{
	struct RegexBoyerMoore : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<int32_t>* _positive;
		IL2CPP::Array<int32_t>* _negativeASCII;
		IL2CPP::Array<IL2CPP::Array<int32_t>*>* _negativeUnicode;
		mscorlib::System::String* _pattern;
		int32_t _lowASCII;
		int32_t _highASCII;
		bool _rightToLeft;
		bool _caseInsensitive;
		mscorlib::System::Globalization::CultureInfo* _culture;
		void _ctor(mscorlib::System::String* pattern, bool caseInsensitive, bool rightToLeft, mscorlib::System::Globalization::CultureInfo* culture);
		bool MatchPattern(mscorlib::System::String* text, int32_t index);
		bool IsMatch(mscorlib::System::String* text, int32_t index, int32_t beglimit, int32_t endlimit);
		int32_t Scan(mscorlib::System::String* text, int32_t index, int32_t beglimit, int32_t endlimit);
		mscorlib::System::String* ToString();
	};
}

