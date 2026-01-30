#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace UnityEngine_VFXModule::UnityEngine::VFX
{
	struct VFXSpawnerState : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		intptr_t m_Ptr;
		bool m_Owner;
		void _ctor(intptr_t ptr, bool owner);
		static UnityEngine_VFXModule::UnityEngine::VFX::VFXSpawnerState* CreateSpawnerStateWrapper();
		void SetWrapValue(intptr_t ptr);
		void Release();
		void Finalize();
		void Dispose();
		static void Internal_Destroy(intptr_t ptr);
	};
}

