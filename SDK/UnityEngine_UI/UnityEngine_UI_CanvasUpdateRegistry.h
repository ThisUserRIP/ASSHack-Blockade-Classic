#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct String; };
namespace UnityEngine_UI::UnityEngine::UI { struct ICanvasElement; };
namespace UnityEngine_UI::UnityEngine::UI::Collections { template <typename T> struct IndexedSet_1; };
namespace mscorlib::System { template <typename T> struct Comparison_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };

namespace UnityEngine_UI::UnityEngine::UI
{
	struct CanvasUpdateRegistry : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool m_PerformingLayoutUpdate;
		bool m_PerformingGraphicUpdate;
		IL2CPP::Array<mscorlib::System::String*>* m_CanvasUpdateProfilerStrings;
		UnityEngine_UI::UnityEngine::UI::Collections::IndexedSet_1<UnityEngine_UI::UnityEngine::UI::ICanvasElement>* m_LayoutRebuildQueue;
		UnityEngine_UI::UnityEngine::UI::Collections::IndexedSet_1<UnityEngine_UI::UnityEngine::UI::ICanvasElement>* m_GraphicRebuildQueue;
		struct StaticFields
		{
			UnityEngine_UI::UnityEngine::UI::CanvasUpdateRegistry* s_Instance;
			mscorlib::System::String* m_CullingUpdateProfilerString;
			mscorlib::System::Comparison_1<UnityEngine_UI::UnityEngine::UI::ICanvasElement>* s_SortLayoutFunction;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		static UnityEngine_UI::UnityEngine::UI::CanvasUpdateRegistry* get_instance();
		bool ObjectValidForUpdate(UnityEngine_UI::UnityEngine::UI::ICanvasElement* element);
		void CleanInvalidItems();
		void PerformUpdate();
		static int32_t ParentCount(UnityEngine_CoreModule::UnityEngine::Transform* child);
		static int32_t SortLayoutList(UnityEngine_UI::UnityEngine::UI::ICanvasElement* x, UnityEngine_UI::UnityEngine::UI::ICanvasElement* y);
		static void RegisterCanvasElementForLayoutRebuild(UnityEngine_UI::UnityEngine::UI::ICanvasElement* element);
		static bool TryRegisterCanvasElementForLayoutRebuild(UnityEngine_UI::UnityEngine::UI::ICanvasElement* element);
		bool InternalRegisterCanvasElementForLayoutRebuild(UnityEngine_UI::UnityEngine::UI::ICanvasElement* element);
		static void RegisterCanvasElementForGraphicRebuild(UnityEngine_UI::UnityEngine::UI::ICanvasElement* element);
		static bool TryRegisterCanvasElementForGraphicRebuild(UnityEngine_UI::UnityEngine::UI::ICanvasElement* element);
		bool InternalRegisterCanvasElementForGraphicRebuild(UnityEngine_UI::UnityEngine::UI::ICanvasElement* element);
		static void UnRegisterCanvasElementForRebuild(UnityEngine_UI::UnityEngine::UI::ICanvasElement* element);
		void InternalUnRegisterCanvasElementForLayoutRebuild(UnityEngine_UI::UnityEngine::UI::ICanvasElement* element);
		void InternalUnRegisterCanvasElementForGraphicRebuild(UnityEngine_UI::UnityEngine::UI::ICanvasElement* element);
		static bool IsRebuildingLayout();
		static bool IsRebuildingGraphics();
		static void _cctor();
	};
}

