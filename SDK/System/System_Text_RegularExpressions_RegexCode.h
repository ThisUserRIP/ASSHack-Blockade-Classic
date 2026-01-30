#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Collections { struct Hashtable; };
namespace System::System::Text::RegularExpressions { struct RegexPrefix; };
namespace System::System::Text::RegularExpressions { struct RegexBoyerMoore; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };

namespace System::System::Text::RegularExpressions
{
	struct RegexCode : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<int32_t>* _codes;
		IL2CPP::Array<mscorlib::System::String*>* _strings;
		int32_t _trackcount;
		mscorlib::System::Collections::Hashtable* _caps;
		int32_t _capsize;
		System::Text::RegularExpressions::RegexPrefix* _fcPrefix;
		System::Text::RegularExpressions::RegexBoyerMoore* _bmPrefix;
		int32_t _anchors;
		bool _rightToLeft;
		void _ctor(IL2CPP::Array<int32_t>* codes, mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>* stringlist, int32_t trackcount, mscorlib::System::Collections::Hashtable* caps, int32_t capsize, System::Text::RegularExpressions::RegexBoyerMoore* bmPrefix, System::Text::RegularExpressions::RegexPrefix* fcPrefix, int32_t anchors, bool rightToLeft);
		static bool OpcodeBacktracks(int32_t Op);
	};
}

