#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_Behaviour.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
namespace UnityEngine_CoreModule::UnityEngine { struct Camera; };

namespace UnityEngine_UIModule::UnityEngine
{
	struct CanvasGroup : UnityEngine_CoreModule::UnityEngine::Behaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		float get_alpha();
		void set_alpha(float value);
		bool get_interactable();
		void set_interactable(bool value);
		bool get_blocksRaycasts();
		void set_blocksRaycasts(bool value);
		bool get_ignoreParentGroups();
		bool IsRaycastLocationValid(UnityEngine_CoreModule::UnityEngine::Vector2 sp, UnityEngine_CoreModule::UnityEngine::Camera* eventCamera);
	};
}

