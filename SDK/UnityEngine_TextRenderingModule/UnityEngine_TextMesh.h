#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_Component.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_TextRenderingModule::UnityEngine { struct Font; };
#include "UnityEngine_TextAlignment.h"

namespace UnityEngine_TextRenderingModule::UnityEngine
{
	struct TextMesh : UnityEngine_CoreModule::UnityEngine::Component
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* get_text();
		void set_text(mscorlib::System::String* value);
		UnityEngine_TextRenderingModule::UnityEngine::Font* get_font();
		void set_font(UnityEngine_TextRenderingModule::UnityEngine::Font* value);
		UnityEngine_TextRenderingModule::UnityEngine::TextAlignment get_alignment();
		void set_alignment(UnityEngine_TextRenderingModule::UnityEngine::TextAlignment value);
	};
}

