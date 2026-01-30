#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_BeforeRenderHelper.h"
namespace UnityEngine_CoreModule::UnityEngine { struct BeforeRenderHelper; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace UnityEngine_CoreModule::UnityEngine::Events { struct UnityAction; };

namespace UnityEngine_CoreModule::UnityEngine
{
	struct BeforeRenderHelper_OrderBlock
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t order;
		UnityEngine_CoreModule::UnityEngine::Events::UnityAction* callback;
	};
}

