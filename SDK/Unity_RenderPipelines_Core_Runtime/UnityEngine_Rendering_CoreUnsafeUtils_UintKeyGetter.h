#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_Rendering_CoreUnsafeUtils.h"
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering { struct CoreUnsafeUtils; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };

namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering
{
	struct CoreUnsafeUtils_UintKeyGetter
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		uint32_t Get(uint32_t& v);
	};
}

