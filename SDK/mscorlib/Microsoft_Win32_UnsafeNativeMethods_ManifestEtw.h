#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Microsoft_Win32_UnsafeNativeMethods.h"
namespace mscorlib::Microsoft::Win32 { struct UnsafeNativeMethods; };
#include "System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
namespace mscorlib::System { struct Guid; };
namespace mscorlib::System { struct Guid; };
namespace mscorlib::Microsoft::Win32 { struct UnsafeNativeMethods_ManifestEtw_EtwEnableCallback; };
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Int64; };
namespace mscorlib::System { struct Int64; };
#include "System_Int64.h"
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::Diagnostics::Tracing { struct EventDescriptor; };
namespace mscorlib::System::Diagnostics::Tracing { struct EventDescriptor; };
namespace mscorlib::System::Diagnostics::Tracing { struct EventProvider_EventData; };
namespace mscorlib::System::Diagnostics::Tracing { struct EventProvider_EventData; };
#include "Microsoft_Win32_UnsafeNativeMethods_ManifestEtw_ActivityControl.h"
#include "Microsoft_Win32_UnsafeNativeMethods_ManifestEtw_EVENT_INFO_CLASS.h"
#include "Microsoft_Win32_UnsafeNativeMethods_ManifestEtw_TRACE_QUERY_INFO_CLASS.h"

namespace mscorlib::Microsoft::Win32
{
	struct UnsafeNativeMethods_ManifestEtw : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static uint32_t EventRegister(mscorlib::System::Guid& providerId, mscorlib::Microsoft::Win32::UnsafeNativeMethods_ManifestEtw_EtwEnableCallback* enableCallback, void* callbackContext, int64_t& registrationHandle);
		static uint32_t EventUnregister(int64_t registrationHandle);
		static int32_t EventWriteTransferWrapper(int64_t registrationHandle, mscorlib::System::Diagnostics::Tracing::EventDescriptor& eventDescriptor, mscorlib::System::Guid* activityId, mscorlib::System::Guid* relatedActivityId, int32_t userDataCount, mscorlib::System::Diagnostics::Tracing::EventProvider_EventData* userData);
		static int32_t EventWriteTransfer(int64_t registrationHandle, mscorlib::System::Diagnostics::Tracing::EventDescriptor& eventDescriptor, mscorlib::System::Guid* activityId, mscorlib::System::Guid* relatedActivityId, int32_t userDataCount, mscorlib::System::Diagnostics::Tracing::EventProvider_EventData* userData);
		static int32_t EventActivityIdControl(mscorlib::Microsoft::Win32::UnsafeNativeMethods_ManifestEtw_ActivityControl ControlCode, mscorlib::System::Guid& ActivityId);
		static int32_t EventSetInformation(int64_t registrationHandle, mscorlib::Microsoft::Win32::UnsafeNativeMethods_ManifestEtw_EVENT_INFO_CLASS informationClass, void* eventInformation, int32_t informationLength);
		static int32_t EnumerateTraceGuidsEx(mscorlib::Microsoft::Win32::UnsafeNativeMethods_ManifestEtw_TRACE_QUERY_INFO_CLASS TraceQueryInfoClass, void* InBuffer, int32_t InBufferSize, void* OutBuffer, int32_t OutBufferSize, int32_t& ReturnLength);
	};
}

