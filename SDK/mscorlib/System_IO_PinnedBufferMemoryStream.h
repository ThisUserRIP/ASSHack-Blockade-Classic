#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_IO_UnmanagedMemoryStream.h"
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "System_Runtime_InteropServices_GCHandle.h"
namespace mscorlib::System::Runtime::InteropServices { struct GCHandle; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace mscorlib::System::IO
{
	struct PinnedBufferMemoryStream : mscorlib::System::IO::UnmanagedMemoryStream
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<uint8_t>* _array;
		mscorlib::System::Runtime::InteropServices::GCHandle _pinningHandle;
		void _ctor(IL2CPP::Array<uint8_t>* array);
		void Finalize();
		void Dispose(bool disposing);
	};
}

