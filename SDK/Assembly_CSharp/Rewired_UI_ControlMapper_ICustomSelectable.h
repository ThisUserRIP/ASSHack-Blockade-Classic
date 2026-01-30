#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
namespace UnityEngine_CoreModule::UnityEngine { struct Sprite; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\UnityEngine_CoreModule\UnityEngine_Color.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace UnityEngine_CoreModule::UnityEngine::Events { struct UnityAction; };

namespace Assembly_CSharp::Rewired::UI::ControlMapper
{
	struct ICustomSelectable
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Sprite* get_disabledHighlightedSprite();
		void set_disabledHighlightedSprite(UnityEngine_CoreModule::UnityEngine::Sprite* value);
		UnityEngine_CoreModule::UnityEngine::Color get_disabledHighlightedColor();
		void set_disabledHighlightedColor(UnityEngine_CoreModule::UnityEngine::Color value);
		mscorlib::System::String* get_disabledHighlightedTrigger();
		void set_disabledHighlightedTrigger(mscorlib::System::String* value);
		bool get_autoNavUp();
		void set_autoNavUp(bool value);
		bool get_autoNavDown();
		void set_autoNavDown(bool value);
		bool get_autoNavLeft();
		void set_autoNavLeft(bool value);
		bool get_autoNavRight();
		void set_autoNavRight(bool value);
		void add_CancelEvent(UnityEngine_CoreModule::UnityEngine::Events::UnityAction* value);
		void remove_CancelEvent(UnityEngine_CoreModule::UnityEngine::Events::UnityAction* value);
	};
}

