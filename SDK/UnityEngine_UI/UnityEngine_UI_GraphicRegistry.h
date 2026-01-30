#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace UnityEngine_UIModule::UnityEngine { struct Canvas; };
namespace UnityEngine_UI::UnityEngine::UI { struct Graphic; };
namespace UnityEngine_UI::UnityEngine::UI::Collections { template <typename T> struct IndexedSet_1; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IList_1; };

namespace UnityEngine_UI::UnityEngine::UI
{
	struct GraphicRegistry : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::Generic::Dictionary_2<UnityEngine_UIModule::UnityEngine::Canvas, UnityEngine_UI::UnityEngine::UI::Collections::IndexedSet_1<UnityEngine_UI::UnityEngine::UI::Graphic>>* m_Graphics;
		mscorlib::System::Collections::Generic::Dictionary_2<UnityEngine_UIModule::UnityEngine::Canvas, UnityEngine_UI::UnityEngine::UI::Collections::IndexedSet_1<UnityEngine_UI::UnityEngine::UI::Graphic>>* m_RaycastableGraphics;
		struct StaticFields
		{
			UnityEngine_UI::UnityEngine::UI::GraphicRegistry* s_Instance;
			mscorlib::System::Collections::Generic::List_1<UnityEngine_UI::UnityEngine::UI::Graphic>* s_EmptyList;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		static UnityEngine_UI::UnityEngine::UI::GraphicRegistry* get_instance();
		static void RegisterGraphicForCanvas(UnityEngine_UIModule::UnityEngine::Canvas* c, UnityEngine_UI::UnityEngine::UI::Graphic* graphic);
		static void RegisterRaycastGraphicForCanvas(UnityEngine_UIModule::UnityEngine::Canvas* c, UnityEngine_UI::UnityEngine::UI::Graphic* graphic);
		static void UnregisterGraphicForCanvas(UnityEngine_UIModule::UnityEngine::Canvas* c, UnityEngine_UI::UnityEngine::UI::Graphic* graphic);
		static void UnregisterRaycastGraphicForCanvas(UnityEngine_UIModule::UnityEngine::Canvas* c, UnityEngine_UI::UnityEngine::UI::Graphic* graphic);
		static mscorlib::System::Collections::Generic::IList_1<UnityEngine_UI::UnityEngine::UI::Graphic>* GetGraphicsForCanvas(UnityEngine_UIModule::UnityEngine::Canvas* canvas);
		static mscorlib::System::Collections::Generic::IList_1<UnityEngine_UI::UnityEngine::UI::Graphic>* GetRaycastableGraphicsForCanvas(UnityEngine_UIModule::UnityEngine::Canvas* canvas);
		static void _cctor();
	};
}

