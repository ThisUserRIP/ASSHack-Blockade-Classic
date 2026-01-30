#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
namespace System::System::Text::RegularExpressions { struct RegexCode; };
namespace mscorlib::System::Collections { struct Hashtable; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace System::System::Text::RegularExpressions { struct RegexRunnerFactory; };
namespace System::System::Text::RegularExpressions { struct ExclusiveReference; };
namespace System::System::Text::RegularExpressions { struct SharedReference; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System::System::Text::RegularExpressions
{
	struct CachedCodeEntry : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* _key;
		System::Text::RegularExpressions::RegexCode* _code;
		mscorlib::System::Collections::Hashtable* _caps;
		mscorlib::System::Collections::Hashtable* _capnames;
		IL2CPP::Array<mscorlib::System::String*>* _capslist;
		int32_t _capsize;
		System::Text::RegularExpressions::RegexRunnerFactory* _factory;
		System::Text::RegularExpressions::ExclusiveReference* _runnerref;
		System::Text::RegularExpressions::SharedReference* _replref;
		void _ctor(mscorlib::System::String* key, mscorlib::System::Collections::Hashtable* capnames, IL2CPP::Array<mscorlib::System::String*>* capslist, System::Text::RegularExpressions::RegexCode* code, mscorlib::System::Collections::Hashtable* caps, int32_t capsize, System::Text::RegularExpressions::ExclusiveReference* runner, System::Text::RegularExpressions::SharedReference* repl);
	};
}

