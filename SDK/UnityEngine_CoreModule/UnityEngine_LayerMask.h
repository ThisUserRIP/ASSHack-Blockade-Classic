#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };

namespace UnityEngine_CoreModule::UnityEngine
{
	struct LayerMask
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t m_Mask;
		static int32_t op_Implicit(UnityEngine_CoreModule::UnityEngine::LayerMask mask);
		static UnityEngine_CoreModule::UnityEngine::LayerMask op_Implicit(int32_t intVal);
		int32_t get_value();
		static mscorlib::System::String* LayerToName(int32_t layer);
		static int32_t NameToLayer(mscorlib::System::String* layerName);
	};
}

