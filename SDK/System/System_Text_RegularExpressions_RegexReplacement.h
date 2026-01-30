#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System::System::Text::RegularExpressions { struct RegexNode; };
namespace mscorlib::System::Collections { struct Hashtable; };
namespace mscorlib::System::Text { struct StringBuilder; };
namespace System::System::Text::RegularExpressions { struct Match; };
namespace System::System::Text::RegularExpressions { struct Regex; };
namespace System::System::Text::RegularExpressions { struct MatchEvaluator; };

namespace System::System::Text::RegularExpressions
{
	struct RegexReplacement : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* _rep;
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>* _strings;
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::Int32>* _rules;
		void _ctor(mscorlib::System::String* rep, System::Text::RegularExpressions::RegexNode* concat, mscorlib::System::Collections::Hashtable* _caps);
		void ReplacementImpl(mscorlib::System::Text::StringBuilder* sb, System::Text::RegularExpressions::Match* match);
		void ReplacementImplRTL(mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>* al, System::Text::RegularExpressions::Match* match);
		mscorlib::System::String* get_Pattern();
		mscorlib::System::String* Replace(System::Text::RegularExpressions::Regex* regex, mscorlib::System::String* input, int32_t count, int32_t startat);
		static mscorlib::System::String* Replace(System::Text::RegularExpressions::MatchEvaluator* evaluator, System::Text::RegularExpressions::Regex* regex, mscorlib::System::String* input, int32_t count, int32_t startat);
	};
}

