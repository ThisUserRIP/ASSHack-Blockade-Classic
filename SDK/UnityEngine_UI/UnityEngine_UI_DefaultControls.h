#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace UnityEngine_UI::UnityEngine::UI { struct DefaultControls_IFactoryControls; };
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
namespace UnityEngine_UI::UnityEngine::UI { struct Text; };
namespace UnityEngine_UI::UnityEngine::UI { struct Selectable; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "UnityEngine_UI_DefaultControls_Resources.h"
namespace UnityEngine_UI::UnityEngine::UI { struct DefaultControls_Resources; };

namespace UnityEngine_UI::UnityEngine::UI
{
	struct DefaultControls : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			UnityEngine_UI::UnityEngine::UI::DefaultControls_IFactoryControls* m_CurrentFactory;
			float kWidth;
			float kThickHeight;
			float kThinHeight;
			UnityEngine_CoreModule::UnityEngine::Vector2 s_ThickElementSize;
			UnityEngine_CoreModule::UnityEngine::Vector2 s_ThinElementSize;
			UnityEngine_CoreModule::UnityEngine::Vector2 s_ImageElementSize;
			UnityEngine_CoreModule::UnityEngine::Color s_DefaultSelectableColor;
			UnityEngine_CoreModule::UnityEngine::Color s_PanelColor;
			UnityEngine_CoreModule::UnityEngine::Color s_TextColor;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static UnityEngine_UI::UnityEngine::UI::DefaultControls_IFactoryControls* get_factory();
		static UnityEngine_CoreModule::UnityEngine::GameObject* CreateUIElementRoot(mscorlib::System::String* name, UnityEngine_CoreModule::UnityEngine::Vector2 size, IL2CPP::Array<mscorlib::System::Type*>* components);
		static UnityEngine_CoreModule::UnityEngine::GameObject* CreateUIObject(mscorlib::System::String* name, UnityEngine_CoreModule::UnityEngine::GameObject* parent, IL2CPP::Array<mscorlib::System::Type*>* components);
		static void SetDefaultTextValues(UnityEngine_UI::UnityEngine::UI::Text* lbl);
		static void SetDefaultColorTransitionValues(UnityEngine_UI::UnityEngine::UI::Selectable* slider);
		static void SetParentAndAlign(UnityEngine_CoreModule::UnityEngine::GameObject* child, UnityEngine_CoreModule::UnityEngine::GameObject* parent);
		static void SetLayerRecursively(UnityEngine_CoreModule::UnityEngine::GameObject* go, int32_t layer);
		static UnityEngine_CoreModule::UnityEngine::GameObject* CreatePanel(UnityEngine_UI::UnityEngine::UI::DefaultControls_Resources resources);
		static UnityEngine_CoreModule::UnityEngine::GameObject* CreateButton(UnityEngine_UI::UnityEngine::UI::DefaultControls_Resources resources);
		static UnityEngine_CoreModule::UnityEngine::GameObject* CreateText(UnityEngine_UI::UnityEngine::UI::DefaultControls_Resources resources);
		static UnityEngine_CoreModule::UnityEngine::GameObject* CreateImage(UnityEngine_UI::UnityEngine::UI::DefaultControls_Resources resources);
		static UnityEngine_CoreModule::UnityEngine::GameObject* CreateRawImage(UnityEngine_UI::UnityEngine::UI::DefaultControls_Resources resources);
		static UnityEngine_CoreModule::UnityEngine::GameObject* CreateSlider(UnityEngine_UI::UnityEngine::UI::DefaultControls_Resources resources);
		static UnityEngine_CoreModule::UnityEngine::GameObject* CreateScrollbar(UnityEngine_UI::UnityEngine::UI::DefaultControls_Resources resources);
		static UnityEngine_CoreModule::UnityEngine::GameObject* CreateToggle(UnityEngine_UI::UnityEngine::UI::DefaultControls_Resources resources);
		static UnityEngine_CoreModule::UnityEngine::GameObject* CreateInputField(UnityEngine_UI::UnityEngine::UI::DefaultControls_Resources resources);
		static UnityEngine_CoreModule::UnityEngine::GameObject* CreateDropdown(UnityEngine_UI::UnityEngine::UI::DefaultControls_Resources resources);
		static UnityEngine_CoreModule::UnityEngine::GameObject* CreateScrollView(UnityEngine_UI::UnityEngine::UI::DefaultControls_Resources resources);
		static void _cctor();
	};
}

