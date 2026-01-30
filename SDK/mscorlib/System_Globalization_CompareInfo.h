#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Globalization_CompareOptions.h"
namespace mscorlib::System { struct String; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::Globalization { struct SortVersion; };
namespace mscorlib::Mono::Globalization::Unicode { struct SimpleCollator; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Globalization { struct CultureInfo; };
#include "System_Runtime_Serialization_StreamingContext.h"
namespace mscorlib::System::Runtime::Serialization { struct StreamingContext; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Globalization { struct SortKey; };
#include "System_Int64.h"
namespace mscorlib::System { struct Int64; };

namespace mscorlib::System::Globalization
{
	struct CompareInfo : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* m_name;
		mscorlib::System::String* m_sortName;
		int32_t win32LCID;
		int32_t culture;
		mscorlib::System::Globalization::SortVersion* m_SortVersion;
		mscorlib::Mono::Globalization::Unicode::SimpleCollator* collator;
		struct StaticFields
		{
			mscorlib::System::Globalization::CompareOptions ValidIndexMaskOffFlags;
			mscorlib::System::Globalization::CompareOptions ValidCompareMaskOffFlags;
			mscorlib::System::Globalization::CompareOptions ValidHashCodeOfStringMaskOffFlags;
			int32_t LINGUISTIC_IGNORECASE_;
			int32_t NORM_IGNORECASE_;
			int32_t NORM_IGNOREKANATYPE_;
			int32_t LINGUISTIC_IGNOREDIACRITIC_;
			int32_t NORM_IGNORENONSPACE_;
			int32_t NORM_IGNORESYMBOLS_;
			int32_t NORM_IGNOREWIDTH_;
			int32_t SORT_STRINGSORT_;
			int32_t COMPARE_OPTIONS_ORDINAL;
			int32_t NORM_LINGUISTIC_CASING_;
			int32_t RESERVED_FIND_ASCII_STRING;
			int32_t SORT_VERSION_WHIDBEY;
			int32_t SORT_VERSION_V4;
			mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::Mono::Globalization::Unicode::SimpleCollator>* collators;
			bool managedCollation;
			bool managedCollationChecked;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(mscorlib::System::Globalization::CultureInfo* culture);
		static mscorlib::System::Globalization::CompareInfo* GetCompareInfo(mscorlib::System::String* name);
		void OnDeserializing(mscorlib::System::Runtime::Serialization::StreamingContext ctx);
		void OnDeserialized();
		void OnDeserialized(mscorlib::System::Runtime::Serialization::StreamingContext ctx);
		void OnSerializing(mscorlib::System::Runtime::Serialization::StreamingContext ctx);
		void System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(mscorlib::System::Object* sender);
		mscorlib::System::String* get_Name();
		int32_t Compare(mscorlib::System::String* string1, mscorlib::System::String* string2);
		int32_t Compare(mscorlib::System::String* string1, mscorlib::System::String* string2, mscorlib::System::Globalization::CompareOptions options);
		int32_t Compare(mscorlib::System::String* string1, int32_t offset1, int32_t length1, mscorlib::System::String* string2, int32_t offset2, int32_t length2, mscorlib::System::Globalization::CompareOptions options);
		static int32_t CompareOrdinal(mscorlib::System::String* string1, int32_t offset1, int32_t length1, mscorlib::System::String* string2, int32_t offset2, int32_t length2);
		bool IsPrefix(mscorlib::System::String* source, mscorlib::System::String* prefix, mscorlib::System::Globalization::CompareOptions options);
		bool IsSuffix(mscorlib::System::String* source, mscorlib::System::String* suffix, mscorlib::System::Globalization::CompareOptions options);
		int32_t IndexOf(mscorlib::System::String* source, mscorlib::System::String* value, mscorlib::System::Globalization::CompareOptions options);
		int32_t IndexOf(mscorlib::System::String* source, mscorlib::System::String* value, int32_t startIndex, int32_t count, mscorlib::System::Globalization::CompareOptions options);
		int32_t LastIndexOf(mscorlib::System::String* source, mscorlib::System::String* value, mscorlib::System::Globalization::CompareOptions options);
		int32_t LastIndexOf(mscorlib::System::String* source, mscorlib::System::String* value, int32_t startIndex, int32_t count, mscorlib::System::Globalization::CompareOptions options);
		mscorlib::System::Globalization::SortKey* GetSortKey(mscorlib::System::String* source, mscorlib::System::Globalization::CompareOptions options);
		mscorlib::System::Globalization::SortKey* CreateSortKey(mscorlib::System::String* source, mscorlib::System::Globalization::CompareOptions options);
		bool Equals(mscorlib::System::Object* value);
		int32_t GetHashCode();
		int32_t GetHashCodeOfString(mscorlib::System::String* source, mscorlib::System::Globalization::CompareOptions options);
		int32_t GetHashCodeOfString(mscorlib::System::String* source, mscorlib::System::Globalization::CompareOptions options, bool forceRandomizedHashing, int64_t additionalEntropy);
		mscorlib::System::String* ToString();
		static bool get_UseManagedCollation();
		mscorlib::Mono::Globalization::Unicode::SimpleCollator* GetCollator();
		mscorlib::System::Globalization::SortKey* CreateSortKeyCore(mscorlib::System::String* source, mscorlib::System::Globalization::CompareOptions options);
		int32_t internal_index_switch(mscorlib::System::String* s1, int32_t sindex, int32_t count, mscorlib::System::String* s2, mscorlib::System::Globalization::CompareOptions opt, bool first);
		int32_t internal_compare_switch(mscorlib::System::String* str1, int32_t offset1, int32_t length1, mscorlib::System::String* str2, int32_t offset2, int32_t length2, mscorlib::System::Globalization::CompareOptions options);
		int32_t internal_compare_managed(mscorlib::System::String* str1, int32_t offset1, int32_t length1, mscorlib::System::String* str2, int32_t offset2, int32_t length2, mscorlib::System::Globalization::CompareOptions options);
		int32_t internal_index_managed(mscorlib::System::String* s1, int32_t sindex, int32_t count, mscorlib::System::String* s2, mscorlib::System::Globalization::CompareOptions opt, bool first);
		void assign_sortkey(mscorlib::System::Object* key, mscorlib::System::String* source, mscorlib::System::Globalization::CompareOptions options);
		int32_t internal_compare(mscorlib::System::String* str1, int32_t offset1, int32_t length1, mscorlib::System::String* str2, int32_t offset2, int32_t length2, mscorlib::System::Globalization::CompareOptions options);
		int32_t internal_index(mscorlib::System::String* source, int32_t sindex, int32_t count, mscorlib::System::String* value, mscorlib::System::Globalization::CompareOptions options, bool first);
		void _ctor();
	};
}

