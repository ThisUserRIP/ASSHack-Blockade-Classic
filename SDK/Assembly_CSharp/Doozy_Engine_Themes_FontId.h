#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
namespace UnityEngine_TextRenderingModule::UnityEngine { struct Font; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Guid.h"
namespace mscorlib::System { struct Guid; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::Doozy::Engine::Themes
{
	struct FontId
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_TextRenderingModule::UnityEngine::Font* m_font;
		IL2CPP::Array<uint8_t>* SerializedGuid;
		mscorlib::System::Guid m_id;
		mscorlib::System::Guid get_Id();
		void set_Id(mscorlib::System::Guid value);
		UnityEngine_TextRenderingModule::UnityEngine::Font* get_Font();
		void set_Font(UnityEngine_TextRenderingModule::UnityEngine::Font* value);
		void _ctor(UnityEngine_TextRenderingModule::UnityEngine::Font* font);
		void _ctor(mscorlib::System::Guid id, UnityEngine_TextRenderingModule::UnityEngine::Font* font);
		void OnBeforeSerialize();
		void OnAfterDeserialize();
		void SetId(mscorlib::System::Guid newGuid);
		void SetFont(UnityEngine_TextRenderingModule::UnityEngine::Font* font);
	};
}

