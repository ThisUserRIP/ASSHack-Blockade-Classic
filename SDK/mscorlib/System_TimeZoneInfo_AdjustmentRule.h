#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_TimeZoneInfo.h"
namespace mscorlib::System { struct TimeZoneInfo; };
#include "System_DateTime.h"
namespace mscorlib::System { struct DateTime; };
#include "System_TimeSpan.h"
namespace mscorlib::System { struct TimeSpan; };
#include "System_TimeZoneInfo_TransitionTime.h"
namespace mscorlib::System { struct TimeZoneInfo_TransitionTime; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Runtime::Serialization { struct SerializationInfo; };
#include "System_Runtime_Serialization_StreamingContext.h"
namespace mscorlib::System::Runtime::Serialization { struct StreamingContext; };

namespace mscorlib::System
{
	struct TimeZoneInfo_AdjustmentRule : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::DateTime m_dateStart;
		mscorlib::System::DateTime m_dateEnd;
		mscorlib::System::TimeSpan m_daylightDelta;
		mscorlib::System::TimeZoneInfo_TransitionTime m_daylightTransitionStart;
		mscorlib::System::TimeZoneInfo_TransitionTime m_daylightTransitionEnd;
		mscorlib::System::TimeSpan m_baseUtcOffsetDelta;
		mscorlib::System::DateTime get_DateStart();
		mscorlib::System::DateTime get_DateEnd();
		mscorlib::System::TimeSpan get_DaylightDelta();
		mscorlib::System::TimeZoneInfo_TransitionTime get_DaylightTransitionStart();
		mscorlib::System::TimeZoneInfo_TransitionTime get_DaylightTransitionEnd();
		bool Equals(mscorlib::System::TimeZoneInfo_AdjustmentRule* other);
		int32_t GetHashCode();
		void _ctor();
		static mscorlib::System::TimeZoneInfo_AdjustmentRule* CreateAdjustmentRule(mscorlib::System::DateTime dateStart, mscorlib::System::DateTime dateEnd, mscorlib::System::TimeSpan daylightDelta, mscorlib::System::TimeZoneInfo_TransitionTime daylightTransitionStart, mscorlib::System::TimeZoneInfo_TransitionTime daylightTransitionEnd);
		static mscorlib::System::TimeZoneInfo_AdjustmentRule* CreateAdjustmentRule(mscorlib::System::DateTime dateStart, mscorlib::System::DateTime dateEnd, mscorlib::System::TimeSpan daylightDelta, mscorlib::System::TimeZoneInfo_TransitionTime daylightTransitionStart, mscorlib::System::TimeZoneInfo_TransitionTime daylightTransitionEnd, mscorlib::System::TimeSpan baseUtcOffsetDelta);
		static void ValidateAdjustmentRule(mscorlib::System::DateTime dateStart, mscorlib::System::DateTime dateEnd, mscorlib::System::TimeSpan daylightDelta, mscorlib::System::TimeZoneInfo_TransitionTime daylightTransitionStart, mscorlib::System::TimeZoneInfo_TransitionTime daylightTransitionEnd);
		void System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(mscorlib::System::Object* sender);
		void System_Runtime_Serialization_ISerializable_GetObjectData(mscorlib::System::Runtime::Serialization::SerializationInfo* info, mscorlib::System::Runtime::Serialization::StreamingContext context);
		void _ctor(mscorlib::System::Runtime::Serialization::SerializationInfo* info, mscorlib::System::Runtime::Serialization::StreamingContext context);
	};
}

