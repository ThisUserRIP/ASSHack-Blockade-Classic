#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Runtime_ConstrainedExecution_CriticalFinalizerObject.h"
#include "System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::System::Runtime::InteropServices
{
	struct SafeHandle : mscorlib::System::Runtime::ConstrainedExecution::CriticalFinalizerObject
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		intptr_t handle;
		int32_t _state;
		bool _ownsHandle;
		bool _fullyInitialized;
		struct StaticFields
		{
			int32_t RefCount_Mask;
			int32_t RefCount_One;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(intptr_t invalidHandleValue, bool ownsHandle);
		void Finalize();
		void SetHandle(intptr_t handle);
		intptr_t DangerousGetHandle();
		bool get_IsClosed();
		bool get_IsInvalid();
		void Close();
		void Dispose();
		void Dispose(bool disposing);
		bool ReleaseHandle();
		void SetHandleAsInvalid();
		void DangerousAddRef(bool& success);
		void DangerousRelease();
		void InternalDispose();
		void InternalFinalize();
		void DangerousReleaseInternal(bool dispose);
	};
}

