#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace UnityEngine_UI::UnityEngine::UI { struct Text; };
namespace Assembly_CSharp::Tayx::Graphy { struct GraphyManager; };
namespace Assembly_CSharp::Tayx::Graphy::Ram { struct G_RamMonitor; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::Tayx::Graphy::Ram
{
	struct G_RamText : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_UI::UnityEngine::UI::Text* m_allocatedSystemMemorySizeText;
		UnityEngine_UI::UnityEngine::UI::Text* m_reservedSystemMemorySizeText;
		UnityEngine_UI::UnityEngine::UI::Text* m_monoSystemMemorySizeText;
		Assembly_CSharp::Tayx::Graphy::GraphyManager* m_graphyManager;
		Assembly_CSharp::Tayx::Graphy::Ram::G_RamMonitor* m_ramMonitor;
		float m_updateRate;
		float m_deltaTime;
		mscorlib::System::String* m_memoryStringFormat;
		void Awake();
		void Update();
		void UpdateParameters();
		void Init();
		void _ctor();
	};
}

