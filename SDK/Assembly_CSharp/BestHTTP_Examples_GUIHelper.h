#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
namespace UnityEngine_IMGUIModule::UnityEngine { struct GUIStyle; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rect.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Rect; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Action; };

namespace Assembly_CSharp::BestHTTP::Examples
{
	struct GUIHelper : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			mscorlib::System::String* BaseURL;
			UnityEngine_IMGUIModule::UnityEngine::GUIStyle* centerAlignedLabel;
			UnityEngine_IMGUIModule::UnityEngine::GUIStyle* rightAlignedLabel;
			UnityEngine_CoreModule::UnityEngine::Rect ClientArea;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void Setup();
		static void DrawArea(UnityEngine_CoreModule::UnityEngine::Rect area, bool drawHeader, mscorlib::System::Action* action);
		static void DrawCenteredText(mscorlib::System::String* msg);
		static void DrawRow(mscorlib::System::String* key, mscorlib::System::String* value);
		static void _cctor();
	};
}

