#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_ScriptableObject.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_VFXModule::UnityEngine::VFX { struct VFXSpawnerState; };
namespace UnityEngine_VFXModule::UnityEngine::VFX { struct VFXExpressionValues; };
namespace UnityEngine_VFXModule::UnityEngine::VFX { struct VisualEffect; };

namespace UnityEngine_VFXModule::UnityEngine::VFX
{
	struct VFXSpawnerCallbacks : UnityEngine_CoreModule::UnityEngine::ScriptableObject
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void OnPlay(UnityEngine_VFXModule::UnityEngine::VFX::VFXSpawnerState* state, UnityEngine_VFXModule::UnityEngine::VFX::VFXExpressionValues* vfxValues, UnityEngine_VFXModule::UnityEngine::VFX::VisualEffect* vfxComponent);
		void OnUpdate(UnityEngine_VFXModule::UnityEngine::VFX::VFXSpawnerState* state, UnityEngine_VFXModule::UnityEngine::VFX::VFXExpressionValues* vfxValues, UnityEngine_VFXModule::UnityEngine::VFX::VisualEffect* vfxComponent);
		void OnStop(UnityEngine_VFXModule::UnityEngine::VFX::VFXSpawnerState* state, UnityEngine_VFXModule::UnityEngine::VFX::VFXExpressionValues* vfxValues, UnityEngine_VFXModule::UnityEngine::VFX::VisualEffect* vfxComponent);
		void _ctor();
	};
}

