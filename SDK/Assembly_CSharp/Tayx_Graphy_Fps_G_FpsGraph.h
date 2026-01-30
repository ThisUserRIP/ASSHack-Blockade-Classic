#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Tayx_Graphy_Graph_G_Graph.h"
namespace UnityEngine_UI::UnityEngine::UI { struct Image; };
namespace UnityEngine_CoreModule::UnityEngine { struct Shader; };
namespace Assembly_CSharp::Tayx::Graphy { struct GraphyManager; };
namespace Assembly_CSharp::Tayx::Graphy::Fps { struct G_FpsMonitor; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Assembly_CSharp::Tayx::Graphy { struct G_GraphShader; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::Tayx::Graphy::Fps
{
	struct G_FpsGraph : Assembly_CSharp::Tayx::Graphy::Graph::G_Graph
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_UI::UnityEngine::UI::Image* m_imageGraph;
		UnityEngine_CoreModule::UnityEngine::Shader* ShaderFull;
		UnityEngine_CoreModule::UnityEngine::Shader* ShaderLight;
		Assembly_CSharp::Tayx::Graphy::GraphyManager* m_graphyManager;
		Assembly_CSharp::Tayx::Graphy::Fps::G_FpsMonitor* m_fpsMonitor;
		int32_t m_resolution;
		Assembly_CSharp::Tayx::Graphy::G_GraphShader* m_shaderGraph;
		IL2CPP::Array<int32_t>* m_fpsArray;
		int32_t m_highestFps;
		void OnEnable();
		void Update();
		void UpdateParameters();
		void UpdateGraph();
		void CreatePoints();
		void Init();
		void _ctor();
	};
}

