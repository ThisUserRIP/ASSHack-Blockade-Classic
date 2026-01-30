#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
namespace UnityEngine_CoreModule::UnityEngine { struct Sprite; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace UnityEngine_UI::UnityEngine::UI
{
	struct SpriteState
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Sprite* m_HighlightedSprite;
		UnityEngine_CoreModule::UnityEngine::Sprite* m_PressedSprite;
		UnityEngine_CoreModule::UnityEngine::Sprite* m_SelectedSprite;
		UnityEngine_CoreModule::UnityEngine::Sprite* m_DisabledSprite;
		UnityEngine_CoreModule::UnityEngine::Sprite* get_highlightedSprite();
		void set_highlightedSprite(UnityEngine_CoreModule::UnityEngine::Sprite* value);
		UnityEngine_CoreModule::UnityEngine::Sprite* get_pressedSprite();
		void set_pressedSprite(UnityEngine_CoreModule::UnityEngine::Sprite* value);
		UnityEngine_CoreModule::UnityEngine::Sprite* get_selectedSprite();
		void set_selectedSprite(UnityEngine_CoreModule::UnityEngine::Sprite* value);
		UnityEngine_CoreModule::UnityEngine::Sprite* get_disabledSprite();
		void set_disabledSprite(UnityEngine_CoreModule::UnityEngine::Sprite* value);
		bool Equals(UnityEngine_UI::UnityEngine::UI::SpriteState other);
	};
}

