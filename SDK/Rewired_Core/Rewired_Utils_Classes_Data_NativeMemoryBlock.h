#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Rewired_Core::Rewired::Utils::Classes::Data
{
	struct NativeMemoryBlock : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t ypMdytbQUTMHGkAdEXUKVnBdCmi;
		uint32_t oIJgatSbIbqmNxWIqfVpZIPQaXT;
		intptr_t VlkfWbaPgkIimepoWOMlFCqxXww;
		bool MLJGdDbxWcAXHaEUgpKEwtmlTpuj;
		uint32_t get_size();
		void _ctor(uint32_t size);
		intptr_t Allocate(uint32_t bytes, intptr_t ptrToData);
		intptr_t Allocate(uint32_t bytes);
		void Dispose();
		void Finalize();
		void Dispose(bool disposing);
	};
}

