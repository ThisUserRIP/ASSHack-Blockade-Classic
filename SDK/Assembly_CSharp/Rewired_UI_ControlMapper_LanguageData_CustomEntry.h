#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Rewired_UI_ControlMapper_LanguageData.h"
namespace Assembly_CSharp::Rewired::UI::ControlMapper { struct LanguageData; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
namespace Assembly_CSharp::Rewired::UI::ControlMapper { struct LanguageData_CustomEntry; };

namespace Assembly_CSharp::Rewired::UI::ControlMapper
{
	struct LanguageData_CustomEntry : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* key;
		mscorlib::System::String* value;
		void _ctor();
		void _ctor(mscorlib::System::String* key, mscorlib::System::String* value);
		static mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::String>* ToDictionary(IL2CPP::Array<Assembly_CSharp::Rewired::UI::ControlMapper::LanguageData_CustomEntry*>* array);
	};
}

