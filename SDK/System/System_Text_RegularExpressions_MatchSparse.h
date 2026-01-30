#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Text_RegularExpressions_Match.h"
namespace mscorlib::System::Collections { struct Hashtable; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System::System::Text::RegularExpressions { struct Regex; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
namespace System::System::Text::RegularExpressions { struct GroupCollection; };

namespace System::System::Text::RegularExpressions
{
	struct MatchSparse : System::Text::RegularExpressions::Match
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::Hashtable* _caps;
		void _ctor(System::Text::RegularExpressions::Regex* regex, mscorlib::System::Collections::Hashtable* caps, int32_t capcount, mscorlib::System::String* text, int32_t begpos, int32_t len, int32_t startpos);
		System::Text::RegularExpressions::GroupCollection* get_Groups();
	};
}

