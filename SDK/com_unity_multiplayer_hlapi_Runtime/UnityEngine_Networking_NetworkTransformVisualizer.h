#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_Networking_NetworkBehaviour.h"
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct NetworkTransform; };
namespace UnityEngine_CoreModule::UnityEngine { struct Material; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking
{
	struct NetworkTransformVisualizer : com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::GameObject* m_VisualizerPrefab;
		com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkTransform* m_NetworkTransform;
		UnityEngine_CoreModule::UnityEngine::GameObject* m_Visualizer;
		struct StaticFields
		{
			UnityEngine_CoreModule::UnityEngine::Material* s_LineMaterial;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		UnityEngine_CoreModule::UnityEngine::GameObject* get_visualizerPrefab();
		void set_visualizerPrefab(UnityEngine_CoreModule::UnityEngine::GameObject* value);
		void OnStartClient();
		void OnStartLocalPlayer();
		void OnDestroy();
		void FixedUpdate();
		void OnRenderObject();
		void DrawRotationInterpolation();
		static void CreateLineMaterial();
		void _ctor();
	};
}

