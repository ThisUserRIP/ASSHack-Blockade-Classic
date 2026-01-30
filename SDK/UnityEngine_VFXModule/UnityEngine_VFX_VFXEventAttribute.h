#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace UnityEngine_VFXModule::UnityEngine::VFX { struct VisualEffectAsset; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace UnityEngine_VFXModule::UnityEngine::VFX
{
	struct VFXEventAttribute : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		intptr_t m_Ptr;
		bool m_Owner;
		UnityEngine_VFXModule::UnityEngine::VFX::VisualEffectAsset* m_VfxAsset;
		void _ctor(intptr_t ptr, bool owner, UnityEngine_VFXModule::UnityEngine::VFX::VisualEffectAsset* vfxAsset);
		static intptr_t Internal_Create();
		static UnityEngine_VFXModule::UnityEngine::VFX::VFXEventAttribute* Internal_InstanciateVFXEventAttribute(UnityEngine_VFXModule::UnityEngine::VFX::VisualEffectAsset* vfxAsset);
		void Internal_InitFromAsset(UnityEngine_VFXModule::UnityEngine::VFX::VisualEffectAsset* vfxAsset);
		void Release();
		void Finalize();
		void Dispose();
		static void Internal_Destroy(intptr_t ptr);
	};
}

