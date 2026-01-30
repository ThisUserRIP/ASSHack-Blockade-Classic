#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace UnityEngine_CoreModule::UnityEngine { struct RectTransform; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace UnityEngine_UI::UnityEngine::UI { template <typename T> struct ObjectPool_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace UnityEngine_CoreModule::UnityEngine { struct Component; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "UnityEngine_UI_CanvasUpdate.h"
namespace UnityEngine_CoreModule::UnityEngine::Events { template <typename T0> struct UnityAction_1; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System { struct String; };

namespace UnityEngine_UI::UnityEngine::UI
{
	struct LayoutRebuilder : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::RectTransform* m_ToRebuild;
		int32_t m_CachedHashFromTransform;
		struct StaticFields
		{
			UnityEngine_UI::UnityEngine::UI::ObjectPool_1<UnityEngine_UI::UnityEngine::UI::LayoutRebuilder>* s_Rebuilders;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void Initialize(UnityEngine_CoreModule::UnityEngine::RectTransform* controller);
		void Clear();
		static void _cctor();
		static void ReapplyDrivenProperties(UnityEngine_CoreModule::UnityEngine::RectTransform* driven);
		UnityEngine_CoreModule::UnityEngine::Transform* get_transform();
		bool IsDestroyed();
		static void StripDisabledBehavioursFromList(mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Component>* components);
		static void ForceRebuildLayoutImmediate(UnityEngine_CoreModule::UnityEngine::RectTransform* layoutRoot);
		void Rebuild(UnityEngine_UI::UnityEngine::UI::CanvasUpdate executing);
		void PerformLayoutControl(UnityEngine_CoreModule::UnityEngine::RectTransform* rect, UnityEngine_CoreModule::UnityEngine::Events::UnityAction_1<UnityEngine_CoreModule::UnityEngine::Component>* action);
		void PerformLayoutCalculation(UnityEngine_CoreModule::UnityEngine::RectTransform* rect, UnityEngine_CoreModule::UnityEngine::Events::UnityAction_1<UnityEngine_CoreModule::UnityEngine::Component>* action);
		static void MarkLayoutForRebuild(UnityEngine_CoreModule::UnityEngine::RectTransform* rect);
		static bool ValidController(UnityEngine_CoreModule::UnityEngine::RectTransform* layoutRoot, mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Component>* comps);
		static void MarkLayoutRootForRebuild(UnityEngine_CoreModule::UnityEngine::RectTransform* controller);
		void LayoutComplete();
		void GraphicUpdateComplete();
		int32_t GetHashCode();
		bool Equals(mscorlib::System::Object* obj);
		mscorlib::System::String* ToString();
		void _ctor();
	};
}

