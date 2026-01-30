#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "I2_Loc_TranslationJob_WEB.h"
namespace Assembly_CSharp::I2::Loc { struct TranslationJob_WEB; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Collections_Generic_KeyValuePair_2.h"
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct KeyValuePair_2; };
namespace mscorlib::System { template <typename T> struct Comparison_1; };
namespace System::System::Text::RegularExpressions { struct MatchEvaluator; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace System::System::Text::RegularExpressions { struct Match; };

namespace Assembly_CSharp::I2::Loc
{
	struct TranslationJob_WEB___c : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			Assembly_CSharp::I2::Loc::TranslationJob_WEB___c* __9;
			mscorlib::System::Comparison_1<mscorlib::System::Collections::Generic::KeyValuePair_2<mscorlib::System::String, mscorlib::System::String>>* __9__8_0;
			System::System::Text::RegularExpressions::MatchEvaluator* __9__12_0;
			System::System::Text::RegularExpressions::MatchEvaluator* __9__12_1;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void _cctor();
		void _ctor();
		int32_t _FindAllQueries_b__8_0(mscorlib::System::Collections::Generic::KeyValuePair_2<mscorlib::System::String, mscorlib::System::String> a, mscorlib::System::Collections::Generic::KeyValuePair_2<mscorlib::System::String, mscorlib::System::String> b);
		mscorlib::System::String* _ParseTranslationResult_b__12_0(System::System::Text::RegularExpressions::Match* match);
		mscorlib::System::String* _ParseTranslationResult_b__12_1(System::System::Text::RegularExpressions::Match* match);
	};
}

