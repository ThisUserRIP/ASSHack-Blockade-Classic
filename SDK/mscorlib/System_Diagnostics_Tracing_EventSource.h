#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace mscorlib::System { struct String; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Guid.h"
namespace mscorlib::System { struct Guid; };
#include "System_Diagnostics_Tracing_EventSource_EventMetadata.h"
namespace mscorlib::System::Diagnostics::Tracing { struct EventSource_EventMetadata; };
namespace mscorlib::System::Diagnostics::Tracing { struct EventCommandEventArgs; };
namespace mscorlib::System { template <typename TEventArgs> struct EventHandler_1; };
#include "System_Diagnostics_Tracing_EventSourceSettings.h"
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Diagnostics_Tracing_EventLevel.h"
#include "System_Diagnostics_Tracing_EventKeywords.h"
namespace mscorlib::System::Diagnostics::Tracing { struct EventDispatcher; };
namespace mscorlib::System::Diagnostics::Tracing { struct EventSource_OverideEventProvider; };
namespace mscorlib::System { struct Exception; };
#include "System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "System_Diagnostics_Tracing_SessionMask.h"
namespace mscorlib::System::Diagnostics::Tracing { struct SessionMask; };
namespace mscorlib::System::Diagnostics::Tracing { struct EtwSession; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "System_Int64.h"
namespace mscorlib::System { struct Int64; };
namespace mscorlib::System { template <typename T> struct Action_1; };
namespace mscorlib::System::Diagnostics::Tracing { struct ActivityTracker; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Diagnostics::Tracing { struct EventSourceOptions; };
namespace mscorlib::System::Diagnostics::Tracing { struct EventSourceOptions; };
namespace mscorlib::System::Diagnostics::Tracing { struct TraceLoggingEventTypes; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Diagnostics::Tracing { struct EventSource_EventData; };
namespace mscorlib::System::Diagnostics::Tracing { struct EventSource_EventData; };
namespace mscorlib::System::Runtime::InteropServices { struct GCHandle; };
namespace mscorlib::System::Runtime::InteropServices { struct GCHandle; };
#include "System_Char.h"
namespace mscorlib::System { struct Char; };
namespace mscorlib::System::Diagnostics::Tracing { struct NameInfo; };
namespace mscorlib::System::Diagnostics::Tracing { struct EventDescriptor; };
namespace mscorlib::System::Diagnostics::Tracing { struct EventDescriptor; };
#include "System_Diagnostics_Tracing_EventChannel.h"
namespace mscorlib::System::Diagnostics::Tracing { struct EventListener; };
#include "System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "System_Diagnostics_Tracing_EventManifestOptions.h"
namespace mscorlib::System::Reflection { struct ParameterInfo; };
namespace mscorlib::System::Diagnostics::Tracing { struct EventWrittenEventArgs; };
#include "System_Diagnostics_Tracing_EventOpcode.h"
#include "System_Diagnostics_Tracing_EventCommand.h"
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct IDictionary_2; };
namespace mscorlib::System { struct Attribute; };
namespace mscorlib::System::Reflection { struct MemberInfo; };
namespace mscorlib::System::Diagnostics::Tracing { struct ManifestBuilder; };
namespace mscorlib::System::Reflection { struct FieldInfo; };
namespace mscorlib::System::Diagnostics::Tracing { struct EventAttribute; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
namespace mscorlib::System::Reflection { struct MethodInfo; };

namespace mscorlib::System::Diagnostics::Tracing
{
	struct EventSource : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<uint8_t>* providerMetadata;
		mscorlib::System::String* m_name;
		int32_t m_id;
		mscorlib::System::Guid m_guid;
		IL2CPP::Array<mscorlib::System::Diagnostics::Tracing::EventSource_EventMetadata>* m_eventData;
		IL2CPP::Array<uint8_t>* m_rawManifest;
		mscorlib::System::EventHandler_1<mscorlib::System::Diagnostics::Tracing::EventCommandEventArgs>* m_eventCommandExecuted;
		mscorlib::System::Diagnostics::Tracing::EventSourceSettings m_config;
		bool m_eventSourceEnabled;
		mscorlib::System::Diagnostics::Tracing::EventLevel m_level;
		mscorlib::System::Diagnostics::Tracing::EventKeywords m_matchAnyKeyword;
		mscorlib::System::Diagnostics::Tracing::EventDispatcher* m_Dispatchers;
		mscorlib::System::Diagnostics::Tracing::EventSource_OverideEventProvider* m_provider;
		bool m_completelyInited;
		mscorlib::System::Exception* m_constructionException;
		uint8_t m_outOfBandMessageCount;
		mscorlib::System::Diagnostics::Tracing::EventCommandEventArgs* m_deferredCommands;
		IL2CPP::Array<mscorlib::System::String*>* m_traits;
		mscorlib::System::Diagnostics::Tracing::SessionMask m_curLiveSessions;
		IL2CPP::Array<mscorlib::System::Diagnostics::Tracing::EtwSession*>* m_etwSessionIdMap;
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::Diagnostics::Tracing::EtwSession>* m_legacySessions;
		int64_t m_keywordTriggers;
		mscorlib::System::Diagnostics::Tracing::SessionMask m_activityFilteringForETWEnabled;
		mscorlib::System::Diagnostics::Tracing::ActivityTracker* m_activityTracker;
		struct StaticFields
		{
			uint32_t s_currentPid;
			uint8_t m_EventSourceExceptionRecurenceCount;
			mscorlib::System::Action_1<mscorlib::System::Guid>* s_activityDying;
			IL2CPP::Array<uint8_t>* namespaceBytes;
			mscorlib::System::Guid AspNetEventSourceGuid;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void WriteMultiMerge(mscorlib::System::String* eventName, mscorlib::System::Diagnostics::Tracing::EventSourceOptions& options, mscorlib::System::Diagnostics::Tracing::TraceLoggingEventTypes* eventTypes, mscorlib::System::Guid* activityID, mscorlib::System::Guid* childActivityID, IL2CPP::Array<mscorlib::System::Object*>* values);
		void WriteMultiMergeInner(mscorlib::System::String* eventName, mscorlib::System::Diagnostics::Tracing::EventSourceOptions& options, mscorlib::System::Diagnostics::Tracing::TraceLoggingEventTypes* eventTypes, mscorlib::System::Guid* activityID, mscorlib::System::Guid* childActivityID, IL2CPP::Array<mscorlib::System::Object*>* values);
		void WriteMultiMerge(mscorlib::System::String* eventName, mscorlib::System::Diagnostics::Tracing::EventSourceOptions& options, mscorlib::System::Diagnostics::Tracing::TraceLoggingEventTypes* eventTypes, mscorlib::System::Guid* activityID, mscorlib::System::Guid* childActivityID, mscorlib::System::Diagnostics::Tracing::EventSource_EventData* data);
		void WriteCleanup(mscorlib::System::Runtime::InteropServices::GCHandle* pPins, int32_t cPins);
		void InitializeProviderMetadata();
		static int32_t AddValueToMetaData(mscorlib::System::Collections::Generic::List_1<mscorlib::System::Byte>* metaData, mscorlib::System::String* value);
		static int32_t HexDigit(wchar_t c);
		mscorlib::System::Diagnostics::Tracing::NameInfo* UpdateDescriptor(mscorlib::System::String* name, mscorlib::System::Diagnostics::Tracing::TraceLoggingEventTypes* eventInfo, mscorlib::System::Diagnostics::Tracing::EventSourceOptions& options, mscorlib::System::Diagnostics::Tracing::EventDescriptor& descriptor);
		mscorlib::System::String* get_Name();
		mscorlib::System::Guid get_Guid();
		bool IsEnabled();
		bool IsEnabled(mscorlib::System::Diagnostics::Tracing::EventLevel level, mscorlib::System::Diagnostics::Tracing::EventKeywords keywords);
		bool IsEnabled(mscorlib::System::Diagnostics::Tracing::EventLevel level, mscorlib::System::Diagnostics::Tracing::EventKeywords keywords, mscorlib::System::Diagnostics::Tracing::EventChannel channel);
		static mscorlib::System::Guid GetGuid(mscorlib::System::Type* eventSourceType);
		static mscorlib::System::String* GetName(mscorlib::System::Type* eventSourceType);
		static void SetCurrentThreadActivityId(mscorlib::System::Guid activityId);
		static mscorlib::System::Guid get_CurrentThreadActivityId();
		static mscorlib::System::Guid get_InternalCurrentThreadActivityId();
		static mscorlib::System::Guid get_FallbackActivityId();
		mscorlib::System::String* ToString();
		void _ctor();
		void _ctor(mscorlib::System::Diagnostics::Tracing::EventSourceSettings settings);
		void _ctor(mscorlib::System::Diagnostics::Tracing::EventSourceSettings settings, IL2CPP::Array<mscorlib::System::String*>* traits);
		void OnEventCommand(mscorlib::System::Diagnostics::Tracing::EventCommandEventArgs* command);
		void WriteEvent(int32_t eventId, int32_t arg1);
		void WriteEvent(int32_t eventId, mscorlib::System::String* arg1, mscorlib::System::String* arg2);
		void WriteEvent(int32_t eventId, mscorlib::System::String* arg1, mscorlib::System::String* arg2, mscorlib::System::String* arg3);
		void WriteEventCore(int32_t eventId, int32_t eventDataCount, mscorlib::System::Diagnostics::Tracing::EventSource_EventData* data);
		void WriteEventWithRelatedActivityIdCore(int32_t eventId, mscorlib::System::Guid* relatedActivityId, int32_t eventDataCount, mscorlib::System::Diagnostics::Tracing::EventSource_EventData* data);
		void WriteEvent(int32_t eventId, IL2CPP::Array<mscorlib::System::Object*>* args);
		void Dispose();
		void Dispose(bool disposing);
		void Finalize();
		void WriteStringToListener(mscorlib::System::Diagnostics::Tracing::EventListener* listener, mscorlib::System::String* msg, mscorlib::System::Diagnostics::Tracing::SessionMask m);
		void WriteEventRaw(mscorlib::System::String* eventName, mscorlib::System::Diagnostics::Tracing::EventDescriptor& eventDescriptor, mscorlib::System::Guid* activityID, mscorlib::System::Guid* relatedActivityID, int32_t dataCount, intptr_t data);
		void Initialize(mscorlib::System::Guid eventSourceGuid, mscorlib::System::String* eventSourceName, IL2CPP::Array<mscorlib::System::String*>* traits);
		static mscorlib::System::String* GetName(mscorlib::System::Type* eventSourceType, mscorlib::System::Diagnostics::Tracing::EventManifestOptions flags);
		static mscorlib::System::Guid GenerateGuidFromName(mscorlib::System::String* name);
		mscorlib::System::Object* DecodeObject(int32_t eventId, int32_t parameterId, mscorlib::System::Diagnostics::Tracing::EventSource_EventData& data);
		mscorlib::System::Diagnostics::Tracing::EventDispatcher* GetDispatcher(mscorlib::System::Diagnostics::Tracing::EventListener* listener);
		void WriteEventVarargs(int32_t eventId, mscorlib::System::Guid* childActivityID, IL2CPP::Array<mscorlib::System::Object*>* args);
		IL2CPP::Array<mscorlib::System::Object*>* SerializeEventArgs(int32_t eventId, IL2CPP::Array<mscorlib::System::Object*>* args);
		void LogEventArgsMismatches(IL2CPP::Array<mscorlib::System::Reflection::ParameterInfo*>* infos, IL2CPP::Array<mscorlib::System::Object*>* args);
		int32_t GetParamLengthIncludingByteArray(IL2CPP::Array<mscorlib::System::Reflection::ParameterInfo*>* parameters);
		void WriteToAllListeners(int32_t eventId, mscorlib::System::Guid* childActivityID, int32_t eventDataCount, mscorlib::System::Diagnostics::Tracing::EventSource_EventData* data);
		void WriteToAllListeners(int32_t eventId, mscorlib::System::Guid* childActivityID, IL2CPP::Array<mscorlib::System::Object*>* args);
		void DispatchToAllListeners(int32_t eventId, mscorlib::System::Guid* childActivityID, mscorlib::System::Diagnostics::Tracing::EventWrittenEventArgs* eventCallbackArgs);
		void WriteEventString(mscorlib::System::Diagnostics::Tracing::EventLevel level, int64_t keywords, mscorlib::System::String* msgString);
		void WriteStringToAllListeners(mscorlib::System::String* eventName, mscorlib::System::String* msg);
		mscorlib::System::Diagnostics::Tracing::SessionMask GetEtwSessionMask(int32_t eventId, mscorlib::System::Guid* childActivityID);
		bool IsEnabledByDefault(int32_t eventNum, bool enable, mscorlib::System::Diagnostics::Tracing::EventLevel currentLevel, mscorlib::System::Diagnostics::Tracing::EventKeywords currentMatchAnyKeyword);
		bool IsEnabledCommon(bool enabled, mscorlib::System::Diagnostics::Tracing::EventLevel currentLevel, mscorlib::System::Diagnostics::Tracing::EventKeywords currentMatchAnyKeyword, mscorlib::System::Diagnostics::Tracing::EventLevel eventLevel, mscorlib::System::Diagnostics::Tracing::EventKeywords eventKeywords, mscorlib::System::Diagnostics::Tracing::EventChannel eventChannel);
		void ThrowEventSourceException(mscorlib::System::String* eventName, mscorlib::System::Exception* innerEx);
		void ValidateEventOpcodeForTransfer(mscorlib::System::Diagnostics::Tracing::EventSource_EventMetadata& eventData, mscorlib::System::String* eventName);
		static mscorlib::System::Diagnostics::Tracing::EventOpcode GetOpcodeWithDefault(mscorlib::System::Diagnostics::Tracing::EventOpcode opcode, mscorlib::System::String* eventName);
		void SendCommand(mscorlib::System::Diagnostics::Tracing::EventListener* listener, int32_t perEventSourceSessionId, int32_t etwSessionId, mscorlib::System::Diagnostics::Tracing::EventCommand command, bool enable, mscorlib::System::Diagnostics::Tracing::EventLevel level, mscorlib::System::Diagnostics::Tracing::EventKeywords matchAnyKeyword, mscorlib::System::Collections::Generic::IDictionary_2<mscorlib::System::String, mscorlib::System::String>* commandArguments);
		void DoCommand(mscorlib::System::Diagnostics::Tracing::EventCommandEventArgs* commandArgs);
		void UpdateEtwSession(int32_t sessionIdBit, int32_t etwSessionId, bool bEnable, mscorlib::System::String* activityFilters, bool participateInSampling);
		static bool ParseCommandArgs(mscorlib::System::Collections::Generic::IDictionary_2<mscorlib::System::String, mscorlib::System::String>* commandArguments, bool& participateInSampling, mscorlib::System::String& activityFilters, int32_t& sessionIdBit);
		void UpdateKwdTriggers(bool enable);
		bool EnableEventForDispatcher(mscorlib::System::Diagnostics::Tracing::EventDispatcher* dispatcher, int32_t eventId, bool value);
		bool AnyEventEnabled();
		bool get_IsDisposed();
		void EnsureDescriptorsInitialized();
		bool SendManifest(IL2CPP::Array<uint8_t>* rawManifest);
		static mscorlib::System::Attribute* GetCustomAttributeHelper(mscorlib::System::Reflection::MemberInfo* member, mscorlib::System::Type* attributeType, mscorlib::System::Diagnostics::Tracing::EventManifestOptions flags);
		static bool AttributeTypeNamesMatch(mscorlib::System::Type* attributeType, mscorlib::System::Type* reflectedAttributeType);
		static mscorlib::System::Type* GetEventSourceBaseType(mscorlib::System::Type* eventSourceType, bool allowEventSourceOverride, bool reflectionOnly);
		static IL2CPP::Array<uint8_t>* CreateManifestAndDescriptors(mscorlib::System::Type* eventSourceType, mscorlib::System::String* eventSourceDllName, mscorlib::System::Diagnostics::Tracing::EventSource* source, mscorlib::System::Diagnostics::Tracing::EventManifestOptions flags);
		static bool RemoveFirstArgIfRelatedActivityId(IL2CPP::Array<mscorlib::System::Reflection::ParameterInfo*>& args);
		static void AddProviderEnumKind(mscorlib::System::Diagnostics::Tracing::ManifestBuilder* manifest, mscorlib::System::Reflection::FieldInfo* staticField, mscorlib::System::String* providerEnumKind);
		static void AddEventDescriptor(IL2CPP::Array<mscorlib::System::Diagnostics::Tracing::EventSource_EventMetadata>& eventData, mscorlib::System::String* eventName, mscorlib::System::Diagnostics::Tracing::EventAttribute* eventAttribute, IL2CPP::Array<mscorlib::System::Reflection::ParameterInfo*>* eventParameters, bool hasRelatedActivityID);
		static void TrimEventDescriptors(IL2CPP::Array<mscorlib::System::Diagnostics::Tracing::EventSource_EventMetadata>& eventData);
		void AddListener(mscorlib::System::Diagnostics::Tracing::EventListener* listener);
		static void DebugCheckEvent(mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::String>& eventsByName, IL2CPP::Array<mscorlib::System::Diagnostics::Tracing::EventSource_EventMetadata>* eventData, mscorlib::System::Reflection::MethodInfo* method, mscorlib::System::Diagnostics::Tracing::EventAttribute* eventAttribute, mscorlib::System::Diagnostics::Tracing::ManifestBuilder* manifest, mscorlib::System::Diagnostics::Tracing::EventManifestOptions options);
		static int32_t GetHelperCallFirstArg(mscorlib::System::Reflection::MethodInfo* method);
		void ReportOutOfBandMessage(mscorlib::System::String* msg, bool flush);
		mscorlib::System::Diagnostics::Tracing::EventSourceSettings ValidateSettings(mscorlib::System::Diagnostics::Tracing::EventSourceSettings settings);
		bool get_ThrowOnEventWriteErrors();
		bool get_SelfDescribingEvents();
		void ReportActivitySamplingInfo(mscorlib::System::Diagnostics::Tracing::EventListener* listener, mscorlib::System::Diagnostics::Tracing::SessionMask sessions);
		static void _cctor();
	};
}

