#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System::Globalization { struct HebrewNumber_HebrewValue; };
#include "System_Char.h"
namespace mscorlib::System { struct Char; };
#include "System_Globalization_HebrewNumber_HS.h"
namespace mscorlib::System { struct String; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Globalization_HebrewNumberParsingState.h"
namespace mscorlib::System::Globalization { struct HebrewNumberParsingContext; };
namespace mscorlib::System::Globalization { struct HebrewNumberParsingContext; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::System::Globalization
{
	struct HebrewNumber : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			IL2CPP::Array<mscorlib::System::Globalization::HebrewNumber_HebrewValue*>* HebrewValues;
			wchar_t maxHebrewNumberCh;
			IL2CPP::Array<IL2CPP::Array<mscorlib::System::Globalization::HebrewNumber_HS>*>* NumberPasingState;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static mscorlib::System::String* ToString(int32_t Number);
		static mscorlib::System::Globalization::HebrewNumberParsingState ParseByChar(wchar_t ch, mscorlib::System::Globalization::HebrewNumberParsingContext& context);
		static bool IsDigit(wchar_t ch);
		static void _cctor();
	};
}

