#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
namespace UnityEngine_CoreModule::UnityEngine { struct TextAsset; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System::Text { struct Encoding; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Char.h"
namespace mscorlib::System { struct Char; };
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int32.h"

namespace Assembly_CSharp::I2::Loc
{
	struct LocalizationReader : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::String>* ReadTextAsset(UnityEngine_CoreModule::UnityEngine::TextAsset* asset);
		static bool TextAsset_ReadLine(mscorlib::System::String* line, mscorlib::System::String& key, mscorlib::System::String& value, mscorlib::System::String& category, mscorlib::System::String& comment, mscorlib::System::String& termType);
		static mscorlib::System::String* ReadCSVfile(mscorlib::System::String* Path, mscorlib::System::Text::Encoding* encoding);
		static mscorlib::System::Collections::Generic::List_1<IL2CPP::Array<mscorlib::System::String*>>* ReadCSV(mscorlib::System::String* Text, wchar_t Separator);
		static IL2CPP::Array<mscorlib::System::String*>* ParseCSVline(mscorlib::System::String* Line, int32_t& iStart, wchar_t Separator);
		static void AddCSVtoken(mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>& list, mscorlib::System::String& Line, int32_t iEnd, int32_t& iWordStart);
		static mscorlib::System::Collections::Generic::List_1<IL2CPP::Array<mscorlib::System::String*>>* ReadI2CSV(mscorlib::System::String* Text);
		static void ValidateFullTerm(mscorlib::System::String& Term);
		static mscorlib::System::String* EncodeString(mscorlib::System::String* str);
		static mscorlib::System::String* DecodeString(mscorlib::System::String* str);
		void _ctor();
	};
}

