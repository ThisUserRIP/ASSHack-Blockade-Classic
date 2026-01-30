#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace UnityEngine_CoreModule::UnityEngine { struct MeshFilter; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct String; };
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp
{
	struct GameObjectDeformer : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::MeshFilter* MeshFilter;
		bool Initialized;
		mscorlib::System::String* MeshName;
		mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::GameObject>* objs;
		mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Vector3>* vert;
		void AdjustVertices(UnityEngine_CoreModule::UnityEngine::GameObject* obj);
		void _ctor();
	};
}

