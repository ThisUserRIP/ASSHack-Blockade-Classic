#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct String; };
namespace Assembly_CSharp::I2::Loc { struct TashkeelLocation; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Char.h"
namespace mscorlib::System { struct Char; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::I2::Loc
{
	struct RTLFixerTool : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			bool showTashkeel;
			bool useHinduNumbers;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static mscorlib::System::String* RemoveTashkeel(mscorlib::System::String* str, mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::I2::Loc::TashkeelLocation>& tashkeelLocation);
		static IL2CPP::Array<wchar_t>* ReturnTashkeel(IL2CPP::Array<wchar_t>* letters, mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::I2::Loc::TashkeelLocation>* tashkeelLocation);
		static mscorlib::System::String* FixLine(mscorlib::System::String* str);
		static bool IsIgnoredCharacter(wchar_t ch);
		static bool IsLeadingLetter(IL2CPP::Array<wchar_t>* letters, int32_t index);
		static bool IsFinishingLetter(IL2CPP::Array<wchar_t>* letters, int32_t index);
		static bool IsMiddleLetter(IL2CPP::Array<wchar_t>* letters, int32_t index);
		void _ctor();
		static void _cctor();
	};
}

