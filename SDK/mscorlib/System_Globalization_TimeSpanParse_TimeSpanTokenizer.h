#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Globalization_TimeSpanParse.h"
namespace mscorlib::System::Globalization { struct TimeSpanParse; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Globalization_TimeSpanParse_TimeSpanToken.h"
namespace mscorlib::System::Globalization { struct TimeSpanParse_TimeSpanToken; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Char.h"
namespace mscorlib::System { struct Char; };

namespace mscorlib::System::Globalization
{
	struct TimeSpanParse_TimeSpanTokenizer
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t m_pos;
		mscorlib::System::String* m_value;
		void Init(mscorlib::System::String* input);
		void Init(mscorlib::System::String* input, int32_t startPosition);
		mscorlib::System::Globalization::TimeSpanParse_TimeSpanToken GetNextToken();
		bool get_EOL();
		wchar_t get_NextChar();
		wchar_t get_CurrentChar();
	};
}

