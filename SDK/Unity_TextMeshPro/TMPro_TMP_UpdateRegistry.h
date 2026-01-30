#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace UnityEngine_UI::UnityEngine::UI { struct ICanvasElement; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace System_Core::System::Collections::Generic { template <typename T> struct HashSet_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace Unity_TextMeshPro::TMPro
{
	struct TMP_UpdateRegistry : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::Generic::List_1<UnityEngine_UI::UnityEngine::UI::ICanvasElement>* m_LayoutRebuildQueue;
		System_Core::System::Collections::Generic::HashSet_1<mscorlib::System::Int32>* m_LayoutQueueLookup;
		mscorlib::System::Collections::Generic::List_1<UnityEngine_UI::UnityEngine::UI::ICanvasElement>* m_GraphicRebuildQueue;
		System_Core::System::Collections::Generic::HashSet_1<mscorlib::System::Int32>* m_GraphicQueueLookup;
		struct StaticFields
		{
			Unity_TextMeshPro::TMPro::TMP_UpdateRegistry* s_Instance;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static Unity_TextMeshPro::TMPro::TMP_UpdateRegistry* get_instance();
		void _ctor();
		static void RegisterCanvasElementForLayoutRebuild(UnityEngine_UI::UnityEngine::UI::ICanvasElement* element);
		bool InternalRegisterCanvasElementForLayoutRebuild(UnityEngine_UI::UnityEngine::UI::ICanvasElement* element);
		static void RegisterCanvasElementForGraphicRebuild(UnityEngine_UI::UnityEngine::UI::ICanvasElement* element);
		bool InternalRegisterCanvasElementForGraphicRebuild(UnityEngine_UI::UnityEngine::UI::ICanvasElement* element);
		void PerformUpdateForCanvasRendererObjects();
		void PerformUpdateForMeshRendererObjects();
		static void UnRegisterCanvasElementForRebuild(UnityEngine_UI::UnityEngine::UI::ICanvasElement* element);
		void InternalUnRegisterCanvasElementForLayoutRebuild(UnityEngine_UI::UnityEngine::UI::ICanvasElement* element);
		void InternalUnRegisterCanvasElementForGraphicRebuild(UnityEngine_UI::UnityEngine::UI::ICanvasElement* element);
	};
}

