#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Rewired_UI_ControlMapper_ControlMapper.h"
namespace Assembly_CSharp::Rewired::UI::ControlMapper { struct ControlMapper; };
namespace UnityEngine_UIModule::UnityEngine { struct Canvas; };
namespace UnityEngine_UIModule::UnityEngine { struct CanvasGroup; };
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
namespace Assembly_CSharp::Rewired::UI::ControlMapper { struct UIGroup; };
namespace UnityEngine_UI::UnityEngine::UI { struct Scrollbar; };
namespace UnityEngine_UI::UnityEngine::UI { struct ScrollRect; };
namespace Unity_TextMeshPro::TMPro { struct TMP_Text; };
namespace UnityEngine_UI::UnityEngine::UI { struct Button; };
namespace UnityEngine_UI::UnityEngine::UI { struct Selectable; };
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
namespace UnityEngine_UI::UnityEngine::UI { struct Image; };
namespace UnityEngine_UI::UnityEngine::UI { struct LayoutElement; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace Assembly_CSharp::Rewired::UI::ControlMapper
{
	struct ControlMapper_References : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_UIModule::UnityEngine::Canvas* _canvas;
		UnityEngine_UIModule::UnityEngine::CanvasGroup* _mainCanvasGroup;
		UnityEngine_CoreModule::UnityEngine::Transform* _mainContent;
		UnityEngine_CoreModule::UnityEngine::Transform* _mainContentInner;
		Assembly_CSharp::Rewired::UI::ControlMapper::UIGroup* _playersGroup;
		UnityEngine_CoreModule::UnityEngine::Transform* _controllerGroup;
		UnityEngine_CoreModule::UnityEngine::Transform* _controllerGroupLabelGroup;
		Assembly_CSharp::Rewired::UI::ControlMapper::UIGroup* _controllerSettingsGroup;
		Assembly_CSharp::Rewired::UI::ControlMapper::UIGroup* _assignedControllersGroup;
		UnityEngine_CoreModule::UnityEngine::Transform* _settingsAndMapCategoriesGroup;
		Assembly_CSharp::Rewired::UI::ControlMapper::UIGroup* _settingsGroup;
		Assembly_CSharp::Rewired::UI::ControlMapper::UIGroup* _mapCategoriesGroup;
		UnityEngine_CoreModule::UnityEngine::Transform* _inputGridGroup;
		UnityEngine_CoreModule::UnityEngine::Transform* _inputGridContainer;
		UnityEngine_CoreModule::UnityEngine::Transform* _inputGridHeadersGroup;
		UnityEngine_UI::UnityEngine::UI::Scrollbar* _inputGridVScrollbar;
		UnityEngine_UI::UnityEngine::UI::ScrollRect* _inputGridScrollRect;
		UnityEngine_CoreModule::UnityEngine::Transform* _inputGridInnerGroup;
		Unity_TextMeshPro::TMPro::TMP_Text* _controllerNameLabel;
		UnityEngine_UI::UnityEngine::UI::Button* _removeControllerButton;
		UnityEngine_UI::UnityEngine::UI::Button* _assignControllerButton;
		UnityEngine_UI::UnityEngine::UI::Button* _calibrateControllerButton;
		UnityEngine_UI::UnityEngine::UI::Button* _doneButton;
		UnityEngine_UI::UnityEngine::UI::Button* _restoreDefaultsButton;
		UnityEngine_UI::UnityEngine::UI::Selectable* _defaultSelection;
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::GameObject*>* _fixedSelectableUIElements;
		UnityEngine_UI::UnityEngine::UI::Image* _mainBackgroundImage;
		UnityEngine_UI::UnityEngine::UI::LayoutElement* _inputGridLayoutElement_k__BackingField;
		UnityEngine_CoreModule::UnityEngine::Transform* _inputGridActionColumn_k__BackingField;
		UnityEngine_CoreModule::UnityEngine::Transform* _inputGridKeyboardColumn_k__BackingField;
		UnityEngine_CoreModule::UnityEngine::Transform* _inputGridMouseColumn_k__BackingField;
		UnityEngine_CoreModule::UnityEngine::Transform* _inputGridControllerColumn_k__BackingField;
		UnityEngine_CoreModule::UnityEngine::Transform* _inputGridHeader1_k__BackingField;
		UnityEngine_CoreModule::UnityEngine::Transform* _inputGridHeader2_k__BackingField;
		UnityEngine_CoreModule::UnityEngine::Transform* _inputGridHeader3_k__BackingField;
		UnityEngine_CoreModule::UnityEngine::Transform* _inputGridHeader4_k__BackingField;
		UnityEngine_UIModule::UnityEngine::Canvas* get_canvas();
		UnityEngine_UIModule::UnityEngine::CanvasGroup* get_mainCanvasGroup();
		UnityEngine_CoreModule::UnityEngine::Transform* get_mainContent();
		UnityEngine_CoreModule::UnityEngine::Transform* get_mainContentInner();
		Assembly_CSharp::Rewired::UI::ControlMapper::UIGroup* get_playersGroup();
		UnityEngine_CoreModule::UnityEngine::Transform* get_controllerGroup();
		UnityEngine_CoreModule::UnityEngine::Transform* get_controllerGroupLabelGroup();
		Assembly_CSharp::Rewired::UI::ControlMapper::UIGroup* get_controllerSettingsGroup();
		Assembly_CSharp::Rewired::UI::ControlMapper::UIGroup* get_assignedControllersGroup();
		UnityEngine_CoreModule::UnityEngine::Transform* get_settingsAndMapCategoriesGroup();
		Assembly_CSharp::Rewired::UI::ControlMapper::UIGroup* get_settingsGroup();
		Assembly_CSharp::Rewired::UI::ControlMapper::UIGroup* get_mapCategoriesGroup();
		UnityEngine_CoreModule::UnityEngine::Transform* get_inputGridGroup();
		UnityEngine_CoreModule::UnityEngine::Transform* get_inputGridContainer();
		UnityEngine_CoreModule::UnityEngine::Transform* get_inputGridHeadersGroup();
		UnityEngine_UI::UnityEngine::UI::Scrollbar* get_inputGridVScrollbar();
		UnityEngine_UI::UnityEngine::UI::ScrollRect* get_inputGridScrollRect();
		UnityEngine_CoreModule::UnityEngine::Transform* get_inputGridInnerGroup();
		Unity_TextMeshPro::TMPro::TMP_Text* get_controllerNameLabel();
		UnityEngine_UI::UnityEngine::UI::Button* get_removeControllerButton();
		UnityEngine_UI::UnityEngine::UI::Button* get_assignControllerButton();
		UnityEngine_UI::UnityEngine::UI::Button* get_calibrateControllerButton();
		UnityEngine_UI::UnityEngine::UI::Button* get_doneButton();
		UnityEngine_UI::UnityEngine::UI::Button* get_restoreDefaultsButton();
		UnityEngine_UI::UnityEngine::UI::Selectable* get_defaultSelection();
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::GameObject*>* get_fixedSelectableUIElements();
		UnityEngine_UI::UnityEngine::UI::Image* get_mainBackgroundImage();
		UnityEngine_UI::UnityEngine::UI::LayoutElement* get_inputGridLayoutElement();
		void set_inputGridLayoutElement(UnityEngine_UI::UnityEngine::UI::LayoutElement* value);
		UnityEngine_CoreModule::UnityEngine::Transform* get_inputGridActionColumn();
		void set_inputGridActionColumn(UnityEngine_CoreModule::UnityEngine::Transform* value);
		UnityEngine_CoreModule::UnityEngine::Transform* get_inputGridKeyboardColumn();
		void set_inputGridKeyboardColumn(UnityEngine_CoreModule::UnityEngine::Transform* value);
		UnityEngine_CoreModule::UnityEngine::Transform* get_inputGridMouseColumn();
		void set_inputGridMouseColumn(UnityEngine_CoreModule::UnityEngine::Transform* value);
		UnityEngine_CoreModule::UnityEngine::Transform* get_inputGridControllerColumn();
		void set_inputGridControllerColumn(UnityEngine_CoreModule::UnityEngine::Transform* value);
		UnityEngine_CoreModule::UnityEngine::Transform* get_inputGridHeader1();
		void set_inputGridHeader1(UnityEngine_CoreModule::UnityEngine::Transform* value);
		UnityEngine_CoreModule::UnityEngine::Transform* get_inputGridHeader2();
		void set_inputGridHeader2(UnityEngine_CoreModule::UnityEngine::Transform* value);
		UnityEngine_CoreModule::UnityEngine::Transform* get_inputGridHeader3();
		void set_inputGridHeader3(UnityEngine_CoreModule::UnityEngine::Transform* value);
		UnityEngine_CoreModule::UnityEngine::Transform* get_inputGridHeader4();
		void set_inputGridHeader4(UnityEngine_CoreModule::UnityEngine::Transform* value);
		bool Check();
		void _ctor();
	};
}

