#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::IO { struct Stream; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };

namespace UnityEngine_CoreModule::UnityEngine
{
	struct ManagedStreamHelpers : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static void ValidateLoadFromStream(mscorlib::System::IO::Stream* stream);
		static void ManagedStreamRead(IL2CPP::Array<uint8_t>* buffer, int32_t offset, int32_t count, mscorlib::System::IO::Stream* stream, intptr_t returnValueAddress);
		static void ManagedStreamSeek(int64_t offset, uint32_t origin, mscorlib::System::IO::Stream* stream, intptr_t returnValueAddress);
		static void ManagedStreamLength(mscorlib::System::IO::Stream* stream, intptr_t returnValueAddress);
	};
}

