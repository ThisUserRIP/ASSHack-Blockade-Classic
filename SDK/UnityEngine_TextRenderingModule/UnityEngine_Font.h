#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_Object.h"
namespace mscorlib::System { template <typename T> struct Action_1; };
namespace UnityEngine_TextRenderingModule::UnityEngine { struct Font_FontTextureRebuildCallback; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_CoreModule::UnityEngine { struct Material; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Char.h"
namespace mscorlib::System { struct Char; };
namespace mscorlib::System { struct String; };
#include "UnityEngine_FontStyle.h"

namespace UnityEngine_TextRenderingModule::UnityEngine
{
	struct Font : UnityEngine_CoreModule::UnityEngine::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_TextRenderingModule::UnityEngine::Font_FontTextureRebuildCallback* m_FontTextureRebuildCallback;
		struct StaticFields
		{
			mscorlib::System::Action_1<UnityEngine_TextRenderingModule::UnityEngine::Font>* textureRebuilt;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void add_textureRebuilt(mscorlib::System::Action_1<UnityEngine_TextRenderingModule::UnityEngine::Font>* value);
		static void remove_textureRebuilt(mscorlib::System::Action_1<UnityEngine_TextRenderingModule::UnityEngine::Font>* value);
		UnityEngine_CoreModule::UnityEngine::Material* get_material();
		bool get_dynamic();
		int32_t get_fontSize();
		void _ctor();
		static void InvokeTextureRebuilt_Internal(UnityEngine_TextRenderingModule::UnityEngine::Font* font);
		bool HasCharacter(wchar_t c);
		bool HasCharacter(int32_t c);
		static void Internal_CreateFont(UnityEngine_TextRenderingModule::UnityEngine::Font* self, mscorlib::System::String* name);
		void RequestCharactersInTexture(mscorlib::System::String* characters, int32_t size, UnityEngine_TextRenderingModule::UnityEngine::FontStyle style);
		void RequestCharactersInTexture(mscorlib::System::String* characters);
	};
}

