#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_UI\UnityEngine_UI_Toggle.h"
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::UI
{
	struct UIFoldout : UnityEngine_UI::UnityEngine::UI::Toggle
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::GameObject* content;
		UnityEngine_CoreModule::UnityEngine::GameObject* arrowOpened;
		UnityEngine_CoreModule::UnityEngine::GameObject* arrowClosed;
		void Start();
		void OnValidate();
		void SetState(bool state);
		void SetState(bool state, bool rebuildLayout);
		void _ctor();
	};
}

