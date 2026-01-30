#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_Renderer.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace UnityEngine_CoreModule::UnityEngine { struct Mesh; };

namespace UnityEngine_ParticleSystemModule::UnityEngine
{
	struct ParticleSystemRenderer : UnityEngine_CoreModule::UnityEngine::Renderer
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t GetMeshes(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Mesh*>* meshes);
	};
}

