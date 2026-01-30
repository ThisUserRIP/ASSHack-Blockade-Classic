#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_TimeZoneInfo.h"
namespace mscorlib::System { struct TimeZoneInfo; };
#include "System_DateTime.h"
namespace mscorlib::System { struct DateTime; };
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "System_DayOfWeek.h"
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct Object; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Runtime::Serialization { struct SerializationInfo; };
#include "System_Runtime_Serialization_StreamingContext.h"
namespace mscorlib::System::Runtime::Serialization { struct StreamingContext; };

namespace mscorlib::System
{
	struct TimeZoneInfo_TransitionTime
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::DateTime m_timeOfDay;
		uint8_t m_month;
		uint8_t m_week;
		uint8_t m_day;
		mscorlib::System::DayOfWeek m_dayOfWeek;
		bool m_isFixedDateRule;
		mscorlib::System::DateTime get_TimeOfDay();
		int32_t get_Month();
		int32_t get_Week();
		int32_t get_Day();
		mscorlib::System::DayOfWeek get_DayOfWeek();
		bool get_IsFixedDateRule();
		bool Equals(mscorlib::System::Object* obj);
		static bool op_Inequality(mscorlib::System::TimeZoneInfo_TransitionTime t1, mscorlib::System::TimeZoneInfo_TransitionTime t2);
		bool Equals(mscorlib::System::TimeZoneInfo_TransitionTime other);
		int32_t GetHashCode();
		static mscorlib::System::TimeZoneInfo_TransitionTime CreateFixedDateRule(mscorlib::System::DateTime timeOfDay, int32_t month, int32_t day);
		static mscorlib::System::TimeZoneInfo_TransitionTime CreateFloatingDateRule(mscorlib::System::DateTime timeOfDay, int32_t month, int32_t week, mscorlib::System::DayOfWeek dayOfWeek);
		static mscorlib::System::TimeZoneInfo_TransitionTime CreateTransitionTime(mscorlib::System::DateTime timeOfDay, int32_t month, int32_t week, int32_t day, mscorlib::System::DayOfWeek dayOfWeek, bool isFixedDateRule);
		static void ValidateTransitionTime(mscorlib::System::DateTime timeOfDay, int32_t month, int32_t week, int32_t day, mscorlib::System::DayOfWeek dayOfWeek);
		void System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(mscorlib::System::Object* sender);
		void System_Runtime_Serialization_ISerializable_GetObjectData(mscorlib::System::Runtime::Serialization::SerializationInfo* info, mscorlib::System::Runtime::Serialization::StreamingContext context);
		void _ctor(mscorlib::System::Runtime::Serialization::SerializationInfo* info, mscorlib::System::Runtime::Serialization::StreamingContext context);
	};
	bool operator!=(mscorlib::System::TimeZoneInfo_TransitionTime& t1, mscorlib::System::TimeZoneInfo_TransitionTime& t2);
}

