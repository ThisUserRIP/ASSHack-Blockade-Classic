#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "UnityEngine_Rendering_DebugUI.h"
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering { struct DebugUI; };
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering { struct DebugUI_Panel; };
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering { struct DebugUI_IContainer; };
#include "UnityEngine_Rendering_DebugUI_Flags.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering
{
	struct DebugUI_Widget : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::DebugUI_Panel* m_Panel;
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::DebugUI_IContainer* m_Parent;
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::DebugUI_Flags _flags_k__BackingField;
		mscorlib::System::String* _displayName_k__BackingField;
		mscorlib::System::String* _queryPath_k__BackingField;
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::DebugUI_Panel* get_panel();
		void set_panel(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::DebugUI_Panel* value);
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::DebugUI_IContainer* get_parent();
		void set_parent(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::DebugUI_IContainer* value);
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::DebugUI_Flags get_flags();
		void set_flags(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::DebugUI_Flags value);
		mscorlib::System::String* get_displayName();
		void set_displayName(mscorlib::System::String* value);
		mscorlib::System::String* get_queryPath();
		void set_queryPath(mscorlib::System::String* value);
		bool get_isEditorOnly();
		bool get_isRuntimeOnly();
		bool get_isInactiveInEditor();
		void GenerateQueryPath();
		int32_t GetHashCode();
		void _ctor();
	};
}

