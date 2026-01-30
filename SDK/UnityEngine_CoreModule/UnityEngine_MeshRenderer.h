#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_Renderer.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_CoreModule::UnityEngine { struct Mesh; };

namespace UnityEngine_CoreModule::UnityEngine
{
	struct MeshRenderer : UnityEngine_CoreModule::UnityEngine::Renderer
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void DontStripMeshRenderer();
		UnityEngine_CoreModule::UnityEngine::Mesh* get_additionalVertexStreams();
		void set_additionalVertexStreams(UnityEngine_CoreModule::UnityEngine::Mesh* value);
		UnityEngine_CoreModule::UnityEngine::Mesh* get_enlightenVertexStream();
		void set_enlightenVertexStream(UnityEngine_CoreModule::UnityEngine::Mesh* value);
	};
}

