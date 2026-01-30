#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_Behaviour.h"
namespace UnityEngine_VFXModule::UnityEngine::VFX { struct VFXEventAttribute; };
#include "UnityEngine_VFX_VFXOutputEventArgs.h"
namespace UnityEngine_VFXModule::UnityEngine::VFX { struct VFXOutputEventArgs; };
namespace mscorlib::System { template <typename T> struct Action_1; };
namespace UnityEngine_VFXModule::UnityEngine::VFX { struct VisualEffectAsset; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace UnityEngine_VFXModule::UnityEngine::VFX
{
	struct VisualEffect : UnityEngine_CoreModule::UnityEngine::Behaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_VFXModule::UnityEngine::VFX::VFXEventAttribute* m_cachedEventAttribute;
		mscorlib::System::Action_1<UnityEngine_VFXModule::UnityEngine::VFX::VFXOutputEventArgs>* outputEventReceived;
		UnityEngine_VFXModule::UnityEngine::VFX::VisualEffectAsset* get_visualEffectAsset();
		UnityEngine_VFXModule::UnityEngine::VFX::VFXEventAttribute* CreateVFXEventAttribute();
		static UnityEngine_VFXModule::UnityEngine::VFX::VFXEventAttribute* InvokeGetCachedEventAttributeForOutputEvent_Internal(UnityEngine_VFXModule::UnityEngine::VFX::VisualEffect* source);
		static void InvokeOutputEventReceived_Internal(UnityEngine_VFXModule::UnityEngine::VFX::VisualEffect* source, int32_t eventNameId);
	};
}

