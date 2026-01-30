#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct Object; };
namespace Unity_TextMeshPro::TMPro { struct Compute_DT_EventArgs; };
namespace Unity_TextMeshPro::TMPro { template <typename A, typename B> struct FastAction_2; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace UnityEngine_CoreModule::UnityEngine { struct Material; };
namespace UnityEngine_CoreModule::UnityEngine { struct Object; };
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
namespace Unity_TextMeshPro::TMPro { template <typename A, typename B, typename C> struct FastAction_3; };
namespace Unity_TextMeshPro::TMPro { template <typename A> struct FastAction_1; };
namespace Unity_TextMeshPro::TMPro { struct FastAction; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Unity_TextMeshPro::TMPro
{
	struct TMPro_EventManager : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			Unity_TextMeshPro::TMPro::FastAction_2<mscorlib::System::Object, Unity_TextMeshPro::TMPro::Compute_DT_EventArgs>* COMPUTE_DT_EVENT;
			Unity_TextMeshPro::TMPro::FastAction_2<mscorlib::System::Boolean, UnityEngine_CoreModule::UnityEngine::Material>* MATERIAL_PROPERTY_EVENT;
			Unity_TextMeshPro::TMPro::FastAction_2<mscorlib::System::Boolean, UnityEngine_CoreModule::UnityEngine::Object>* FONT_PROPERTY_EVENT;
			Unity_TextMeshPro::TMPro::FastAction_2<mscorlib::System::Boolean, UnityEngine_CoreModule::UnityEngine::Object>* SPRITE_ASSET_PROPERTY_EVENT;
			Unity_TextMeshPro::TMPro::FastAction_2<mscorlib::System::Boolean, UnityEngine_CoreModule::UnityEngine::Object>* TEXTMESHPRO_PROPERTY_EVENT;
			Unity_TextMeshPro::TMPro::FastAction_3<UnityEngine_CoreModule::UnityEngine::GameObject, UnityEngine_CoreModule::UnityEngine::Material, UnityEngine_CoreModule::UnityEngine::Material>* DRAG_AND_DROP_MATERIAL_EVENT;
			Unity_TextMeshPro::TMPro::FastAction_1<mscorlib::System::Boolean>* TEXT_STYLE_PROPERTY_EVENT;
			Unity_TextMeshPro::TMPro::FastAction_1<UnityEngine_CoreModule::UnityEngine::Object>* COLOR_GRADIENT_PROPERTY_EVENT;
			Unity_TextMeshPro::TMPro::FastAction* TMP_SETTINGS_PROPERTY_EVENT;
			Unity_TextMeshPro::TMPro::FastAction* RESOURCE_LOAD_EVENT;
			Unity_TextMeshPro::TMPro::FastAction_2<mscorlib::System::Boolean, UnityEngine_CoreModule::UnityEngine::Object>* TEXTMESHPRO_UGUI_PROPERTY_EVENT;
			Unity_TextMeshPro::TMPro::FastAction_1<UnityEngine_CoreModule::UnityEngine::Object>* TEXT_CHANGED_EVENT;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void ON_MATERIAL_PROPERTY_CHANGED(bool isChanged, UnityEngine_CoreModule::UnityEngine::Material* mat);
		static void ON_FONT_PROPERTY_CHANGED(bool isChanged, UnityEngine_CoreModule::UnityEngine::Object* obj);
		static void ON_SPRITE_ASSET_PROPERTY_CHANGED(bool isChanged, UnityEngine_CoreModule::UnityEngine::Object* obj);
		static void ON_TEXTMESHPRO_PROPERTY_CHANGED(bool isChanged, UnityEngine_CoreModule::UnityEngine::Object* obj);
		static void ON_DRAG_AND_DROP_MATERIAL_CHANGED(UnityEngine_CoreModule::UnityEngine::GameObject* sender, UnityEngine_CoreModule::UnityEngine::Material* currentMaterial, UnityEngine_CoreModule::UnityEngine::Material* newMaterial);
		static void ON_TEXT_STYLE_PROPERTY_CHANGED(bool isChanged);
		static void ON_COLOR_GRADIENT_PROPERTY_CHANGED(UnityEngine_CoreModule::UnityEngine::Object* obj);
		static void ON_TEXT_CHANGED(UnityEngine_CoreModule::UnityEngine::Object* obj);
		static void ON_TMP_SETTINGS_CHANGED();
		static void ON_RESOURCES_LOADED();
		static void ON_TEXTMESHPRO_UGUI_PROPERTY_CHANGED(bool isChanged, UnityEngine_CoreModule::UnityEngine::Object* obj);
		static void ON_COMPUTE_DT_EVENT(mscorlib::System::Object* Sender, Unity_TextMeshPro::TMPro::Compute_DT_EventArgs* e);
		static void _cctor();
	};
}

