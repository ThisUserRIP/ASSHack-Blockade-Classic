#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "UnityEngine_GUILayoutUtility.h"
namespace UnityEngine_IMGUIModule::UnityEngine { struct GUILayoutUtility; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace UnityEngine_IMGUIModule::UnityEngine { struct GUILayoutGroup; };
namespace UnityEngine_CoreModule::UnityEngineInternal { struct GenericStack; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace UnityEngine_IMGUIModule::UnityEngine
{
	struct GUILayoutUtility_LayoutCache : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t _id_k__BackingField;
		UnityEngine_IMGUIModule::UnityEngine::GUILayoutGroup* topLevel;
		UnityEngine_CoreModule::UnityEngineInternal::GenericStack* layoutGroups;
		UnityEngine_IMGUIModule::UnityEngine::GUILayoutGroup* windows;
		void set_id(int32_t value);
		void _ctor(int32_t instanceID);
	};
}

