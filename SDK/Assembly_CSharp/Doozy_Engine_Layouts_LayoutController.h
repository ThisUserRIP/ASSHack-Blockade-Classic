#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace UnityEngine_UI::UnityEngine::UI { struct LayoutGroup; };
namespace UnityEngine_CoreModule::UnityEngine { struct RectTransform; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::Doozy::Engine::Layouts
{
	struct LayoutController : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool NeedsRebuild;
		float m_lastRebuildTime;
		UnityEngine_UI::UnityEngine::UI::LayoutGroup* m_layoutGroup;
		UnityEngine_CoreModule::UnityEngine::RectTransform* m_rectTransform;
		struct StaticFields
		{
			bool DEFAULT_NEEDS_REBUILD;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		UnityEngine_UI::UnityEngine::UI::LayoutGroup* get_Layout();
		void set_Layout(UnityEngine_UI::UnityEngine::UI::LayoutGroup* value);
		UnityEngine_CoreModule::UnityEngine::RectTransform* get_RectTransform();
		void Reset();
		void Awake();
		void Update();
		void DisableLayoutGroup();
		void EnableLayoutGroup();
		void Rebuild(bool forced);
		void UpdateReference();
		void _ctor();
	};
}

