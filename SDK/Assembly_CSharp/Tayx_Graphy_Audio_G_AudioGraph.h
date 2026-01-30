#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Tayx_Graphy_Graph_G_Graph.h"
namespace UnityEngine_UI::UnityEngine::UI { struct Image; };
namespace UnityEngine_CoreModule::UnityEngine { struct Shader; };
namespace Assembly_CSharp::Tayx::Graphy { struct GraphyManager; };
namespace Assembly_CSharp::Tayx::Graphy::Audio { struct G_AudioMonitor; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Assembly_CSharp::Tayx::Graphy { struct G_GraphShader; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::Tayx::Graphy::Audio
{
	struct G_AudioGraph : Assembly_CSharp::Tayx::Graphy::Graph::G_Graph
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_UI::UnityEngine::UI::Image* m_imageGraph;
		UnityEngine_UI::UnityEngine::UI::Image* m_imageGraphHighestValues;
		UnityEngine_CoreModule::UnityEngine::Shader* ShaderFull;
		UnityEngine_CoreModule::UnityEngine::Shader* ShaderLight;
		Assembly_CSharp::Tayx::Graphy::GraphyManager* m_graphyManager;
		Assembly_CSharp::Tayx::Graphy::Audio::G_AudioMonitor* m_audioMonitor;
		int32_t m_resolution;
		Assembly_CSharp::Tayx::Graphy::G_GraphShader* m_shaderGraph;
		Assembly_CSharp::Tayx::Graphy::G_GraphShader* m_shaderGraphHighestValues;
		IL2CPP::Array<float>* m_graphArray;
		IL2CPP::Array<float>* m_graphArrayHighestValue;
		void OnEnable();
		void Update();
		void UpdateParameters();
		void UpdateGraph();
		void CreatePoints();
		void Init();
		void _ctor();
	};
}

