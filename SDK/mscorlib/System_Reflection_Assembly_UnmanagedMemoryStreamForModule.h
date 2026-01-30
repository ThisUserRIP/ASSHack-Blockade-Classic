#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_IO_UnmanagedMemoryStream.h"
#include "System_Reflection_Assembly.h"
namespace mscorlib::System::Reflection { struct Assembly; };
namespace mscorlib::System::Reflection { struct Module; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Byte; };
namespace mscorlib::System { struct Byte; };
#include "System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace mscorlib::System::Reflection
{
	struct Assembly_UnmanagedMemoryStreamForModule : mscorlib::System::IO::UnmanagedMemoryStream
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Reflection::Module* module;
		void _ctor(uint8_t* pointer, int64_t length, mscorlib::System::Reflection::Module* module);
		void Dispose(bool disposing);
	};
}

