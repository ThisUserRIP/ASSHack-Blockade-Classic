#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace UnityEngine_UI::UnityEngine::UI { struct Text; };
namespace Assembly_CSharp::Tayx::Graphy { struct GraphyManager; };
namespace Assembly_CSharp::Tayx::Graphy::Fps { struct G_FpsMonitor; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::Tayx::Graphy::Fps
{
	struct G_FpsText : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_UI::UnityEngine::UI::Text* m_fpsText;
		UnityEngine_UI::UnityEngine::UI::Text* m_msText;
		UnityEngine_UI::UnityEngine::UI::Text* m_avgFpsText;
		UnityEngine_UI::UnityEngine::UI::Text* m_minFpsText;
		UnityEngine_UI::UnityEngine::UI::Text* m_maxFpsText;
		Assembly_CSharp::Tayx::Graphy::GraphyManager* m_graphyManager;
		Assembly_CSharp::Tayx::Graphy::Fps::G_FpsMonitor* m_fpsMonitor;
		int32_t m_updateRate;
		int32_t m_frameCount;
		float m_deltaTime;
		float m_fps;
		struct StaticFields
		{
			int32_t m_minFps;
			int32_t m_maxFps;
			mscorlib::System::String* m_msStringFormat;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void Awake();
		void Update();
		void UpdateParameters();
		void SetFpsRelatedTextColor(UnityEngine_UI::UnityEngine::UI::Text* text, float fps);
		void Init();
		void _ctor();
	};
}

