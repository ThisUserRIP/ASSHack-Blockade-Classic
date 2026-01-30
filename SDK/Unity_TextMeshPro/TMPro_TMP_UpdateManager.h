#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace System_Core::System::Collections::Generic { template <typename T> struct HashSet_1; };
namespace Unity_TextMeshPro::TMPro { struct TMP_Text; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\UnityEngine_CoreModule\Unity_Profiling_ProfilerMarker.h"
namespace UnityEngine_CoreModule::Unity::Profiling { struct ProfilerMarker; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Unity_TextMeshPro::TMPro
{
	struct TMP_UpdateManager : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System_Core::System::Collections::Generic::HashSet_1<mscorlib::System::Int32>* m_LayoutQueueLookup;
		mscorlib::System::Collections::Generic::List_1<Unity_TextMeshPro::TMPro::TMP_Text>* m_LayoutRebuildQueue;
		System_Core::System::Collections::Generic::HashSet_1<mscorlib::System::Int32>* m_GraphicQueueLookup;
		mscorlib::System::Collections::Generic::List_1<Unity_TextMeshPro::TMPro::TMP_Text>* m_GraphicRebuildQueue;
		System_Core::System::Collections::Generic::HashSet_1<mscorlib::System::Int32>* m_InternalUpdateLookup;
		mscorlib::System::Collections::Generic::List_1<Unity_TextMeshPro::TMPro::TMP_Text>* m_InternalUpdateQueue;
		System_Core::System::Collections::Generic::HashSet_1<mscorlib::System::Int32>* m_CullingUpdateLookup;
		mscorlib::System::Collections::Generic::List_1<Unity_TextMeshPro::TMPro::TMP_Text>* m_CullingUpdateQueue;
		struct StaticFields
		{
			Unity_TextMeshPro::TMPro::TMP_UpdateManager* s_Instance;
			UnityEngine_CoreModule::Unity::Profiling::ProfilerMarker k_RegisterTextObjectForUpdateMarker;
			UnityEngine_CoreModule::Unity::Profiling::ProfilerMarker k_RegisterTextElementForGraphicRebuildMarker;
			UnityEngine_CoreModule::Unity::Profiling::ProfilerMarker k_RegisterTextElementForCullingUpdateMarker;
			UnityEngine_CoreModule::Unity::Profiling::ProfilerMarker k_UnregisterTextObjectForUpdateMarker;
			UnityEngine_CoreModule::Unity::Profiling::ProfilerMarker k_UnregisterTextElementForGraphicRebuildMarker;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static Unity_TextMeshPro::TMPro::TMP_UpdateManager* get_instance();
		void _ctor();
		static void RegisterTextObjectForUpdate(Unity_TextMeshPro::TMPro::TMP_Text* textObject);
		void InternalRegisterTextObjectForUpdate(Unity_TextMeshPro::TMPro::TMP_Text* textObject);
		static void RegisterTextElementForLayoutRebuild(Unity_TextMeshPro::TMPro::TMP_Text* element);
		void InternalRegisterTextElementForLayoutRebuild(Unity_TextMeshPro::TMPro::TMP_Text* element);
		static void RegisterTextElementForGraphicRebuild(Unity_TextMeshPro::TMPro::TMP_Text* element);
		void InternalRegisterTextElementForGraphicRebuild(Unity_TextMeshPro::TMPro::TMP_Text* element);
		static void RegisterTextElementForCullingUpdate(Unity_TextMeshPro::TMPro::TMP_Text* element);
		void InternalRegisterTextElementForCullingUpdate(Unity_TextMeshPro::TMPro::TMP_Text* element);
		void OnCameraPreCull();
		void DoRebuilds();
		static void UnRegisterTextObjectForUpdate(Unity_TextMeshPro::TMPro::TMP_Text* textObject);
		static void UnRegisterTextElementForRebuild(Unity_TextMeshPro::TMPro::TMP_Text* element);
		void InternalUnRegisterTextElementForGraphicRebuild(Unity_TextMeshPro::TMPro::TMP_Text* element);
		void InternalUnRegisterTextElementForLayoutRebuild(Unity_TextMeshPro::TMPro::TMP_Text* element);
		void InternalUnRegisterTextObjectForUpdate(Unity_TextMeshPro::TMPro::TMP_Text* textObject);
		static void _cctor();
	};
}

