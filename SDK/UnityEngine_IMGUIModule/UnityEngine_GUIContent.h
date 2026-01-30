#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
namespace UnityEngine_CoreModule::UnityEngine { struct Texture; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_IMGUIModule::UnityEngine { struct GUIContent; };

namespace UnityEngine_IMGUIModule::UnityEngine
{
	struct GUIContent : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* m_Text;
		UnityEngine_CoreModule::UnityEngine::Texture* m_Image;
		mscorlib::System::String* m_Tooltip;
		struct StaticFields
		{
			UnityEngine_IMGUIModule::UnityEngine::GUIContent* s_Text;
			UnityEngine_IMGUIModule::UnityEngine::GUIContent* s_Image;
			UnityEngine_IMGUIModule::UnityEngine::GUIContent* s_TextImage;
			UnityEngine_IMGUIModule::UnityEngine::GUIContent* none;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		mscorlib::System::String* get_text();
		void set_text(mscorlib::System::String* value);
		void set_image(UnityEngine_CoreModule::UnityEngine::Texture* value);
		mscorlib::System::String* get_tooltip();
		void set_tooltip(mscorlib::System::String* value);
		void _ctor();
		void _ctor(mscorlib::System::String* text);
		void _ctor(UnityEngine_CoreModule::UnityEngine::Texture* image);
		void _ctor(mscorlib::System::String* text, mscorlib::System::String* tooltip);
		void _ctor(mscorlib::System::String* text, UnityEngine_CoreModule::UnityEngine::Texture* image, mscorlib::System::String* tooltip);
		void _ctor(UnityEngine_IMGUIModule::UnityEngine::GUIContent* src);
		static UnityEngine_IMGUIModule::UnityEngine::GUIContent* Temp(mscorlib::System::String* t);
		static UnityEngine_IMGUIModule::UnityEngine::GUIContent* Temp(UnityEngine_CoreModule::UnityEngine::Texture* i);
		static void ClearStaticCache();
		static IL2CPP::Array<UnityEngine_IMGUIModule::UnityEngine::GUIContent*>* Temp(IL2CPP::Array<mscorlib::System::String*>* texts);
		static IL2CPP::Array<UnityEngine_IMGUIModule::UnityEngine::GUIContent*>* Temp(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Texture*>* images);
		static void _cctor();
	};
}

