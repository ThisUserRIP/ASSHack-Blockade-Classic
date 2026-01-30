#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_MulticastDelegate.h"
#include "Microsoft_Win32_UnsafeNativeMethods_ManifestEtw.h"
namespace mscorlib::Microsoft::Win32 { struct UnsafeNativeMethods_ManifestEtw; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };
#include "System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
namespace mscorlib::System { struct Guid; };
namespace mscorlib::System { struct Guid; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "System_Int64.h"
namespace mscorlib::System { struct Int64; };
namespace mscorlib::Microsoft::Win32 { struct UnsafeNativeMethods_ManifestEtw_EVENT_FILTER_DESCRIPTOR; };
namespace mscorlib::Microsoft::Win32 { struct UnsafeNativeMethods_ManifestEtw_EVENT_FILTER_DESCRIPTOR; };
namespace mscorlib::System { struct IAsyncResult; };
namespace mscorlib::System { struct AsyncCallback; };

namespace mscorlib::Microsoft::Win32
{
	struct UnsafeNativeMethods_ManifestEtw_EtwEnableCallback : mscorlib::System::MulticastDelegate
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor(mscorlib::System::Object* object, intptr_t method);
		void Invoke(mscorlib::System::Guid& sourceId, int32_t isEnabled, uint8_t level, int64_t matchAnyKeywords, int64_t matchAllKeywords, mscorlib::Microsoft::Win32::UnsafeNativeMethods_ManifestEtw_EVENT_FILTER_DESCRIPTOR* filterData, void* callbackContext);
		mscorlib::System::IAsyncResult* BeginInvoke(mscorlib::System::Guid& sourceId, int32_t isEnabled, uint8_t level, int64_t matchAnyKeywords, int64_t matchAllKeywords, mscorlib::Microsoft::Win32::UnsafeNativeMethods_ManifestEtw_EVENT_FILTER_DESCRIPTOR* filterData, void* callbackContext, mscorlib::System::AsyncCallback* callback, mscorlib::System::Object* object);
		void EndInvoke(mscorlib::System::Guid& sourceId, mscorlib::System::IAsyncResult* result);
	};
}

