#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
namespace mscorlib::System { struct String; };

namespace Assembly_CSharp::I2::Loc
{
	struct TranslationQuery
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* OrigText;
		mscorlib::System::String* Text;
		mscorlib::System::String* LanguageCode;
		IL2CPP::Array<mscorlib::System::String*>* TargetLanguagesCode;
		IL2CPP::Array<mscorlib::System::String*>* Results;
		IL2CPP::Array<mscorlib::System::String*>* Tags;
	};
}

