#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Diagnostics_Tracing_EventSource.h"
namespace mscorlib::System::Diagnostics::Tracing { struct EventSource; };
#include "System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Byte; };
namespace mscorlib::System { struct Byte; };

namespace mscorlib::System::Diagnostics::Tracing
{
	struct EventSource_EventData
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int64_t m_Ptr;
		int32_t m_Size;
		int32_t m_Reserved;
		intptr_t get_DataPointer();
		void set_DataPointer(intptr_t value);
		void set_Size(int32_t value);
		void SetMetadata(uint8_t* pointer, int32_t size, int32_t reserved);
	};
}

