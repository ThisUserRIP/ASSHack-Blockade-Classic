#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_NumberFormatter.h"
namespace mscorlib::System { struct NumberFormatter; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Globalization { struct NumberFormatInfo; };
namespace mscorlib::System::Text { struct StringBuilder; };

namespace mscorlib::System
{
	struct NumberFormatter_CustomInfo : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool UseGroup;
		int32_t DecimalDigits;
		int32_t DecimalPointPos;
		int32_t DecimalTailSharpDigits;
		int32_t IntegerDigits;
		int32_t IntegerHeadSharpDigits;
		int32_t IntegerHeadPos;
		bool UseExponent;
		int32_t ExponentDigits;
		int32_t ExponentTailSharpDigits;
		bool ExponentNegativeSignOnly;
		int32_t DividePlaces;
		int32_t Percents;
		int32_t Permilles;
		static void GetActiveSection(mscorlib::System::String* format, bool& positive, bool zero, int32_t& offset, int32_t& length);
		static mscorlib::System::NumberFormatter_CustomInfo* Parse(mscorlib::System::String* format, int32_t offset, int32_t length, mscorlib::System::Globalization::NumberFormatInfo* nfi);
		mscorlib::System::String* Format(mscorlib::System::String* format, int32_t offset, int32_t length, mscorlib::System::Globalization::NumberFormatInfo* nfi, bool positive, mscorlib::System::Text::StringBuilder* sb_int, mscorlib::System::Text::StringBuilder* sb_dec, mscorlib::System::Text::StringBuilder* sb_exp);
		void _ctor();
	};
}

