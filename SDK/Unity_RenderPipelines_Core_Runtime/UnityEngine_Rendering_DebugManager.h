#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering { struct DebugActionDesc; };
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering { struct DebugActionState; };
namespace mscorlib::System { template <typename T> struct Lazy_1; };
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering { struct DebugUI_Panel; };
namespace mscorlib::System::Collections::ObjectModel { template <typename T> struct ReadOnlyCollection_1; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { template <typename T> struct Action_1; };
namespace mscorlib::System { struct Action; };
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::UI { struct DebugUIHandlerCanvas; };
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::UI { struct DebugUIHandlerPersistentCanvas; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "UnityEngine_Rendering_DebugAction.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering { struct IDebugData; };
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::UI { struct DebugUIHandlerWidget; };
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering { struct DebugUI_Widget; };
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering { struct DebugUI_IContainer; };

namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering
{
	struct DebugManager : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::DebugActionDesc*>* m_DebugActions;
		IL2CPP::Array<Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::DebugActionState*>* m_DebugActionStates;
		mscorlib::System::Collections::ObjectModel::ReadOnlyCollection_1<Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::DebugUI_Panel>* m_ReadOnlyPanels;
		mscorlib::System::Collections::Generic::List_1<Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::DebugUI_Panel>* m_Panels;
		mscorlib::System::Action_1<mscorlib::System::Boolean>* onDisplayRuntimeUIChanged;
		mscorlib::System::Action* onSetDirty;
		mscorlib::System::Action* resetData;
		bool refreshEditorRequested;
		UnityEngine_CoreModule::UnityEngine::GameObject* m_Root;
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::UI::DebugUIHandlerCanvas* m_RootUICanvas;
		UnityEngine_CoreModule::UnityEngine::GameObject* m_PersistentRoot;
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::UI::DebugUIHandlerPersistentCanvas* m_RootUIPersistentCanvas;
		bool m_EditorOpen;
		struct StaticFields
		{
			mscorlib::System::String* kEnableDebugBtn1;
			mscorlib::System::String* kEnableDebugBtn2;
			mscorlib::System::String* kDebugPreviousBtn;
			mscorlib::System::String* kDebugNextBtn;
			mscorlib::System::String* kValidateBtn;
			mscorlib::System::String* kPersistentBtn;
			mscorlib::System::String* kDPadVertical;
			mscorlib::System::String* kDPadHorizontal;
			mscorlib::System::String* kMultiplierBtn;
			mscorlib::System::String* kResetBtn;
			mscorlib::System::String* kEnableDebug;
			mscorlib::System::Lazy_1<Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::DebugManager>* s_Instance;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void RegisterActions();
		void AddAction(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::DebugAction action, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::DebugActionDesc* desc);
		void SampleAction(int32_t actionIndex);
		void UpdateAction(int32_t actionIndex);
		void UpdateActions();
		float GetAction(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::DebugAction action);
		void RegisterInputs();
		static Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::DebugManager* get_instance();
		void UpdateReadOnlyCollection();
		mscorlib::System::Collections::ObjectModel::ReadOnlyCollection_1<Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::DebugUI_Panel>* get_panels();
		void add_onDisplayRuntimeUIChanged(mscorlib::System::Action_1<mscorlib::System::Boolean>* value);
		void remove_onDisplayRuntimeUIChanged(mscorlib::System::Action_1<mscorlib::System::Boolean>* value);
		void add_onSetDirty(mscorlib::System::Action* value);
		void remove_onSetDirty(mscorlib::System::Action* value);
		void add_resetData(mscorlib::System::Action* value);
		void remove_resetData(mscorlib::System::Action* value);
		bool get_displayEditorUI();
		void ToggleEditorUI(bool open);
		bool get_displayRuntimeUI();
		void set_displayRuntimeUI(bool value);
		bool get_displayPersistentRuntimeUI();
		void set_displayPersistentRuntimeUI(bool value);
		void _ctor();
		void RefreshEditor();
		void Reset();
		void ReDrawOnScreenDebug();
		void RegisterData(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::IDebugData* data);
		void UnregisterData(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::IDebugData* data);
		int32_t GetState();
		void RegisterRootCanvas(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::UI::DebugUIHandlerCanvas* root);
		void ChangeSelection(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::UI::DebugUIHandlerWidget* widget, bool fromNext);
		void CheckPersistentCanvas();
		void TogglePersistent(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::DebugUI_Widget* widget);
		void OnPanelDirty(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::DebugUI_Panel* panel);
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::DebugUI_Panel* GetPanel(mscorlib::System::String* displayName, bool createIfNull, int32_t groupIndex, bool overrideIfExist);
		void RemovePanel(mscorlib::System::String* displayName);
		void RemovePanel(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::DebugUI_Panel* panel);
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::DebugUI_Widget* GetItem(mscorlib::System::String* queryPath);
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::DebugUI_Widget* GetItem(mscorlib::System::String* queryPath, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::DebugUI_IContainer* container);
		static void _cctor();
	};
}

