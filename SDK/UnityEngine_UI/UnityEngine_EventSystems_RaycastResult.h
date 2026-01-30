#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
namespace UnityEngine_UI::UnityEngine::EventSystems { struct BaseRaycaster; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct String; };

namespace UnityEngine_UI::UnityEngine::EventSystems
{
	struct RaycastResult
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::GameObject* m_GameObject;
		UnityEngine_UI::UnityEngine::EventSystems::BaseRaycaster* module;
		float distance;
		float index;
		int32_t depth;
		int32_t sortingLayer;
		int32_t sortingOrder;
		UnityEngine_CoreModule::UnityEngine::Vector3 worldPosition;
		UnityEngine_CoreModule::UnityEngine::Vector3 worldNormal;
		UnityEngine_CoreModule::UnityEngine::Vector2 screenPosition;
		int32_t displayIndex;
		UnityEngine_CoreModule::UnityEngine::GameObject* get_gameObject();
		void set_gameObject(UnityEngine_CoreModule::UnityEngine::GameObject* value);
		bool get_isValid();
		void Clear();
		mscorlib::System::String* ToString();
	};
}

