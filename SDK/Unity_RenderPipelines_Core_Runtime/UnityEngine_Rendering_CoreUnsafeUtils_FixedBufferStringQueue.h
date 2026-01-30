#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_Rendering_CoreUnsafeUtils.h"
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering { struct CoreUnsafeUtils; };
namespace mscorlib::System { struct Byte; };
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct String; };

namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering
{
	struct CoreUnsafeUtils_FixedBufferStringQueue
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		uint8_t* m_ReadCursor;
		uint8_t* m_WriteCursor;
		uint8_t* m_BufferEnd;
		uint8_t* m_BufferStart;
		int32_t m_BufferLength;
		int32_t _Count_k__BackingField;
		int32_t get_Count();
		void set_Count(int32_t value);
		void _ctor(uint8_t* ptr, int32_t length);
		bool TryPush(mscorlib::System::String* v);
		bool TryPop(mscorlib::System::String& v);
		void Clear();
	};
}

