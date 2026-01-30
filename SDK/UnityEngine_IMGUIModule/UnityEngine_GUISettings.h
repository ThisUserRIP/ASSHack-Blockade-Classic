#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\UnityEngine_CoreModule\UnityEngine_Color.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace UnityEngine_IMGUIModule::UnityEngine
{
	struct GUISettings : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool m_DoubleClickSelectsWord;
		bool m_TripleClickSelectsLine;
		UnityEngine_CoreModule::UnityEngine::Color m_CursorColor;
		float m_CursorFlashSpeed;
		UnityEngine_CoreModule::UnityEngine::Color m_SelectionColor;
		static float Internal_GetCursorFlashSpeed();
		bool get_doubleClickSelectsWord();
		bool get_tripleClickSelectsLine();
		UnityEngine_CoreModule::UnityEngine::Color get_cursorColor();
		float get_cursorFlashSpeed();
		UnityEngine_CoreModule::UnityEngine::Color get_selectionColor();
		void _ctor();
	};
}

