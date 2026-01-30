#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::UI { struct DebugUIPrefabBundle; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::UI { struct DebugUIHandlerPanel; };
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::UI { struct DebugUIHandlerWidget; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering { struct DebugUI_IContainer; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };

namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::UI
{
	struct DebugUIHandlerCanvas : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t m_DebugTreeState;
		mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::Type, UnityEngine_CoreModule::UnityEngine::Transform>* m_PrefabsMap;
		UnityEngine_CoreModule::UnityEngine::Transform* panelPrefab;
		mscorlib::System::Collections::Generic::List_1<Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::UI::DebugUIPrefabBundle>* prefabs;
		mscorlib::System::Collections::Generic::List_1<Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::UI::DebugUIHandlerPanel>* m_UIPanels;
		int32_t m_SelectedPanel;
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::UI::DebugUIHandlerWidget* m_SelectedWidget;
		mscorlib::System::String* m_CurrentQueryPath;
		void OnEnable();
		void Update();
		void ResetAllHierarchy();
		void Rebuild();
		void Traverse(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::DebugUI_IContainer* container, UnityEngine_CoreModule::UnityEngine::Transform* parentTransform, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::UI::DebugUIHandlerWidget* parentUIHandler);
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::UI::DebugUIHandlerWidget* GetWidgetFromPath(mscorlib::System::String* queryPath);
		void ActivatePanel(int32_t index, bool tryAndKeepSelection);
		void ChangeSelection(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::UI::DebugUIHandlerWidget* widget, bool fromNext);
		void SelectPreviousItem();
		void SelectNextItem();
		void ChangeSelectionValue(float multiplier);
		void ActivateSelection();
		void HandleInput();
		void _ctor();
		bool _ActivatePanel_b__14_1(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::UI::DebugUIHandlerWidget* w);
	};
}

