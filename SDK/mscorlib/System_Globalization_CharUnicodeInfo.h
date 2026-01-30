#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_UInt16.h"
namespace mscorlib::System { struct UInt16; };
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Char.h"
namespace mscorlib::System { struct Char; };
#include "System_Double.h"
namespace mscorlib::System { struct Double; };
#include "System_Globalization_UnicodeCategory.h"
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::System::Globalization
{
	struct CharUnicodeInfo : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			IL2CPP::Array<uint16_t>* s_pCategoryLevel1Index;
			IL2CPP::Array<uint8_t>* s_pCategoriesValue;
			IL2CPP::Array<uint16_t>* s_pNumericLevel1Index;
			IL2CPP::Array<uint8_t>* s_pNumericValues;
			IL2CPP::Array<uint16_t>* s_pDigitValues;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static int32_t InternalConvertToUtf32(mscorlib::System::String* s, int32_t index);
		static int32_t InternalConvertToUtf32(mscorlib::System::String* s, int32_t index, int32_t& charLength);
		static bool IsWhiteSpace(mscorlib::System::String* s, int32_t index);
		static bool IsWhiteSpace(wchar_t c);
		static double InternalGetNumericValue(int32_t ch);
		static double GetNumericValue(wchar_t ch);
		static mscorlib::System::Globalization::UnicodeCategory GetUnicodeCategory(wchar_t ch);
		static mscorlib::System::Globalization::UnicodeCategory GetUnicodeCategory(mscorlib::System::String* s, int32_t index);
		static mscorlib::System::Globalization::UnicodeCategory InternalGetUnicodeCategory(int32_t ch);
		static uint8_t InternalGetCategoryValue(int32_t ch, int32_t offset);
		static mscorlib::System::Globalization::UnicodeCategory InternalGetUnicodeCategory(mscorlib::System::String* value, int32_t index);
		static mscorlib::System::Globalization::UnicodeCategory InternalGetUnicodeCategory(mscorlib::System::String* str, int32_t index, int32_t& charLength);
		static void _cctor();
	};
}

