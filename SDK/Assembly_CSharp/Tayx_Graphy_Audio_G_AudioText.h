#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace UnityEngine_UI::UnityEngine::UI { struct Text; };
namespace Assembly_CSharp::Tayx::Graphy { struct GraphyManager; };
namespace Assembly_CSharp::Tayx::Graphy::Audio { struct G_AudioMonitor; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::Tayx::Graphy::Audio
{
	struct G_AudioText : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_UI::UnityEngine::UI::Text* m_DBText;
		Assembly_CSharp::Tayx::Graphy::GraphyManager* m_graphyManager;
		Assembly_CSharp::Tayx::Graphy::Audio::G_AudioMonitor* m_audioMonitor;
		int32_t m_updateRate;
		float m_deltaTimeOffset;
		void Awake();
		void Update();
		void UpdateParameters();
		void Init();
		void _ctor();
	};
}

