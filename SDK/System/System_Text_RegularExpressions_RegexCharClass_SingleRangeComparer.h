#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Text_RegularExpressions_RegexCharClass.h"
namespace System::System::Text::RegularExpressions { struct RegexCharClass; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace System::System::Text::RegularExpressions { struct RegexCharClass_SingleRange; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System::System::Text::RegularExpressions
{
	struct RegexCharClass_SingleRangeComparer : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t Compare(System::Text::RegularExpressions::RegexCharClass_SingleRange* x, System::Text::RegularExpressions::RegexCharClass_SingleRange* y);
		void _ctor();
	};
}

