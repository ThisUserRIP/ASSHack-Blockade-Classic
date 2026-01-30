#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace UnityEngine_IMGUIModule::UnityEngine { struct GUILayoutUtility_LayoutCache; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rect.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Rect; };
namespace UnityEngine_IMGUIModule::UnityEngine { struct GUIStyle; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace UnityEngine_IMGUIModule::UnityEngine { struct GUILayoutOption; };
namespace UnityEngine_IMGUIModule::UnityEngine { struct GUILayoutGroup; };
namespace UnityEngine_IMGUIModule::UnityEngine { struct GUIContent; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };

namespace UnityEngine_IMGUIModule::UnityEngine
{
	struct GUILayoutUtility : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::Int32, UnityEngine_IMGUIModule::UnityEngine::GUILayoutUtility_LayoutCache>* s_StoredLayouts;
			mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::Int32, UnityEngine_IMGUIModule::UnityEngine::GUILayoutUtility_LayoutCache>* s_StoredWindows;
			UnityEngine_IMGUIModule::UnityEngine::GUILayoutUtility_LayoutCache* current;
			UnityEngine_CoreModule::UnityEngine::Rect kDummyRect;
			UnityEngine_IMGUIModule::UnityEngine::GUIStyle* s_SpaceStyle;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static UnityEngine_CoreModule::UnityEngine::Rect Internal_GetWindowRect(int32_t windowID);
		static void Internal_MoveWindow(int32_t windowID, UnityEngine_CoreModule::UnityEngine::Rect r);
		static UnityEngine_IMGUIModule::UnityEngine::GUILayoutUtility_LayoutCache* SelectIDList(int32_t instanceID, bool isWindow);
		static void Begin(int32_t instanceID);
		static void BeginWindow(int32_t windowID, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* style, IL2CPP::Array<UnityEngine_IMGUIModule::UnityEngine::GUILayoutOption*>* options);
		static void Layout();
		static void LayoutFromEditorWindow();
		static void LayoutFreeGroup(UnityEngine_IMGUIModule::UnityEngine::GUILayoutGroup* toplevel);
		static void LayoutSingleGroup(UnityEngine_IMGUIModule::UnityEngine::GUILayoutGroup* i);
		static UnityEngine_IMGUIModule::UnityEngine::GUILayoutGroup* CreateGUILayoutGroupInstanceOfType(mscorlib::System::Type* LayoutType);
		static UnityEngine_IMGUIModule::UnityEngine::GUILayoutGroup* BeginLayoutGroup(UnityEngine_IMGUIModule::UnityEngine::GUIStyle* style, IL2CPP::Array<UnityEngine_IMGUIModule::UnityEngine::GUILayoutOption*>* options, mscorlib::System::Type* layoutType);
		static void EndLayoutGroup();
		static UnityEngine_IMGUIModule::UnityEngine::GUILayoutGroup* BeginLayoutArea(UnityEngine_IMGUIModule::UnityEngine::GUIStyle* style, mscorlib::System::Type* layoutType);
		static UnityEngine_CoreModule::UnityEngine::Rect GetRect(UnityEngine_IMGUIModule::UnityEngine::GUIContent* content, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* style);
		static UnityEngine_CoreModule::UnityEngine::Rect GetRect(UnityEngine_IMGUIModule::UnityEngine::GUIContent* content, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* style, IL2CPP::Array<UnityEngine_IMGUIModule::UnityEngine::GUILayoutOption*>* options);
		static UnityEngine_CoreModule::UnityEngine::Rect DoGetRect(UnityEngine_IMGUIModule::UnityEngine::GUIContent* content, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* style, IL2CPP::Array<UnityEngine_IMGUIModule::UnityEngine::GUILayoutOption*>* options);
		static UnityEngine_CoreModule::UnityEngine::Rect GetRect(float width, float height, IL2CPP::Array<UnityEngine_IMGUIModule::UnityEngine::GUILayoutOption*>* options);
		static UnityEngine_CoreModule::UnityEngine::Rect GetRect(float width, float height, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* style, IL2CPP::Array<UnityEngine_IMGUIModule::UnityEngine::GUILayoutOption*>* options);
		static UnityEngine_CoreModule::UnityEngine::Rect DoGetRect(float minWidth, float maxWidth, float minHeight, float maxHeight, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* style, IL2CPP::Array<UnityEngine_IMGUIModule::UnityEngine::GUILayoutOption*>* options);
		static UnityEngine_CoreModule::UnityEngine::Rect GetLastRect();
		static UnityEngine_CoreModule::UnityEngine::Rect GetAspectRect(float aspect);
		static UnityEngine_CoreModule::UnityEngine::Rect DoGetAspectRect(float aspect, IL2CPP::Array<UnityEngine_IMGUIModule::UnityEngine::GUILayoutOption*>* options);
		static UnityEngine_IMGUIModule::UnityEngine::GUIStyle* get_spaceStyle();
		static void _cctor();
		static void Internal_GetWindowRect_Injected(int32_t windowID, UnityEngine_CoreModule::UnityEngine::Rect& ret);
		static void Internal_MoveWindow_Injected(int32_t windowID, UnityEngine_CoreModule::UnityEngine::Rect& r);
	};
}

