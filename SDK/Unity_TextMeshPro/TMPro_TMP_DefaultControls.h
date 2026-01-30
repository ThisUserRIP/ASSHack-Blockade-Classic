#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
#include "..\UnityEngine_CoreModule\UnityEngine_Color.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color; };
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Unity_TextMeshPro::TMPro { struct TMP_Text; };
namespace UnityEngine_UI::UnityEngine::UI { struct Selectable; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "TMPro_TMP_DefaultControls_Resources.h"
namespace Unity_TextMeshPro::TMPro { struct TMP_DefaultControls_Resources; };

namespace Unity_TextMeshPro::TMPro
{
	struct TMP_DefaultControls : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			float kWidth;
			float kThickHeight;
			float kThinHeight;
			UnityEngine_CoreModule::UnityEngine::Vector2 s_TextElementSize;
			UnityEngine_CoreModule::UnityEngine::Vector2 s_ThickElementSize;
			UnityEngine_CoreModule::UnityEngine::Vector2 s_ThinElementSize;
			UnityEngine_CoreModule::UnityEngine::Color s_DefaultSelectableColor;
			UnityEngine_CoreModule::UnityEngine::Color s_TextColor;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static UnityEngine_CoreModule::UnityEngine::GameObject* CreateUIElementRoot(mscorlib::System::String* name, UnityEngine_CoreModule::UnityEngine::Vector2 size);
		static UnityEngine_CoreModule::UnityEngine::GameObject* CreateUIObject(mscorlib::System::String* name, UnityEngine_CoreModule::UnityEngine::GameObject* parent);
		static void SetDefaultTextValues(Unity_TextMeshPro::TMPro::TMP_Text* lbl);
		static void SetDefaultColorTransitionValues(UnityEngine_UI::UnityEngine::UI::Selectable* slider);
		static void SetParentAndAlign(UnityEngine_CoreModule::UnityEngine::GameObject* child, UnityEngine_CoreModule::UnityEngine::GameObject* parent);
		static void SetLayerRecursively(UnityEngine_CoreModule::UnityEngine::GameObject* go, int32_t layer);
		static UnityEngine_CoreModule::UnityEngine::GameObject* CreateScrollbar(Unity_TextMeshPro::TMPro::TMP_DefaultControls_Resources resources);
		static UnityEngine_CoreModule::UnityEngine::GameObject* CreateButton(Unity_TextMeshPro::TMPro::TMP_DefaultControls_Resources resources);
		static UnityEngine_CoreModule::UnityEngine::GameObject* CreateText(Unity_TextMeshPro::TMPro::TMP_DefaultControls_Resources resources);
		static UnityEngine_CoreModule::UnityEngine::GameObject* CreateInputField(Unity_TextMeshPro::TMPro::TMP_DefaultControls_Resources resources);
		static UnityEngine_CoreModule::UnityEngine::GameObject* CreateDropdown(Unity_TextMeshPro::TMPro::TMP_DefaultControls_Resources resources);
		static void _cctor();
	};
}

