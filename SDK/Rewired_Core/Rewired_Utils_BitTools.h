#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int16.h"
namespace mscorlib::System { struct Int16; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };

namespace Rewired_Core::Rewired::Utils
{
	struct BitTools : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			IL2CPP::Array<uint8_t>* YeGOUCKLeiVMdhkoXDnIEpqVJmSw;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void GetBytes(int16_t value, IL2CPP::Array<uint8_t>* buffer);
		static void GetBytes(int32_t value, IL2CPP::Array<uint8_t>* buffer);
		static void GetBytes(int64_t value, IL2CPP::Array<uint8_t>* buffer);
		static IL2CPP::Array<uint8_t>* TMULKcASFwgrURnGLaWLgjaaVxU();
		static float IntToFloat(intptr_t pointer, int32_t offset);
	};
}

