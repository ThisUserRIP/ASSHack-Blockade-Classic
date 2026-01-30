#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Text_RegularExpressions_RegexCharClass.h"
namespace System::System::Text::RegularExpressions { struct RegexCharClass; };
#include "..\mscorlib\System_Char.h"
namespace mscorlib::System { struct Char; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System::System::Text::RegularExpressions
{
	struct RegexCharClass_LowerCaseMapping
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		wchar_t _chMin;
		wchar_t _chMax;
		int32_t _lcOp;
		int32_t _data;
		void _ctor(wchar_t chMin, wchar_t chMax, int32_t lcOp, int32_t data);
	};
}

