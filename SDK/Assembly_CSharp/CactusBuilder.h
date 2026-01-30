#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "Vector3i.h"
namespace Assembly_CSharp { struct Vector3i; };
namespace Assembly_CSharp { struct MeshBuilder; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "CubeFace.h"
namespace Assembly_CSharp { struct CactusBlock; };

namespace Assembly_CSharp
{
	struct CactusBuilder : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			IL2CPP::Array<IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>*>* vertices;
			IL2CPP::Array<IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>*>* normals;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void Build(Assembly_CSharp::Vector3i localPos, Assembly_CSharp::Vector3i worldPos, Assembly_CSharp::MeshBuilder* mesh, bool onlyLight);
		static bool IsFaceVisible(Assembly_CSharp::CubeFace face, Assembly_CSharp::Vector3i nearPos);
		static void BuildFace(Assembly_CSharp::CubeFace face, Assembly_CSharp::CactusBlock* cactus, UnityEngine_CoreModule::UnityEngine::Vector3 localPos, Assembly_CSharp::MeshBuilder* mesh);
		static void BuildFaceLight(Assembly_CSharp::CubeFace face, Assembly_CSharp::Vector3i pos, Assembly_CSharp::MeshBuilder* mesh);
		static Assembly_CSharp::MeshBuilder* Build(Assembly_CSharp::CactusBlock* cactus);
		void _ctor();
		static void _cctor();
	};
}

