#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_UI\UnityEngine_EventSystems_PointerEventData.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Rewired_Core::Rewired::UI { struct IMouseInputSource; };
namespace Rewired_Core::Rewired::UI { struct ITouchInputSource; };
#include "Rewired_Integration_UnityUI_PointerEventType.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_UI::UnityEngine::EventSystems { struct EventSystem; };
namespace mscorlib::System { struct String; };

namespace Assembly_CSharp::Rewired::Integration::UnityUI
{
	struct PlayerPointerEventData : UnityEngine_UI::UnityEngine::EventSystems::PointerEventData
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t _playerId_k__BackingField;
		int32_t _inputSourceIndex_k__BackingField;
		Rewired_Core::Rewired::UI::IMouseInputSource* _mouseSource_k__BackingField;
		Rewired_Core::Rewired::UI::ITouchInputSource* _touchSource_k__BackingField;
		Assembly_CSharp::Rewired::Integration::UnityUI::PointerEventType _sourceType_k__BackingField;
		int32_t _buttonIndex_k__BackingField;
		int32_t get_playerId();
		void set_playerId(int32_t value);
		int32_t get_inputSourceIndex();
		void set_inputSourceIndex(int32_t value);
		Rewired_Core::Rewired::UI::IMouseInputSource* get_mouseSource();
		void set_mouseSource(Rewired_Core::Rewired::UI::IMouseInputSource* value);
		Rewired_Core::Rewired::UI::ITouchInputSource* get_touchSource();
		void set_touchSource(Rewired_Core::Rewired::UI::ITouchInputSource* value);
		Assembly_CSharp::Rewired::Integration::UnityUI::PointerEventType get_sourceType();
		void set_sourceType(Assembly_CSharp::Rewired::Integration::UnityUI::PointerEventType value);
		int32_t get_buttonIndex();
		void set_buttonIndex(int32_t value);
		void _ctor(UnityEngine_UI::UnityEngine::EventSystems::EventSystem* eventSystem);
		mscorlib::System::String* ToString();
	};
}

