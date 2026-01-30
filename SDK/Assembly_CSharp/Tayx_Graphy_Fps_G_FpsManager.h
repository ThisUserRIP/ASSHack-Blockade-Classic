#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace UnityEngine_UI::UnityEngine::UI { struct Image; };
namespace Assembly_CSharp::Tayx::Graphy { struct GraphyManager; };
namespace Assembly_CSharp::Tayx::Graphy::Fps { struct G_FpsGraph; };
namespace Assembly_CSharp::Tayx::Graphy::Fps { struct G_FpsMonitor; };
namespace Assembly_CSharp::Tayx::Graphy::Fps { struct G_FpsText; };
namespace UnityEngine_CoreModule::UnityEngine { struct RectTransform; };
#include "Tayx_Graphy_GraphyManager_ModuleState.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "Tayx_Graphy_GraphyManager_ModulePosition.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace Assembly_CSharp::Tayx::Graphy::Fps
{
	struct G_FpsManager : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::GameObject* m_fpsGraphGameObject;
		mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::GameObject>* m_nonBasicTextGameObjects;
		mscorlib::System::Collections::Generic::List_1<UnityEngine_UI::UnityEngine::UI::Image>* m_backgroundImages;
		Assembly_CSharp::Tayx::Graphy::GraphyManager* m_graphyManager;
		Assembly_CSharp::Tayx::Graphy::Fps::G_FpsGraph* m_fpsGraph;
		Assembly_CSharp::Tayx::Graphy::Fps::G_FpsMonitor* m_fpsMonitor;
		Assembly_CSharp::Tayx::Graphy::Fps::G_FpsText* m_fpsText;
		UnityEngine_CoreModule::UnityEngine::RectTransform* m_rectTransform;
		mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::GameObject>* m_childrenGameObjects;
		Assembly_CSharp::Tayx::Graphy::GraphyManager_ModuleState m_previousModuleState;
		Assembly_CSharp::Tayx::Graphy::GraphyManager_ModuleState m_currentModuleState;
		void Awake();
		void Start();
		void SetPosition(Assembly_CSharp::Tayx::Graphy::GraphyManager_ModulePosition newModulePosition);
		void SetState(Assembly_CSharp::Tayx::Graphy::GraphyManager_ModuleState state, bool silentUpdate);
		void RestorePreviousState();
		void UpdateParameters();
		void RefreshParameters();
		void Init();
		void SetGraphActive(bool active);
		void _ctor();
	};
}

