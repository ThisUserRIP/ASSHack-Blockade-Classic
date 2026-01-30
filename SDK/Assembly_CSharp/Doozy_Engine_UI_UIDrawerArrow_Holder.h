#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Doozy_Engine_UI_UIDrawerArrow.h"
namespace Assembly_CSharp::Doozy::Engine::UI { struct UIDrawerArrow; };
namespace UnityEngine_CoreModule::UnityEngine { struct RectTransform; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::Doozy::Engine::UI
{
	struct UIDrawerArrow_Holder : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::RectTransform* Closed;
		UnityEngine_CoreModule::UnityEngine::RectTransform* Opened;
		UnityEngine_CoreModule::UnityEngine::RectTransform* Root;
		UnityEngine_CoreModule::UnityEngine::Vector3 get_ClosedLocalPosition();
		UnityEngine_CoreModule::UnityEngine::Vector3 get_OpenedLocalPosition();
		void _ctor(UnityEngine_CoreModule::UnityEngine::RectTransform* parent);
		void Reset(UnityEngine_CoreModule::UnityEngine::RectTransform* parent);
	};
}

