#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace UnityEngine_UI::UnityEngine::UI { struct Image; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace UnityEngine_UI::UnityEngine::UI { struct Text; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace Assembly_CSharp::Tayx::Graphy { struct GraphyManager; };
namespace UnityEngine_CoreModule::UnityEngine { struct RectTransform; };
namespace mscorlib::System::Text { struct StringBuilder; };
#include "Tayx_Graphy_GraphyManager_ModuleState.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "Tayx_Graphy_GraphyManager_ModulePosition.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace Assembly_CSharp::Tayx::Graphy::Advanced
{
	struct G_AdvancedData : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::Generic::List_1<UnityEngine_UI::UnityEngine::UI::Image>* m_backgroundImages;
		UnityEngine_UI::UnityEngine::UI::Text* m_graphicsDeviceVersionText;
		UnityEngine_UI::UnityEngine::UI::Text* m_processorTypeText;
		UnityEngine_UI::UnityEngine::UI::Text* m_operatingSystemText;
		UnityEngine_UI::UnityEngine::UI::Text* m_systemMemoryText;
		UnityEngine_UI::UnityEngine::UI::Text* m_graphicsDeviceNameText;
		UnityEngine_UI::UnityEngine::UI::Text* m_graphicsMemorySizeText;
		UnityEngine_UI::UnityEngine::UI::Text* m_screenResolutionText;
		UnityEngine_UI::UnityEngine::UI::Text* m_gameWindowResolutionText;
		float m_updateRate;
		Assembly_CSharp::Tayx::Graphy::GraphyManager* m_graphyManager;
		UnityEngine_CoreModule::UnityEngine::RectTransform* m_rectTransform;
		float m_deltaTime;
		mscorlib::System::Text::StringBuilder* m_sb;
		Assembly_CSharp::Tayx::Graphy::GraphyManager_ModuleState m_previousModuleState;
		Assembly_CSharp::Tayx::Graphy::GraphyManager_ModuleState m_currentModuleState;
		IL2CPP::Array<mscorlib::System::String*>* m_windowStrings;
		void OnEnable();
		void Update();
		void SetPosition(Assembly_CSharp::Tayx::Graphy::GraphyManager_ModulePosition newModulePosition);
		void SetState(Assembly_CSharp::Tayx::Graphy::GraphyManager_ModuleState state, bool silentUpdate);
		void RestorePreviousState();
		void UpdateParameters();
		void RefreshParameters();
		void Init();
		void _ctor();
	};
}

