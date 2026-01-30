#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Globalization { struct CultureInfo; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };

namespace mscorlib::System::Globalization
{
	struct RegionInfo : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t regionId;
		mscorlib::System::String* iso2Name;
		mscorlib::System::String* iso3Name;
		mscorlib::System::String* win3Name;
		mscorlib::System::String* englishName;
		mscorlib::System::String* nativeName;
		mscorlib::System::String* currencySymbol;
		mscorlib::System::String* isoCurrencySymbol;
		mscorlib::System::String* currencyEnglishName;
		mscorlib::System::String* currencyNativeName;
		struct StaticFields
		{
			mscorlib::System::Globalization::RegionInfo* currentRegion;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static mscorlib::System::Globalization::RegionInfo* get_CurrentRegion();
		void _ctor(int32_t culture);
		void _ctor(mscorlib::System::String* name);
		void _ctor(mscorlib::System::Globalization::CultureInfo* ci);
		bool GetByTerritory(mscorlib::System::Globalization::CultureInfo* ci);
		bool construct_internal_region_from_name(mscorlib::System::String* name);
		mscorlib::System::String* get_CurrencyEnglishName();
		mscorlib::System::String* get_CurrencySymbol();
		mscorlib::System::String* get_DisplayName();
		mscorlib::System::String* get_EnglishName();
		int32_t get_GeoId();
		bool get_IsMetric();
		mscorlib::System::String* get_ISOCurrencySymbol();
		mscorlib::System::String* get_NativeName();
		mscorlib::System::String* get_CurrencyNativeName();
		mscorlib::System::String* get_Name();
		mscorlib::System::String* get_ThreeLetterISORegionName();
		mscorlib::System::String* get_ThreeLetterWindowsRegionName();
		mscorlib::System::String* get_TwoLetterISORegionName();
		bool Equals(mscorlib::System::Object* value);
		int32_t GetHashCode();
		mscorlib::System::String* ToString();
		static void ClearCachedData();
	};
}

