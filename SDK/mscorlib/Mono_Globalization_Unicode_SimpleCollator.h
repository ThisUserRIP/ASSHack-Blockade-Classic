#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System::Globalization { struct TextInfo; };
namespace mscorlib::Mono::Globalization::Unicode { struct CodePointIndexer; };
namespace mscorlib::Mono::Globalization::Unicode { struct Contraction; };
namespace mscorlib::Mono::Globalization::Unicode { struct Level2Map; };
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Globalization { struct CultureInfo; };
#include "Mono_Globalization_Unicode_SimpleCollator_ExtenderType.h"
#include "System_Globalization_CompareOptions.h"
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Globalization { struct SortKey; };
namespace mscorlib::Mono::Globalization::Unicode { struct SortKeyBuffer; };
namespace mscorlib::Mono::Globalization::Unicode { struct SimpleCollator_Context; };
namespace mscorlib::Mono::Globalization::Unicode { struct SimpleCollator_Context; };
#include "System_Char.h"
namespace mscorlib::System { struct Char; };

namespace mscorlib::Mono::Globalization::Unicode
{
	struct SimpleCollator : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Globalization::TextInfo* textInfo;
		mscorlib::Mono::Globalization::Unicode::CodePointIndexer* cjkIndexer;
		IL2CPP::Array<mscorlib::Mono::Globalization::Unicode::Contraction*>* contractions;
		IL2CPP::Array<mscorlib::Mono::Globalization::Unicode::Level2Map*>* level2Maps;
		IL2CPP::Array<uint8_t>* unsafeFlags;
		uint8_t* cjkCatTable;
		uint8_t* cjkLv1Table;
		uint8_t* cjkLv2Table;
		mscorlib::Mono::Globalization::Unicode::CodePointIndexer* cjkLv2Indexer;
		int32_t lcid;
		bool frenchSort;
		struct StaticFields
		{
			bool QuickCheckDisabled;
			mscorlib::Mono::Globalization::Unicode::SimpleCollator* invariant;
			int32_t UnsafeFlagLength;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(mscorlib::System::Globalization::CultureInfo* culture);
		void SetCJKTable(mscorlib::System::Globalization::CultureInfo* culture, mscorlib::Mono::Globalization::Unicode::CodePointIndexer& cjkIndexer, uint8_t& catTable, uint8_t& lv1Table, mscorlib::Mono::Globalization::Unicode::CodePointIndexer& lv2Indexer, uint8_t& lv2Table);
		static mscorlib::System::Globalization::CultureInfo* GetNeutralCulture(mscorlib::System::Globalization::CultureInfo* info);
		uint8_t Category(int32_t cp);
		uint8_t Level1(int32_t cp);
		uint8_t Level2(int32_t cp, mscorlib::Mono::Globalization::Unicode::SimpleCollator_ExtenderType ext);
		static bool IsHalfKana(int32_t cp, mscorlib::System::Globalization::CompareOptions opt);
		mscorlib::Mono::Globalization::Unicode::Contraction* GetContraction(mscorlib::System::String* s, int32_t start, int32_t end);
		mscorlib::Mono::Globalization::Unicode::Contraction* GetContraction(mscorlib::System::String* s, int32_t start, int32_t end, IL2CPP::Array<mscorlib::Mono::Globalization::Unicode::Contraction*>* clist);
		mscorlib::Mono::Globalization::Unicode::Contraction* GetTailContraction(mscorlib::System::String* s, int32_t start, int32_t end);
		mscorlib::Mono::Globalization::Unicode::Contraction* GetTailContraction(mscorlib::System::String* s, int32_t start, int32_t end, IL2CPP::Array<mscorlib::Mono::Globalization::Unicode::Contraction*>* clist);
		int32_t FilterOptions(int32_t i, mscorlib::System::Globalization::CompareOptions opt);
		mscorlib::Mono::Globalization::Unicode::SimpleCollator_ExtenderType GetExtenderType(int32_t i);
		static uint8_t ToDashTypeValue(mscorlib::Mono::Globalization::Unicode::SimpleCollator_ExtenderType ext, mscorlib::System::Globalization::CompareOptions opt);
		int32_t FilterExtender(int32_t i, mscorlib::Mono::Globalization::Unicode::SimpleCollator_ExtenderType ext, mscorlib::System::Globalization::CompareOptions opt);
		static bool IsIgnorable(int32_t i, mscorlib::System::Globalization::CompareOptions opt);
		bool IsSafe(int32_t i);
		mscorlib::System::Globalization::SortKey* GetSortKey(mscorlib::System::String* s, mscorlib::System::Globalization::CompareOptions options);
		mscorlib::System::Globalization::SortKey* GetSortKey(mscorlib::System::String* s, int32_t start, int32_t length, mscorlib::System::Globalization::CompareOptions options);
		void GetSortKey(mscorlib::System::String* s, int32_t start, int32_t end, mscorlib::Mono::Globalization::Unicode::SortKeyBuffer* buf, mscorlib::System::Globalization::CompareOptions opt);
		void FillSortKeyRaw(int32_t i, mscorlib::Mono::Globalization::Unicode::SimpleCollator_ExtenderType ext, mscorlib::Mono::Globalization::Unicode::SortKeyBuffer* buf, mscorlib::System::Globalization::CompareOptions opt);
		void FillSurrogateSortKeyRaw(int32_t i, mscorlib::Mono::Globalization::Unicode::SortKeyBuffer* buf);
		int32_t Compare(mscorlib::System::String* s1, int32_t idx1, int32_t len1, mscorlib::System::String* s2, int32_t idx2, int32_t len2, mscorlib::System::Globalization::CompareOptions options);
		void ClearBuffer(uint8_t* buffer, int32_t size);
		int32_t CompareInternal(mscorlib::System::String* s1, int32_t idx1, int32_t len1, mscorlib::System::String* s2, int32_t idx2, int32_t len2, bool& targetConsumed, bool& sourceConsumed, bool skipHeadingExtenders, bool immediateBreakup, mscorlib::Mono::Globalization::Unicode::SimpleCollator_Context& ctx);
		int32_t CompareFlagPair(bool b1, bool b2);
		bool IsPrefix(mscorlib::System::String* src, mscorlib::System::String* target, mscorlib::System::Globalization::CompareOptions opt);
		bool IsPrefix(mscorlib::System::String* s, mscorlib::System::String* target, int32_t start, int32_t length, mscorlib::System::Globalization::CompareOptions opt);
		bool IsPrefix(mscorlib::System::String* s, mscorlib::System::String* target, int32_t start, int32_t length, bool skipHeadingExtenders, mscorlib::Mono::Globalization::Unicode::SimpleCollator_Context& ctx);
		bool IsSuffix(mscorlib::System::String* src, mscorlib::System::String* target, mscorlib::System::Globalization::CompareOptions opt);
		bool IsSuffix(mscorlib::System::String* s, mscorlib::System::String* target, int32_t start, int32_t length, mscorlib::System::Globalization::CompareOptions opt);
		int32_t QuickIndexOf(mscorlib::System::String* s, mscorlib::System::String* target, int32_t start, int32_t length, bool& testWasUnable);
		int32_t IndexOf(mscorlib::System::String* s, mscorlib::System::String* target, int32_t start, int32_t length, mscorlib::System::Globalization::CompareOptions opt);
		int32_t IndexOfOrdinal(mscorlib::System::String* s, mscorlib::System::String* target, int32_t start, int32_t length);
		int32_t IndexOfOrdinal(mscorlib::System::String* s, wchar_t target, int32_t start, int32_t length);
		int32_t IndexOfSortKey(mscorlib::System::String* s, int32_t start, int32_t length, uint8_t* sortkey, wchar_t target, int32_t ti, bool noLv4, mscorlib::Mono::Globalization::Unicode::SimpleCollator_Context& ctx);
		int32_t IndexOf(mscorlib::System::String* s, mscorlib::System::String* target, int32_t start, int32_t length, uint8_t* targetSortKey, mscorlib::Mono::Globalization::Unicode::SimpleCollator_Context& ctx);
		int32_t LastIndexOf(mscorlib::System::String* s, mscorlib::System::String* target, int32_t start, int32_t length, mscorlib::System::Globalization::CompareOptions opt);
		int32_t LastIndexOfOrdinal(mscorlib::System::String* s, mscorlib::System::String* target, int32_t start, int32_t length);
		int32_t LastIndexOfSortKey(mscorlib::System::String* s, int32_t start, int32_t orgStart, int32_t length, uint8_t* sortkey, int32_t ti, bool noLv4, mscorlib::Mono::Globalization::Unicode::SimpleCollator_Context& ctx);
		int32_t LastIndexOf(mscorlib::System::String* s, mscorlib::System::String* target, int32_t start, int32_t length, uint8_t* targetSortKey, mscorlib::Mono::Globalization::Unicode::SimpleCollator_Context& ctx);
		bool MatchesForward(mscorlib::System::String* s, int32_t& idx, int32_t end, int32_t ti, uint8_t* sortkey, bool noLv4, mscorlib::Mono::Globalization::Unicode::SimpleCollator_Context& ctx);
		bool MatchesForwardCore(mscorlib::System::String* s, int32_t& idx, int32_t end, int32_t ti, uint8_t* sortkey, bool noLv4, mscorlib::Mono::Globalization::Unicode::SimpleCollator_ExtenderType ext, mscorlib::Mono::Globalization::Unicode::Contraction& ct, mscorlib::Mono::Globalization::Unicode::SimpleCollator_Context& ctx);
		bool MatchesPrimitive(mscorlib::System::Globalization::CompareOptions opt, uint8_t* source, int32_t si, mscorlib::Mono::Globalization::Unicode::SimpleCollator_ExtenderType ext, uint8_t* target, int32_t ti, bool noLv4);
		bool MatchesBackward(mscorlib::System::String* s, int32_t& idx, int32_t end, int32_t orgStart, int32_t ti, uint8_t* sortkey, bool noLv4, mscorlib::Mono::Globalization::Unicode::SimpleCollator_Context& ctx);
		bool MatchesBackwardCore(mscorlib::System::String* s, int32_t& idx, int32_t end, int32_t orgStart, int32_t ti, uint8_t* sortkey, bool noLv4, mscorlib::Mono::Globalization::Unicode::SimpleCollator_ExtenderType ext, mscorlib::Mono::Globalization::Unicode::Contraction& ct, mscorlib::Mono::Globalization::Unicode::SimpleCollator_Context& ctx);
		static void _cctor();
	};
}

