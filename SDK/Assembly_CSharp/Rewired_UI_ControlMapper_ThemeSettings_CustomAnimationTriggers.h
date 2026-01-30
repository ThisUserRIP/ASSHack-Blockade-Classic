#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Rewired_UI_ControlMapper_ThemeSettings.h"
namespace Assembly_CSharp::Rewired::UI::ControlMapper { struct ThemeSettings; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_UI::UnityEngine::UI { struct AnimationTriggers; };

namespace Assembly_CSharp::Rewired::UI::ControlMapper
{
	struct ThemeSettings_CustomAnimationTriggers : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* m_DisabledTrigger;
		mscorlib::System::String* m_HighlightedTrigger;
		mscorlib::System::String* m_NormalTrigger;
		mscorlib::System::String* m_PressedTrigger;
		mscorlib::System::String* m_SelectedTrigger;
		mscorlib::System::String* m_DisabledHighlightedTrigger;
		void _ctor();
		mscorlib::System::String* get_disabledTrigger();
		void set_disabledTrigger(mscorlib::System::String* value);
		mscorlib::System::String* get_highlightedTrigger();
		void set_highlightedTrigger(mscorlib::System::String* value);
		mscorlib::System::String* get_normalTrigger();
		void set_normalTrigger(mscorlib::System::String* value);
		mscorlib::System::String* get_pressedTrigger();
		void set_pressedTrigger(mscorlib::System::String* value);
		mscorlib::System::String* get_selectedTrigger();
		void set_selectedTrigger(mscorlib::System::String* value);
		mscorlib::System::String* get_disabledHighlightedTrigger();
		void set_disabledHighlightedTrigger(mscorlib::System::String* value);
		static UnityEngine_UI::UnityEngine::UI::AnimationTriggers* op_Implicit(Assembly_CSharp::Rewired::UI::ControlMapper::ThemeSettings_CustomAnimationTriggers* item);
	};
}

