#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace UnityEngine_UI::UnityEngine::UI { struct Selectable; };
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::Rewired::UI::ControlMapper
{
	struct UISelectionUtility : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			IL2CPP::Array<UnityEngine_UI::UnityEngine::UI::Selectable*>* s_reusableAllSelectables;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static UnityEngine_UI::UnityEngine::UI::Selectable* FindNextSelectable(UnityEngine_UI::UnityEngine::UI::Selectable* selectable, UnityEngine_CoreModule::UnityEngine::Transform* transform, UnityEngine_CoreModule::UnityEngine::Vector3 direction);
		static void _cctor();
	};
}

