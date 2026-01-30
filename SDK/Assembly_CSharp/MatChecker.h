#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Renderer; };
namespace UnityEngine_CoreModule::UnityEngine { struct Material; };
namespace UnityEngine_CoreModule::UnityEngine { struct Shader; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp
{
	struct MatChecker : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Renderer* myRenderer;
		UnityEngine_CoreModule::UnityEngine::Material* myMat;
		UnityEngine_CoreModule::UnityEngine::Shader* myShader;
		void Start();
		void FixedUpdate();
		void _ctor();
	};
}

