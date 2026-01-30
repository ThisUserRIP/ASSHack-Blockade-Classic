#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Void; };

namespace UnityEngine_CoreModule::UnityEngine::U2D
{
	struct SpriteChannelInfo
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		intptr_t m_Buffer;
		int32_t m_Count;
		int32_t m_Offset;
		int32_t m_Stride;
		void* get_buffer();
		int32_t get_count();
		int32_t get_offset();
		int32_t get_stride();
	};
}

