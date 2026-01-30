#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::Microsoft::Win32 { struct UnsafeNativeMethods_ManifestEtw_EtwEnableCallback; };
#include "System_Runtime_InteropServices_GCHandle.h"
namespace mscorlib::System::Runtime::InteropServices { struct GCHandle; };
#include "System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "System_Diagnostics_Tracing_EventProvider_SessionInfo.h"
namespace mscorlib::System::Diagnostics::Tracing { struct EventProvider_SessionInfo; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "System_Guid.h"
namespace mscorlib::System { struct Guid; };
#include "System_Diagnostics_Tracing_EventProvider_WriteEventErrorCode.h"
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "Microsoft_Win32_UnsafeNativeMethods_ManifestEtw_EVENT_INFO_CLASS.h"
namespace mscorlib::Microsoft::Win32 { struct UnsafeNativeMethods_ManifestEtw_EVENT_FILTER_DESCRIPTOR; };
namespace mscorlib::Microsoft::Win32 { struct UnsafeNativeMethods_ManifestEtw_EVENT_FILTER_DESCRIPTOR; };
#include "System_Diagnostics_Tracing_ControllerCommand.h"
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct IDictionary_2; };
#include "System_Diagnostics_Tracing_EventLevel.h"
#include "System_Diagnostics_Tracing_EventKeywords.h"
namespace mscorlib::System { template <typename T1, typename T2> struct Tuple_2; };
namespace mscorlib::System { template <typename T1, typename T2> struct Action_2; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Diagnostics::Tracing { struct EventProvider_EventData; };
namespace mscorlib::System::Diagnostics::Tracing { struct EventProvider_EventData; };
namespace mscorlib::System { struct UInt32; };
namespace mscorlib::System { struct UInt32; };
namespace mscorlib::System::Diagnostics::Tracing { struct EventDescriptor; };
namespace mscorlib::System::Diagnostics::Tracing { struct EventDescriptor; };
#include "System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "System_UInt32.h"

namespace mscorlib::System::Diagnostics::Tracing
{
	struct EventProvider : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::Microsoft::Win32::UnsafeNativeMethods_ManifestEtw_EtwEnableCallback* m_etwCallback;
		mscorlib::System::Runtime::InteropServices::GCHandle m_thisGCHandle;
		int64_t m_regHandle;
		uint8_t m_level;
		int64_t m_anyKeywordMask;
		int64_t m_allKeywordMask;
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::Diagnostics::Tracing::EventProvider_SessionInfo>* m_liveSessions;
		bool m_enabled;
		mscorlib::System::Guid m_providerId;
		bool m_disposed;
		struct StaticFields
		{
			bool m_setInformationMissing;
			mscorlib::System::Diagnostics::Tracing::EventProvider_WriteEventErrorCode s_returnCode;
			IL2CPP::Array<int32_t>* nibblebits;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		void Register(mscorlib::System::Guid providerGuid);
		int32_t SetInformation(mscorlib::Microsoft::Win32::UnsafeNativeMethods_ManifestEtw_EVENT_INFO_CLASS eventInfoClass, void* data, int32_t dataSize);
		void Dispose();
		void Dispose(bool disposing);
		void Finalize();
		void Deregister();
		static void EtwEnableCallBack(mscorlib::System::Guid& sourceId, int32_t controlCode, uint8_t setLevel, int64_t anyKeyword, int64_t allKeyword, mscorlib::Microsoft::Win32::UnsafeNativeMethods_ManifestEtw_EVENT_FILTER_DESCRIPTOR* filterData, void* callbackContext);
		void EtwEnableCallBackImpl(int32_t controlCode, uint8_t setLevel, int64_t anyKeyword, int64_t allKeyword, mscorlib::Microsoft::Win32::UnsafeNativeMethods_ManifestEtw_EVENT_FILTER_DESCRIPTOR* filterData);
		void OnControllerCommand(mscorlib::System::Diagnostics::Tracing::ControllerCommand command, mscorlib::System::Collections::Generic::IDictionary_2<mscorlib::System::String, mscorlib::System::String>* arguments, int32_t sessionId, int32_t etwSessionId);
		mscorlib::System::Diagnostics::Tracing::EventLevel get_Level();
		mscorlib::System::Diagnostics::Tracing::EventKeywords get_MatchAnyKeyword();
		static int32_t FindNull(IL2CPP::Array<uint8_t>* buffer, int32_t idx);
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::Tuple_2<mscorlib::System::Diagnostics::Tracing::EventProvider_SessionInfo, mscorlib::System::Boolean>>* GetSessions();
		static void GetSessionInfoCallback(int32_t etwSessionId, int64_t matchAllKeywords, mscorlib::System::Collections::Generic::List_1<mscorlib::System::Diagnostics::Tracing::EventProvider_SessionInfo>& sessionList);
		void GetSessionInfo(mscorlib::System::Action_2<mscorlib::System::Int32, mscorlib::System::Int64>* action);
		static int32_t IndexOfSessionInList(mscorlib::System::Collections::Generic::List_1<mscorlib::System::Diagnostics::Tracing::EventProvider_SessionInfo>* sessions, int32_t etwSessionId);
		bool GetDataFromController(int32_t etwSessionId, mscorlib::Microsoft::Win32::UnsafeNativeMethods_ManifestEtw_EVENT_FILTER_DESCRIPTOR* filterData, mscorlib::System::Diagnostics::Tracing::ControllerCommand& command, IL2CPP::Array<uint8_t>& data, int32_t& dataStart);
		bool IsEnabled();
		bool IsEnabled(uint8_t level, int64_t keywords);
		static mscorlib::System::Diagnostics::Tracing::EventProvider_WriteEventErrorCode GetLastWriteEventError();
		static void SetLastError(int32_t error);
		static mscorlib::System::Object* EncodeObject(mscorlib::System::Object& data, mscorlib::System::Diagnostics::Tracing::EventProvider_EventData& dataDescriptor, uint8_t& dataBuffer, uint32_t& totalEventSize);
		bool WriteEvent(mscorlib::System::Diagnostics::Tracing::EventDescriptor& eventDescriptor, mscorlib::System::Guid* activityID, mscorlib::System::Guid* childActivityID, IL2CPP::Array<mscorlib::System::Object*>* eventPayload);
		bool WriteEvent(mscorlib::System::Diagnostics::Tracing::EventDescriptor& eventDescriptor, mscorlib::System::Guid* activityID, mscorlib::System::Guid* childActivityID, int32_t dataCount, intptr_t data);
		bool WriteEventRaw(mscorlib::System::Diagnostics::Tracing::EventDescriptor& eventDescriptor, mscorlib::System::Guid* activityID, mscorlib::System::Guid* relatedActivityID, int32_t dataCount, intptr_t data);
		uint32_t EventUnregister();
		static int32_t bitcount(uint32_t n);
		static int32_t bitindex(uint32_t n);
		static void _cctor();
	};
}

