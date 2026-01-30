#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "UnityEngine_UI_Dropdown.h"
namespace UnityEngine_UI::UnityEngine::UI { struct Dropdown; };
namespace mscorlib::System { struct String; };
namespace UnityEngine_CoreModule::UnityEngine { struct Sprite; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace UnityEngine_UI::UnityEngine::UI
{
	struct Dropdown_OptionData : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* m_Text;
		UnityEngine_CoreModule::UnityEngine::Sprite* m_Image;
		mscorlib::System::String* get_text();
		void set_text(mscorlib::System::String* value);
		UnityEngine_CoreModule::UnityEngine::Sprite* get_image();
		void set_image(UnityEngine_CoreModule::UnityEngine::Sprite* value);
		void _ctor();
		void _ctor(mscorlib::System::String* text);
		void _ctor(UnityEngine_CoreModule::UnityEngine::Sprite* image);
		void _ctor(mscorlib::System::String* text, UnityEngine_CoreModule::UnityEngine::Sprite* image);
	};
}

