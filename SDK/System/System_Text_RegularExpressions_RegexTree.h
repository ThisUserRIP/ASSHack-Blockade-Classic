#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace System::System::Text::RegularExpressions { struct RegexNode; };
namespace mscorlib::System::Collections { struct Hashtable; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
#include "System_Text_RegularExpressions_RegexOptions.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System::System::Text::RegularExpressions
{
	struct RegexTree : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System::Text::RegularExpressions::RegexNode* _root;
		mscorlib::System::Collections::Hashtable* _caps;
		IL2CPP::Array<int32_t>* _capnumlist;
		mscorlib::System::Collections::Hashtable* _capnames;
		IL2CPP::Array<mscorlib::System::String*>* _capslist;
		System::Text::RegularExpressions::RegexOptions _options;
		int32_t _captop;
		void _ctor(System::Text::RegularExpressions::RegexNode* root, mscorlib::System::Collections::Hashtable* caps, IL2CPP::Array<int32_t>* capnumlist, int32_t captop, mscorlib::System::Collections::Hashtable* capnames, IL2CPP::Array<mscorlib::System::String*>* capslist, System::Text::RegularExpressions::RegexOptions opts);
	};
}

