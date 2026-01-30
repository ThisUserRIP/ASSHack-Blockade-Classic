#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct Object; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::Globalization { struct NumberFormatInfo; };
namespace mscorlib::System::Globalization { struct DateTimeFormatInfo; };
namespace mscorlib::System::Globalization { struct TextInfo; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Globalization { struct CompareInfo; };
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Globalization { struct Calendar; };
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace mscorlib::System::Globalization { struct CultureData; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
namespace mscorlib::System::Globalization { struct CultureInfo; };
#include "System_Globalization_CultureTypes.h"
#include "System_Globalization_CultureInfo_Data.h"
namespace mscorlib::System::Globalization { struct CultureInfo_Data; };
#include "System_Void.h"
namespace mscorlib::System { struct Exception; };

namespace mscorlib::System::Globalization
{
	struct CultureInfo : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool m_isReadOnly;
		int32_t cultureID;
		int32_t parent_lcid;
		int32_t datetime_index;
		int32_t number_index;
		int32_t default_calendar_type;
		bool m_useUserOverride;
		mscorlib::System::Globalization::NumberFormatInfo* numInfo;
		mscorlib::System::Globalization::DateTimeFormatInfo* dateTimeInfo;
		mscorlib::System::Globalization::TextInfo* textInfo;
		mscorlib::System::String* m_name;
		mscorlib::System::String* englishname;
		mscorlib::System::String* nativename;
		mscorlib::System::String* iso3lang;
		mscorlib::System::String* iso2lang;
		mscorlib::System::String* win3lang;
		mscorlib::System::String* territory;
		IL2CPP::Array<mscorlib::System::String*>* native_calendar_names;
		mscorlib::System::Globalization::CompareInfo* compareInfo;
		void* textinfo_data;
		int32_t m_dataItem;
		mscorlib::System::Globalization::Calendar* calendar;
		mscorlib::System::Globalization::CultureInfo* parent_culture;
		bool constructed;
		IL2CPP::Array<uint8_t>* cached_serialized_form;
		mscorlib::System::Globalization::CultureData* m_cultureData;
		bool m_isInherited;
		struct StaticFields
		{
			mscorlib::System::Globalization::CultureInfo* invariant_culture_info;
			mscorlib::System::Object* shared_table_lock;
			mscorlib::System::Globalization::CultureInfo* default_current_culture;
			int32_t InvariantCultureId;
			int32_t CalendarTypeBits;
			mscorlib::System::String* MSG_READONLY;
			mscorlib::System::Globalization::CultureInfo* s_DefaultThreadCurrentUICulture;
			mscorlib::System::Globalization::CultureInfo* s_DefaultThreadCurrentCulture;
			mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::Int32, mscorlib::System::Globalization::CultureInfo>* shared_by_number;
			mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::Globalization::CultureInfo>* shared_by_name;
			bool IsTaiwanSku;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static mscorlib::System::Globalization::CultureInfo* get_InvariantCulture();
		static mscorlib::System::Globalization::CultureInfo* get_CurrentCulture();
		static mscorlib::System::Globalization::CultureInfo* get_CurrentUICulture();
		static mscorlib::System::Globalization::CultureInfo* ConstructCurrentCulture();
		static mscorlib::System::Globalization::CultureInfo* ConstructCurrentUICulture();
		mscorlib::System::String* get_Territory();
		int32_t get_LCID();
		mscorlib::System::String* get_Name();
		mscorlib::System::Globalization::Calendar* get_Calendar();
		mscorlib::System::Globalization::CultureInfo* get_Parent();
		mscorlib::System::Globalization::TextInfo* get_TextInfo();
		mscorlib::System::Object* Clone();
		bool Equals(mscorlib::System::Object* value);
		static IL2CPP::Array<mscorlib::System::Globalization::CultureInfo*>* GetCultures(mscorlib::System::Globalization::CultureTypes types);
		mscorlib::System::Globalization::CultureInfo_Data GetTextInfoData();
		int32_t GetHashCode();
		static mscorlib::System::Globalization::CultureInfo* ReadOnly(mscorlib::System::Globalization::CultureInfo* ci);
		mscorlib::System::String* ToString();
		mscorlib::System::Globalization::CompareInfo* get_CompareInfo();
		bool get_IsNeutralCulture();
		void CheckNeutral();
		mscorlib::System::Globalization::NumberFormatInfo* get_NumberFormat();
		void set_NumberFormat(mscorlib::System::Globalization::NumberFormatInfo* value);
		mscorlib::System::Globalization::DateTimeFormatInfo* get_DateTimeFormat();
		void set_DateTimeFormat(mscorlib::System::Globalization::DateTimeFormatInfo* value);
		mscorlib::System::String* get_EnglishName();
		bool get_IsReadOnly();
		mscorlib::System::Object* GetFormat(mscorlib::System::Type* formatType);
		void Construct();
		bool construct_internal_locale_from_lcid(int32_t lcid);
		bool construct_internal_locale_from_name(mscorlib::System::String* name);
		static mscorlib::System::String* get_current_locale_name();
		static IL2CPP::Array<mscorlib::System::Globalization::CultureInfo*>* internal_get_cultures(bool neutral, bool specific, bool installed);
		void ConstructInvariant(bool read_only);
		mscorlib::System::Globalization::TextInfo* CreateTextInfo(bool readOnly);
		void _ctor(int32_t culture);
		void _ctor(int32_t culture, bool useUserOverride);
		void _ctor(int32_t culture, bool useUserOverride, bool read_only);
		void _ctor(mscorlib::System::String* name);
		void _ctor(mscorlib::System::String* name, bool useUserOverride);
		void _ctor(mscorlib::System::String* name, bool useUserOverride, bool read_only);
		void _ctor();
		static void insert_into_shared_tables(mscorlib::System::Globalization::CultureInfo* c);
		static mscorlib::System::Globalization::CultureInfo* GetCultureInfo(int32_t culture);
		static mscorlib::System::Globalization::CultureInfo* GetCultureInfo(mscorlib::System::String* name);
		static mscorlib::System::Globalization::CultureInfo* CreateCulture(mscorlib::System::String* name, bool reference);
		static mscorlib::System::Globalization::CultureInfo* CreateSpecificCulture(mscorlib::System::String* name);
		static mscorlib::System::Globalization::CultureInfo* CreateSpecificCultureFromNeutral(mscorlib::System::String* name);
		int32_t get_CalendarType();
		static mscorlib::System::Globalization::Calendar* CreateCalendar(int32_t calendarType);
		static mscorlib::System::Exception* CreateNotFoundException(mscorlib::System::String* name);
		static mscorlib::System::Globalization::CultureInfo* get_DefaultThreadCurrentCulture();
		static mscorlib::System::Globalization::CultureInfo* get_DefaultThreadCurrentUICulture();
		mscorlib::System::String* get_SortName();
		static mscorlib::System::Globalization::CultureInfo* get_UserDefaultUICulture();
		static mscorlib::System::Globalization::CultureInfo* get_UserDefaultCulture();
		static void CheckDomainSafetyObject(mscorlib::System::Object* obj, mscorlib::System::Object* container);
		bool get_HasInvariantCultureName();
		static bool VerifyCultureName(mscorlib::System::String* cultureName, bool throwException);
		static bool VerifyCultureName(mscorlib::System::Globalization::CultureInfo* culture, bool throwException);
		static void _cctor();
	};
}

