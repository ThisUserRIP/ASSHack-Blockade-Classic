#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Globalization_TimeSpanParse.h"
namespace mscorlib::System::Globalization { struct TimeSpanParse; };
#include "System_Globalization_TimeSpanParse_TTT.h"
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace mscorlib::System::Globalization
{
	struct TimeSpanParse_TimeSpanToken
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Globalization::TimeSpanParse_TTT ttt;
		int32_t num;
		int32_t zeroes;
		mscorlib::System::String* sep;
		void _ctor(int32_t number);
		bool IsInvalidNumber(int32_t maxValue, int32_t maxPrecision);
	};
}

