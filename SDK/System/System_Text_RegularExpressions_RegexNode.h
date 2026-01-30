#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Char.h"
namespace mscorlib::System { struct Char; };
#include "System_Text_RegularExpressions_RegexOptions.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace System::System::Text::RegularExpressions
{
	struct RegexNode : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t _type;
		mscorlib::System::Collections::Generic::List_1<System::Text::RegularExpressions::RegexNode>* _children;
		mscorlib::System::String* _str;
		wchar_t _ch;
		int32_t _m;
		int32_t _n;
		System::Text::RegularExpressions::RegexOptions _options;
		System::Text::RegularExpressions::RegexNode* _next;
		void _ctor(int32_t type, System::Text::RegularExpressions::RegexOptions options);
		void _ctor(int32_t type, System::Text::RegularExpressions::RegexOptions options, wchar_t ch);
		void _ctor(int32_t type, System::Text::RegularExpressions::RegexOptions options, mscorlib::System::String* str);
		void _ctor(int32_t type, System::Text::RegularExpressions::RegexOptions options, int32_t m);
		void _ctor(int32_t type, System::Text::RegularExpressions::RegexOptions options, int32_t m, int32_t n);
		bool UseOptionR();
		System::Text::RegularExpressions::RegexNode* ReverseLeft();
		void MakeRep(int32_t type, int32_t min, int32_t max);
		System::Text::RegularExpressions::RegexNode* Reduce();
		System::Text::RegularExpressions::RegexNode* StripEnation(int32_t emptyType);
		System::Text::RegularExpressions::RegexNode* ReduceGroup();
		System::Text::RegularExpressions::RegexNode* ReduceRep();
		System::Text::RegularExpressions::RegexNode* ReduceSet();
		System::Text::RegularExpressions::RegexNode* ReduceAlternation();
		System::Text::RegularExpressions::RegexNode* ReduceConcatenation();
		System::Text::RegularExpressions::RegexNode* MakeQuantifier(bool lazy, int32_t min, int32_t max);
		void AddChild(System::Text::RegularExpressions::RegexNode* newChild);
		System::Text::RegularExpressions::RegexNode* Child(int32_t i);
		int32_t ChildCount();
		int32_t Type();
	};
}

