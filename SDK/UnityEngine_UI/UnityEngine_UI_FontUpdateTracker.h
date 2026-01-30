#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace UnityEngine_TextRenderingModule::UnityEngine { struct Font; };
namespace UnityEngine_UI::UnityEngine::UI { struct Text; };
namespace System_Core::System::Collections::Generic { template <typename T> struct HashSet_1; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace UnityEngine_UI::UnityEngine::UI
{
	struct FontUpdateTracker : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			mscorlib::System::Collections::Generic::Dictionary_2<UnityEngine_TextRenderingModule::UnityEngine::Font, System_Core::System::Collections::Generic::HashSet_1<UnityEngine_UI::UnityEngine::UI::Text>>* m_Tracked;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void TrackText(UnityEngine_UI::UnityEngine::UI::Text* t);
		static void RebuildForFont(UnityEngine_TextRenderingModule::UnityEngine::Font* f);
		static void UntrackText(UnityEngine_UI::UnityEngine::UI::Text* t);
		static void _cctor();
	};
}

