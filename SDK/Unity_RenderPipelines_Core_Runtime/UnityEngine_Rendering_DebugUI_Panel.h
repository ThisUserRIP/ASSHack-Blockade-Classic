#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "UnityEngine_Rendering_DebugUI.h"
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering { struct DebugUI; };
#include "UnityEngine_Rendering_DebugUI_Flags.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering { struct DebugUI_Widget; };
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering { template <typename T> struct ObservableList_1; };
namespace mscorlib::System { template <typename T> struct Action_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering { template <typename T> struct ListChangedEventArgs_1; };

namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering
{
	struct DebugUI_Panel : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::DebugUI_Flags _flags_k__BackingField;
		mscorlib::System::String* _displayName_k__BackingField;
		int32_t _groupIndex_k__BackingField;
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ObservableList_1<Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::DebugUI_Widget>* _children_k__BackingField;
		mscorlib::System::Action_1<Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::DebugUI_Panel>* onSetDirty;
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::DebugUI_Flags get_flags();
		void set_flags(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::DebugUI_Flags value);
		mscorlib::System::String* get_displayName();
		void set_displayName(mscorlib::System::String* value);
		int32_t get_groupIndex();
		void set_groupIndex(int32_t value);
		mscorlib::System::String* get_queryPath();
		bool get_isEditorOnly();
		bool get_isRuntimeOnly();
		bool get_isInactiveInEditor();
		bool get_editorForceUpdate();
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ObservableList_1<Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::DebugUI_Widget>* get_children();
		void set_children(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ObservableList_1<Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::DebugUI_Widget>* value);
		void add_onSetDirty(mscorlib::System::Action_1<Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::DebugUI_Panel>* value);
		void remove_onSetDirty(mscorlib::System::Action_1<Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::DebugUI_Panel>* value);
		void _ctor();
		void OnItemAdded(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ObservableList_1<Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::DebugUI_Widget>* sender, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ListChangedEventArgs_1<Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::DebugUI_Widget>* e);
		void OnItemRemoved(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ObservableList_1<Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::DebugUI_Widget>* sender, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ListChangedEventArgs_1<Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::DebugUI_Widget>* e);
		void SetDirty();
		int32_t GetHashCode();
		int32_t System_IComparable_UnityEngine_Rendering_DebugUI_Panel__CompareTo(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::DebugUI_Panel* other);
	};
}

