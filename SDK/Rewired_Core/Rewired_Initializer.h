#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Rewired_Core::Rewired
{
	struct Initializer : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::GameObject* _inputManagerPrefab;
		bool _destroySelf;
		UnityEngine_CoreModule::UnityEngine::GameObject* get_inputManagerPrefab();
		void set_inputManagerPrefab(UnityEngine_CoreModule::UnityEngine::GameObject* value);
		bool get_destroySelf();
		void set_destroySelf(bool value);
		void Awake();
		bool Initialize();
		void _ctor();
	};
}

