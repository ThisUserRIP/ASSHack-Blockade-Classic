#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct Byte; };
namespace mscorlib::System { struct Byte; };
#include "System_Char.h"
namespace mscorlib::System { struct Char; };
namespace mscorlib::Mono::Globalization::Unicode { struct TailoringInfo; };
namespace mscorlib::System { struct Object; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Globalization { struct CultureInfo; };
namespace mscorlib::Mono::Globalization::Unicode { struct Contraction; };
namespace mscorlib::Mono::Globalization::Unicode { struct Level2Map; };
namespace mscorlib::System { struct String; };
namespace mscorlib::Mono::Globalization::Unicode { struct CodePointIndexer; };
#include "System_Byte.h"
#include "System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "System_UInt32.h"
namespace mscorlib::System { struct UInt32; };

namespace mscorlib::Mono::Globalization::Unicode
{
	struct MSCompatUnicodeTable : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			int32_t MaxExpansionLength;
			uint8_t* ignorableFlags;
			uint8_t* categories;
			uint8_t* level1;
			uint8_t* level2;
			uint8_t* level3;
			uint8_t* cjkCHScategory;
			uint8_t* cjkCHTcategory;
			uint8_t* cjkJAcategory;
			uint8_t* cjkKOcategory;
			uint8_t* cjkCHSlv1;
			uint8_t* cjkCHTlv1;
			uint8_t* cjkJAlv1;
			uint8_t* cjkKOlv1;
			uint8_t* cjkKOlv2;
			IL2CPP::Array<wchar_t>* tailoringArr;
			IL2CPP::Array<mscorlib::Mono::Globalization::Unicode::TailoringInfo*>* tailoringInfos;
			mscorlib::System::Object* forLock;
			bool isReady;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static mscorlib::Mono::Globalization::Unicode::TailoringInfo* GetTailoringInfo(int32_t lcid);
		static void BuildTailoringTables(mscorlib::System::Globalization::CultureInfo* culture, mscorlib::Mono::Globalization::Unicode::TailoringInfo* t, IL2CPP::Array<mscorlib::Mono::Globalization::Unicode::Contraction*>& contractions, IL2CPP::Array<mscorlib::Mono::Globalization::Unicode::Level2Map*>& diacriticals);
		static void SetCJKReferences(mscorlib::System::String* name, mscorlib::Mono::Globalization::Unicode::CodePointIndexer& cjkIndexer, uint8_t& catTable, uint8_t& lv1Table, mscorlib::Mono::Globalization::Unicode::CodePointIndexer& lv2Indexer, uint8_t& lv2Table);
		static uint8_t Category(int32_t cp);
		static uint8_t Level1(int32_t cp);
		static uint8_t Level2(int32_t cp);
		static uint8_t Level3(int32_t cp);
		static bool IsIgnorable(int32_t cp, uint8_t flag);
		static bool IsIgnorableNonSpacing(int32_t cp);
		static int32_t ToKanaTypeInsensitive(int32_t i);
		static int32_t ToWidthCompat(int32_t i);
		static bool HasSpecialWeight(wchar_t c);
		static bool IsHalfWidthKana(wchar_t c);
		static bool IsHiragana(wchar_t c);
		static bool IsJapaneseSmallLetter(wchar_t c);
		static bool get_IsReady();
		static intptr_t GetResource(mscorlib::System::String* name);
		static uint32_t UInt32FromBytePtr(uint8_t* raw, uint32_t idx);
		static void _cctor();
		static void FillCJK(mscorlib::System::String* culture, mscorlib::Mono::Globalization::Unicode::CodePointIndexer& cjkIndexer, uint8_t& catTable, uint8_t& lv1Table, mscorlib::Mono::Globalization::Unicode::CodePointIndexer& lv2Indexer, uint8_t& lv2Table);
		static void FillCJKCore(mscorlib::System::String* culture, mscorlib::Mono::Globalization::Unicode::CodePointIndexer& cjkIndexer, uint8_t& catTable, uint8_t& lv1Table, mscorlib::Mono::Globalization::Unicode::CodePointIndexer& cjkLv2Indexer, uint8_t& lv2Table);
	};
}

