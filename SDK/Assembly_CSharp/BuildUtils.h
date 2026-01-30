#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\UnityEngine_CoreModule\UnityEngine_Color.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color; };
#include "Vector3i.h"
namespace Assembly_CSharp { struct Vector3i; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "CubeFace.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_CoreModule::UnityEngine { struct Mesh; };

namespace Assembly_CSharp
{
	struct BuildUtils : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static UnityEngine_CoreModule::UnityEngine::Color ComputeSmoothLight(Assembly_CSharp::Vector3i a, Assembly_CSharp::Vector3i b, Assembly_CSharp::Vector3i c, Assembly_CSharp::Vector3i d);
		static UnityEngine_CoreModule::UnityEngine::Color GetSmoothVertexLight(Assembly_CSharp::Vector3i pos, UnityEngine_CoreModule::UnityEngine::Vector3 vertex, Assembly_CSharp::CubeFace face);
		static UnityEngine_CoreModule::UnityEngine::Color GetBlockLight(Assembly_CSharp::Vector3i pos);
		static void calculateMeshTangents(UnityEngine_CoreModule::UnityEngine::Mesh* mesh);
		void _ctor();
	};
}

