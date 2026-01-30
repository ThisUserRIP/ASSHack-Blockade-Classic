#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_UInt16.h"
namespace mscorlib::System { struct UInt16; };
#include "..\mscorlib\System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering
{
	struct BitArrayUtilities : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static bool Get8(uint32_t index, uint8_t data);
		static bool Get16(uint32_t index, uint16_t data);
		static bool Get32(uint32_t index, uint32_t data);
		static bool Get64(uint32_t index, uint64_t data);
		static bool Get128(uint32_t index, uint64_t data1, uint64_t data2);
		static bool Get256(uint32_t index, uint64_t data1, uint64_t data2, uint64_t data3, uint64_t data4);
		static void Set8(uint32_t index, uint8_t& data, bool value);
		static void Set16(uint32_t index, uint16_t& data, bool value);
		static void Set32(uint32_t index, uint32_t& data, bool value);
		static void Set64(uint32_t index, uint64_t& data, bool value);
		static void Set128(uint32_t index, uint64_t& data1, uint64_t& data2, bool value);
		static void Set256(uint32_t index, uint64_t& data1, uint64_t& data2, uint64_t& data3, uint64_t& data4, bool value);
	};
}

