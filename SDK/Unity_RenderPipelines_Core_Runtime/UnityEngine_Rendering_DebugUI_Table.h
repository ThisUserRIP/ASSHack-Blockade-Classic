#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_Rendering_DebugUI_Container.h"
#include "UnityEngine_Rendering_DebugUI.h"
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering { struct DebugUI; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering { struct DebugUI_Widget; };
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering { template <typename T> struct ObservableList_1; };
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering { template <typename T> struct ListChangedEventArgs_1; };

namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering
{
	struct DebugUI_Table : Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::DebugUI_Container
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool isReadOnly;
		IL2CPP::Array<bool>* m_Header;
		void _ctor();
		void SetColumnVisibility(int32_t index, bool visible);
		bool GetColumnVisibility(int32_t index);
		IL2CPP::Array<bool>* get_VisibleColumns();
		void OnItemAdded(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ObservableList_1<Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::DebugUI_Widget>* sender, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ListChangedEventArgs_1<Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::DebugUI_Widget>* e);
		void OnItemRemoved(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ObservableList_1<Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::DebugUI_Widget>* sender, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ListChangedEventArgs_1<Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::DebugUI_Widget>* e);
	};
}

