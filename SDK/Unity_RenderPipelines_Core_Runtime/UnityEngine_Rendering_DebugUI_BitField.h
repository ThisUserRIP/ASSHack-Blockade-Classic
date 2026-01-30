#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
namespace mscorlib::System { struct Enum; };
#include "UnityEngine_Rendering_DebugUI_Field_1.h"
#include "UnityEngine_Rendering_DebugUI.h"
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering { struct DebugUI; };
namespace UnityEngine_IMGUIModule::UnityEngine { struct GUIContent; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering
{
	struct DebugUI_BitField : Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::DebugUI_Field_1<mscorlib::System::Enum>
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<UnityEngine_IMGUIModule::UnityEngine::GUIContent*>* _enumNames_k__BackingField;
		IL2CPP::Array<int32_t>* _enumValues_k__BackingField;
		mscorlib::System::Type* m_EnumType;
		IL2CPP::Array<UnityEngine_IMGUIModule::UnityEngine::GUIContent*>* get_enumNames();
		void set_enumNames(IL2CPP::Array<UnityEngine_IMGUIModule::UnityEngine::GUIContent*>* value);
		IL2CPP::Array<int32_t>* get_enumValues();
		void set_enumValues(IL2CPP::Array<int32_t>* value);
		void set_enumType(mscorlib::System::Type* value);
		mscorlib::System::Type* get_enumType();
		void _ctor();
	};
}

