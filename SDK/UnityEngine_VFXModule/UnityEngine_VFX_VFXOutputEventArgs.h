#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace UnityEngine_VFXModule::UnityEngine::VFX { struct VFXEventAttribute; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace UnityEngine_VFXModule::UnityEngine::VFX
{
	struct VFXOutputEventArgs
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t _nameId_k__BackingField;
		UnityEngine_VFXModule::UnityEngine::VFX::VFXEventAttribute* _eventAttribute_k__BackingField;
		void _ctor(int32_t nameId, UnityEngine_VFXModule::UnityEngine::VFX::VFXEventAttribute* eventAttribute);
	};
}

