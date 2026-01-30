#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
namespace System::System::Text::RegularExpressions { struct RegexRunnerFactory; };
#include "System_Text_RegularExpressions_RegexOptions.h"
#include "..\mscorlib\System_TimeSpan.h"
namespace mscorlib::System { struct TimeSpan; };
namespace mscorlib::System::Collections { struct Hashtable; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace System::System::Text::RegularExpressions { struct ExclusiveReference; };
namespace System::System::Text::RegularExpressions { struct SharedReference; };
namespace System::System::Text::RegularExpressions { struct RegexCode; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace System::System::Text::RegularExpressions { struct CachedCodeEntry; };
namespace System::System::Collections::Generic { template <typename T> struct LinkedList_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Runtime::Serialization { struct SerializationInfo; };
#include "..\mscorlib\System_Runtime_Serialization_StreamingContext.h"
namespace mscorlib::System::Runtime::Serialization { struct StreamingContext; };
namespace System::System::Text::RegularExpressions { struct Match; };
namespace System::System::Text::RegularExpressions { struct MatchCollection; };
namespace System::System::Text::RegularExpressions { struct MatchEvaluator; };

namespace System::System::Text::RegularExpressions
{
	struct Regex : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* pattern;
		System::Text::RegularExpressions::RegexRunnerFactory* factory;
		System::Text::RegularExpressions::RegexOptions roptions;
		mscorlib::System::TimeSpan internalMatchTimeout;
		mscorlib::System::Collections::Hashtable* caps;
		mscorlib::System::Collections::Hashtable* capnames;
		IL2CPP::Array<mscorlib::System::String*>* capslist;
		int32_t capsize;
		System::Text::RegularExpressions::ExclusiveReference* runnerref;
		System::Text::RegularExpressions::SharedReference* replref;
		System::Text::RegularExpressions::RegexCode* code;
		bool refsInitialized;
		struct StaticFields
		{
			mscorlib::System::TimeSpan MaximumMatchTimeout;
			mscorlib::System::TimeSpan InfiniteMatchTimeout;
			mscorlib::System::TimeSpan FallbackDefaultMatchTimeout;
			mscorlib::System::TimeSpan DefaultMatchTimeout;
			System::Collections::Generic::LinkedList_1<System::Text::RegularExpressions::CachedCodeEntry>* livecode;
			int32_t cacheSize;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		void _ctor(mscorlib::System::String* pattern);
		void _ctor(mscorlib::System::String* pattern, System::Text::RegularExpressions::RegexOptions options);
		void _ctor(mscorlib::System::String* pattern, System::Text::RegularExpressions::RegexOptions options, mscorlib::System::TimeSpan matchTimeout, bool useCache);
		void _ctor(mscorlib::System::Runtime::Serialization::SerializationInfo* info, mscorlib::System::Runtime::Serialization::StreamingContext context);
		void System_Runtime_Serialization_ISerializable_GetObjectData(mscorlib::System::Runtime::Serialization::SerializationInfo* si, mscorlib::System::Runtime::Serialization::StreamingContext context);
		static void ValidateMatchTimeout(mscorlib::System::TimeSpan matchTimeout);
		static mscorlib::System::TimeSpan InitDefaultMatchTimeout();
		static mscorlib::System::String* Escape(mscorlib::System::String* str);
		System::Text::RegularExpressions::RegexOptions get_Options();
		mscorlib::System::TimeSpan get_MatchTimeout();
		bool get_RightToLeft();
		mscorlib::System::String* ToString();
		mscorlib::System::String* GroupNameFromNumber(int32_t i);
		static bool IsMatch(mscorlib::System::String* input, mscorlib::System::String* pattern);
		static bool IsMatch(mscorlib::System::String* input, mscorlib::System::String* pattern, System::Text::RegularExpressions::RegexOptions options);
		static bool IsMatch(mscorlib::System::String* input, mscorlib::System::String* pattern, System::Text::RegularExpressions::RegexOptions options, mscorlib::System::TimeSpan matchTimeout);
		bool IsMatch(mscorlib::System::String* input);
		bool IsMatch(mscorlib::System::String* input, int32_t startat);
		static System::Text::RegularExpressions::Match* Match(mscorlib::System::String* input, mscorlib::System::String* pattern);
		static System::Text::RegularExpressions::Match* Match(mscorlib::System::String* input, mscorlib::System::String* pattern, System::Text::RegularExpressions::RegexOptions options, mscorlib::System::TimeSpan matchTimeout);
		System::Text::RegularExpressions::Match* Match(mscorlib::System::String* input);
		System::Text::RegularExpressions::Match* Match(mscorlib::System::String* input, int32_t startat);
		static System::Text::RegularExpressions::MatchCollection* Matches(mscorlib::System::String* input, mscorlib::System::String* pattern);
		static System::Text::RegularExpressions::MatchCollection* Matches(mscorlib::System::String* input, mscorlib::System::String* pattern, System::Text::RegularExpressions::RegexOptions options, mscorlib::System::TimeSpan matchTimeout);
		System::Text::RegularExpressions::MatchCollection* Matches(mscorlib::System::String* input);
		System::Text::RegularExpressions::MatchCollection* Matches(mscorlib::System::String* input, int32_t startat);
		static mscorlib::System::String* Replace(mscorlib::System::String* input, mscorlib::System::String* pattern, mscorlib::System::String* replacement);
		static mscorlib::System::String* Replace(mscorlib::System::String* input, mscorlib::System::String* pattern, mscorlib::System::String* replacement, System::Text::RegularExpressions::RegexOptions options);
		static mscorlib::System::String* Replace(mscorlib::System::String* input, mscorlib::System::String* pattern, mscorlib::System::String* replacement, System::Text::RegularExpressions::RegexOptions options, mscorlib::System::TimeSpan matchTimeout);
		mscorlib::System::String* Replace(mscorlib::System::String* input, mscorlib::System::String* replacement);
		mscorlib::System::String* Replace(mscorlib::System::String* input, mscorlib::System::String* replacement, int32_t count, int32_t startat);
		static mscorlib::System::String* Replace(mscorlib::System::String* input, mscorlib::System::String* pattern, System::Text::RegularExpressions::MatchEvaluator* evaluator);
		static mscorlib::System::String* Replace(mscorlib::System::String* input, mscorlib::System::String* pattern, System::Text::RegularExpressions::MatchEvaluator* evaluator, System::Text::RegularExpressions::RegexOptions options, mscorlib::System::TimeSpan matchTimeout);
		mscorlib::System::String* Replace(mscorlib::System::String* input, System::Text::RegularExpressions::MatchEvaluator* evaluator);
		mscorlib::System::String* Replace(mscorlib::System::String* input, System::Text::RegularExpressions::MatchEvaluator* evaluator, int32_t count, int32_t startat);
		void InitializeReferences();
		System::Text::RegularExpressions::Match* Run(bool quick, int32_t prevlen, mscorlib::System::String* input, int32_t beginning, int32_t length, int32_t startat);
		static System::Text::RegularExpressions::CachedCodeEntry* LookupCachedAndUpdate(mscorlib::System::String* key);
		System::Text::RegularExpressions::CachedCodeEntry* CacheCode(mscorlib::System::String* key);
		bool UseOptionR();
		bool UseOptionInvariant();
		static void _cctor();
	};
}

