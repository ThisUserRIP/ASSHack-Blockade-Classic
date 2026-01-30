#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_TimeSpan.h"
namespace mscorlib::System { struct TimeSpan; };
namespace mscorlib::System { struct String; };
#include "System_DateTime.h"
namespace mscorlib::System { struct DateTime; };
namespace mscorlib::System { struct TimeType; };
#include "System_Collections_Generic_KeyValuePair_2.h"
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct KeyValuePair_2; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct TimeZoneInfo_AdjustmentRule; };
namespace mscorlib::Microsoft::Win32 { struct RegistryKey; };
namespace mscorlib::System::Collections::ObjectModel { template <typename T> struct ReadOnlyCollection_1; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct Int64; };
namespace mscorlib::System { struct Int64; };
#include "System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
namespace mscorlib::System { struct TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION; };
namespace mscorlib::System { struct TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION; };
#include "System_UInt16.h"
namespace mscorlib::System { struct UInt16; };
namespace mscorlib::System { struct TimeZoneInfo_TIME_ZONE_INFORMATION; };
namespace mscorlib::System { struct TimeZoneInfo_TIME_ZONE_INFORMATION; };
#include "System_TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION.h"
namespace mscorlib::System { struct TimeZoneInfo_TransitionTime; };
namespace mscorlib::System { struct TimeZoneInfo_TransitionTime; };
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Int64.h"
#include "System_DateTimeKind.h"
#include "System_TimeZoneInfoOptions.h"
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Runtime::Serialization { struct SerializationInfo; };
#include "System_Runtime_Serialization_StreamingContext.h"
namespace mscorlib::System::Runtime::Serialization { struct StreamingContext; };
#include "System_TimeZoneInfo_TransitionTime.h"
namespace mscorlib::System::IO { struct Stream; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };

namespace mscorlib::System
{
	struct TimeZoneInfo : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::TimeSpan baseUtcOffset;
		mscorlib::System::String* daylightDisplayName;
		mscorlib::System::String* displayName;
		mscorlib::System::String* id;
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::Collections::Generic::KeyValuePair_2<mscorlib::System::DateTime, mscorlib::System::TimeType>>* transitions;
		mscorlib::System::String* standardDisplayName;
		bool supportsDaylightSavingTime;
		IL2CPP::Array<mscorlib::System::TimeZoneInfo_AdjustmentRule*>* adjustmentRules;
		struct StaticFields
		{
			mscorlib::System::TimeZoneInfo* local;
			bool readlinkNotFound;
			mscorlib::System::TimeZoneInfo* utc;
			mscorlib::System::String* timeZoneDirectory;
			mscorlib::Microsoft::Win32::RegistryKey* timeZoneKey;
			mscorlib::Microsoft::Win32::RegistryKey* localZoneKey;
			mscorlib::System::Collections::ObjectModel::ReadOnlyCollection_1<mscorlib::System::TimeZoneInfo>* systemTimeZones;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static bool UtcOffsetOutOfRange(mscorlib::System::TimeSpan offset);
		static mscorlib::System::Collections::Generic::List_1<mscorlib::System::TimeZoneInfo_AdjustmentRule>* CreateAdjustmentRule(int32_t year, IL2CPP::Array<int64_t>& data, IL2CPP::Array<mscorlib::System::String*>& names, mscorlib::System::String* standardNameCurrentYear, mscorlib::System::String* daylightNameCurrentYear);
		static mscorlib::System::TimeZoneInfo* CreateLocalUnity();
		static uint32_t EnumDynamicTimeZoneInformation(uint32_t dwIndex, mscorlib::System::TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION& lpTimeZoneInformation);
		static uint32_t GetDynamicTimeZoneInformation(mscorlib::System::TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION& pTimeZoneInformation);
		static uint32_t GetDynamicTimeZoneInformationWin32(mscorlib::System::TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION& pTimeZoneInformation);
		static uint32_t GetDynamicTimeZoneInformationEffectiveYears(mscorlib::System::TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION& lpTimeZoneInformation, uint32_t& FirstYear, uint32_t& LastYear);
		static bool GetTimeZoneInformationForYear(uint16_t wYear, mscorlib::System::TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION& pdtzi, mscorlib::System::TimeZoneInfo_TIME_ZONE_INFORMATION& ptzi);
		static mscorlib::System::TimeZoneInfo_AdjustmentRule* CreateAdjustmentRuleFromTimeZoneInformation(mscorlib::System::TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION& timeZoneInformation, mscorlib::System::DateTime startDate, mscorlib::System::DateTime endDate, int32_t defaultBaseUtcOffset);
		static bool TransitionTimeFromTimeZoneInformation(mscorlib::System::TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION timeZoneInformation, mscorlib::System::TimeZoneInfo_TransitionTime& transitionTime, bool readStartDate);
		static mscorlib::System::TimeZoneInfo* TryCreateTimeZone(mscorlib::System::TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION timeZoneInformation);
		static mscorlib::System::TimeZoneInfo* GetLocalTimeZoneInfoWinRTFallback();
		static mscorlib::System::String* GetLocalTimeZoneKeyNameWin32Fallback();
		static mscorlib::System::TimeZoneInfo* FindSystemTimeZoneByIdWinRTFallback(mscorlib::System::String* id);
		static mscorlib::System::Collections::Generic::List_1<mscorlib::System::TimeZoneInfo>* GetSystemTimeZonesWinRTFallback();
		mscorlib::System::TimeSpan get_BaseUtcOffset();
		mscorlib::System::String* get_DisplayName();
		mscorlib::System::String* get_Id();
		static mscorlib::System::TimeZoneInfo* get_Local();
		static int32_t readlink(mscorlib::System::String* path, IL2CPP::Array<uint8_t>* buffer, int32_t buflen);
		static mscorlib::System::String* readlink(mscorlib::System::String* path);
		static bool TryGetNameFromPath(mscorlib::System::String* path, mscorlib::System::String& name);
		static mscorlib::System::TimeZoneInfo* CreateLocal();
		static mscorlib::System::TimeZoneInfo* FindSystemTimeZoneByIdCore(mscorlib::System::String* id);
		static void GetSystemTimeZonesCore(mscorlib::System::Collections::Generic::List_1<mscorlib::System::TimeZoneInfo>* systemTimeZones);
		bool get_SupportsDaylightSavingTime();
		static mscorlib::System::TimeZoneInfo* get_Utc();
		static mscorlib::System::String* get_TimeZoneDirectory();
		static bool get_IsWindows();
		static mscorlib::System::String* TrimSpecial(mscorlib::System::String* str);
		static mscorlib::Microsoft::Win32::RegistryKey* get_TimeZoneKey();
		static mscorlib::Microsoft::Win32::RegistryKey* get_LocalZoneKey();
		static bool TryAddTicks(mscorlib::System::DateTime date, int64_t ticks, mscorlib::System::DateTime& result, mscorlib::System::DateTimeKind kind);
		static mscorlib::System::DateTime ConvertTime(mscorlib::System::DateTime dateTime, mscorlib::System::TimeZoneInfo* sourceTimeZone, mscorlib::System::TimeZoneInfo* destinationTimeZone);
		mscorlib::System::DateTime ConvertTimeFromUtc(mscorlib::System::DateTime dateTime);
		static mscorlib::System::DateTime ConvertTimeFromUtc(mscorlib::System::DateTime dateTime, mscorlib::System::TimeZoneInfo* destinationTimeZone);
		static mscorlib::System::DateTime ConvertTimeToUtc(mscorlib::System::DateTime dateTime, mscorlib::System::TimeZoneInfoOptions flags);
		static mscorlib::System::DateTime ConvertTimeToUtc(mscorlib::System::DateTime dateTime, mscorlib::System::TimeZoneInfo* sourceTimeZone);
		static mscorlib::System::DateTime ConvertTimeToUtc(mscorlib::System::DateTime dateTime, mscorlib::System::TimeZoneInfo* sourceTimeZone, mscorlib::System::TimeZoneInfoOptions flags);
		static mscorlib::System::TimeSpan GetDateTimeNowUtcOffsetFromUtc(mscorlib::System::DateTime time, bool& isAmbiguousLocalDst);
		static mscorlib::System::TimeZoneInfo* CreateCustomTimeZone(mscorlib::System::String* id, mscorlib::System::TimeSpan baseUtcOffset, mscorlib::System::String* displayName, mscorlib::System::String* standardDisplayName);
		static mscorlib::System::TimeZoneInfo* CreateCustomTimeZone(mscorlib::System::String* id, mscorlib::System::TimeSpan baseUtcOffset, mscorlib::System::String* displayName, mscorlib::System::String* standardDisplayName, mscorlib::System::String* daylightDisplayName, IL2CPP::Array<mscorlib::System::TimeZoneInfo_AdjustmentRule*>* adjustmentRules);
		static mscorlib::System::TimeZoneInfo* CreateCustomTimeZone(mscorlib::System::String* id, mscorlib::System::TimeSpan baseUtcOffset, mscorlib::System::String* displayName, mscorlib::System::String* standardDisplayName, mscorlib::System::String* daylightDisplayName, IL2CPP::Array<mscorlib::System::TimeZoneInfo_AdjustmentRule*>* adjustmentRules, bool disableDaylightSavingTime);
		bool Equals(mscorlib::System::Object* obj);
		bool Equals(mscorlib::System::TimeZoneInfo* other);
		static mscorlib::System::TimeZoneInfo* FindSystemTimeZoneById(mscorlib::System::String* id);
		static mscorlib::System::TimeZoneInfo* FindSystemTimeZoneByFileName(mscorlib::System::String* id, mscorlib::System::String* filepath);
		static mscorlib::System::TimeZoneInfo* FromRegistryKey(mscorlib::System::String* id, mscorlib::Microsoft::Win32::RegistryKey* key);
		static void ParseRegTzi(mscorlib::System::Collections::Generic::List_1<mscorlib::System::TimeZoneInfo_AdjustmentRule>* adjustmentRules, int32_t start_year, int32_t end_year, IL2CPP::Array<uint8_t>* buffer);
		IL2CPP::Array<mscorlib::System::TimeZoneInfo_AdjustmentRule*>* GetAdjustmentRules();
		int32_t GetHashCode();
		void System_Runtime_Serialization_ISerializable_GetObjectData(mscorlib::System::Runtime::Serialization::SerializationInfo* info, mscorlib::System::Runtime::Serialization::StreamingContext context);
		static mscorlib::System::Collections::ObjectModel::ReadOnlyCollection_1<mscorlib::System::TimeZoneInfo>* GetSystemTimeZones();
		mscorlib::System::TimeSpan GetUtcOffset(mscorlib::System::DateTime dateTime);
		mscorlib::System::TimeSpan GetUtcOffset(mscorlib::System::DateTime dateTime, bool& isDST, bool forOffset);
		static mscorlib::System::TimeSpan GetUtcOffsetHelper(mscorlib::System::DateTime dateTime, mscorlib::System::TimeZoneInfo* tz, bool& isDST, bool forOffset);
		bool HasSameRules(mscorlib::System::TimeZoneInfo* other);
		bool IsAmbiguousTime(mscorlib::System::DateTime dateTime);
		bool IsAmbiguousLocalDstFromUtc(mscorlib::System::DateTime dateTime);
		bool IsInDST(mscorlib::System::TimeZoneInfo_AdjustmentRule* rule, mscorlib::System::DateTime dateTime);
		bool IsInDSTForYear(mscorlib::System::TimeZoneInfo_AdjustmentRule* rule, mscorlib::System::DateTime dateTime, int32_t year);
		bool IsInvalidTime(mscorlib::System::DateTime dateTime);
		void System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(mscorlib::System::Object* sender);
		static void Validate(mscorlib::System::String* id, mscorlib::System::TimeSpan baseUtcOffset, IL2CPP::Array<mscorlib::System::TimeZoneInfo_AdjustmentRule*>* adjustmentRules);
		mscorlib::System::String* ToString();
		void _ctor(mscorlib::System::Runtime::Serialization::SerializationInfo* info, mscorlib::System::Runtime::Serialization::StreamingContext context);
		void _ctor(mscorlib::System::String* id, mscorlib::System::TimeSpan baseUtcOffset, mscorlib::System::String* displayName, mscorlib::System::String* standardDisplayName, mscorlib::System::String* daylightDisplayName, IL2CPP::Array<mscorlib::System::TimeZoneInfo_AdjustmentRule*>* adjustmentRules, bool disableDaylightSavingTime);
		mscorlib::System::TimeZoneInfo_AdjustmentRule* GetApplicableRule(mscorlib::System::DateTime dateTime);
		bool TryGetTransitionOffset(mscorlib::System::DateTime dateTime, mscorlib::System::TimeSpan& offset, bool& isDst, bool forOffset);
		static mscorlib::System::DateTime TransitionPoint(mscorlib::System::TimeZoneInfo_TransitionTime transition, int32_t year);
		static IL2CPP::Array<mscorlib::System::TimeZoneInfo_AdjustmentRule*>* ValidateRules(mscorlib::System::Collections::Generic::List_1<mscorlib::System::TimeZoneInfo_AdjustmentRule>* adjustmentRules);
		static mscorlib::System::TimeZoneInfo* BuildFromStream(mscorlib::System::String* id, mscorlib::System::IO::Stream* stream);
		static bool ValidTZFile(IL2CPP::Array<uint8_t>* buffer, int32_t length);
		static int32_t SwapInt32(int32_t i);
		static int32_t ReadBigEndianInt32(IL2CPP::Array<uint8_t>* buffer, int32_t start);
		static mscorlib::System::TimeZoneInfo* ParseTZBuffer(mscorlib::System::String* id, IL2CPP::Array<uint8_t>* buffer, int32_t length);
		static mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::Int32, mscorlib::System::String>* ParseAbbreviations(IL2CPP::Array<uint8_t>* buffer, int32_t index, int32_t count);
		static mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::Int32, mscorlib::System::TimeType>* ParseTimesTypes(IL2CPP::Array<uint8_t>* buffer, int32_t index, int32_t count, mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::Int32, mscorlib::System::String>* abbreviations);
		static mscorlib::System::Collections::Generic::List_1<mscorlib::System::Collections::Generic::KeyValuePair_2<mscorlib::System::DateTime, mscorlib::System::TimeType>>* ParseTransitions(IL2CPP::Array<uint8_t>* buffer, int32_t index, int32_t count, mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::Int32, mscorlib::System::TimeType>* time_types);
		static mscorlib::System::DateTime DateTimeFromUnixTime(int64_t unix_time);
		static mscorlib::System::TimeSpan GetLocalUtcOffset(mscorlib::System::DateTime dateTime, mscorlib::System::TimeZoneInfoOptions flags);
		mscorlib::System::TimeSpan GetUtcOffset(mscorlib::System::DateTime dateTime, mscorlib::System::TimeZoneInfoOptions flags);
		static mscorlib::System::TimeSpan GetUtcOffsetFromUtc(mscorlib::System::DateTime time, mscorlib::System::TimeZoneInfo* zone, bool& isDaylightSavings, bool& isAmbiguousLocalDst);
		void _ctor();
	};
}

