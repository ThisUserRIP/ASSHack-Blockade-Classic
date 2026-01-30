#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace UnityEngine_UI::UnityEngine::UI
{
	struct AnimationTriggers : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* m_NormalTrigger;
		mscorlib::System::String* m_HighlightedTrigger;
		mscorlib::System::String* m_PressedTrigger;
		mscorlib::System::String* m_SelectedTrigger;
		mscorlib::System::String* m_DisabledTrigger;
		struct StaticFields
		{
			mscorlib::System::String* kDefaultNormalAnimName;
			mscorlib::System::String* kDefaultHighlightedAnimName;
			mscorlib::System::String* kDefaultPressedAnimName;
			mscorlib::System::String* kDefaultSelectedAnimName;
			mscorlib::System::String* kDefaultDisabledAnimName;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		mscorlib::System::String* get_normalTrigger();
		void set_normalTrigger(mscorlib::System::String* value);
		mscorlib::System::String* get_highlightedTrigger();
		void set_highlightedTrigger(mscorlib::System::String* value);
		mscorlib::System::String* get_pressedTrigger();
		void set_pressedTrigger(mscorlib::System::String* value);
		mscorlib::System::String* get_selectedTrigger();
		void set_selectedTrigger(mscorlib::System::String* value);
		mscorlib::System::String* get_disabledTrigger();
		void set_disabledTrigger(mscorlib::System::String* value);
		void _ctor();
	};
}

