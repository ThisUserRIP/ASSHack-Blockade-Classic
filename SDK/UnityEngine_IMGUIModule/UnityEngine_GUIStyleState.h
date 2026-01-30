#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
namespace UnityEngine_IMGUIModule::UnityEngine { struct GUIStyle; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_CoreModule::UnityEngine { struct Texture2D; };
#include "..\UnityEngine_CoreModule\UnityEngine_Color.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color; };

namespace UnityEngine_IMGUIModule::UnityEngine
{
	struct GUIStyleState : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		intptr_t m_Ptr;
		UnityEngine_IMGUIModule::UnityEngine::GUIStyle* m_SourceStyle;
		void set_background(UnityEngine_CoreModule::UnityEngine::Texture2D* value);
		UnityEngine_CoreModule::UnityEngine::Color get_textColor();
		void set_textColor(UnityEngine_CoreModule::UnityEngine::Color value);
		static intptr_t Init();
		void Cleanup();
		void _ctor();
		void _ctor(UnityEngine_IMGUIModule::UnityEngine::GUIStyle* sourceStyle, intptr_t source);
		static UnityEngine_IMGUIModule::UnityEngine::GUIStyleState* GetGUIStyleState(UnityEngine_IMGUIModule::UnityEngine::GUIStyle* sourceStyle, intptr_t source);
		void Finalize();
		void get_textColor_Injected(UnityEngine_CoreModule::UnityEngine::Color& ret);
		void set_textColor_Injected(UnityEngine_CoreModule::UnityEngine::Color& value);
	};
}

