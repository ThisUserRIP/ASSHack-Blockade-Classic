#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Text_RegularExpressions_Group.h"
namespace System::System::Text::RegularExpressions { struct GroupCollection; };
namespace System::System::Text::RegularExpressions { struct Regex; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };

namespace System::System::Text::RegularExpressions
{
	struct Match : System::Text::RegularExpressions::Group
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System::Text::RegularExpressions::GroupCollection* _groupcoll;
		System::Text::RegularExpressions::Regex* _regex;
		int32_t _textbeg;
		int32_t _textpos;
		int32_t _textend;
		int32_t _textstart;
		IL2CPP::Array<IL2CPP::Array<int32_t>*>* _matches;
		IL2CPP::Array<int32_t>* _matchcount;
		bool _balancing;
		struct StaticFields
		{
			System::Text::RegularExpressions::Match* _empty;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static System::Text::RegularExpressions::Match* get_Empty();
		void _ctor(System::Text::RegularExpressions::Regex* regex, int32_t capcount, mscorlib::System::String* text, int32_t begpos, int32_t len, int32_t startpos);
		void Reset(System::Text::RegularExpressions::Regex* regex, mscorlib::System::String* text, int32_t textbeg, int32_t textend, int32_t textstart);
		System::Text::RegularExpressions::GroupCollection* get_Groups();
		System::Text::RegularExpressions::Match* NextMatch();
		mscorlib::System::String* GroupToStringImpl(int32_t groupnum);
		mscorlib::System::String* LastGroupToStringImpl();
		void AddMatch(int32_t cap, int32_t start, int32_t len);
		void BalanceMatch(int32_t cap);
		void RemoveMatch(int32_t cap);
		bool IsMatched(int32_t cap);
		int32_t MatchIndex(int32_t cap);
		int32_t MatchLength(int32_t cap);
		void Tidy(int32_t textpos);
		static void _cctor();
		void _ctor();
	};
}

