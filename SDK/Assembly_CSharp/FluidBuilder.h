#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "Vector3i.h"
namespace Assembly_CSharp { struct Vector3i; };
namespace Assembly_CSharp { struct MeshBuilder; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "CubeFace.h"
namespace Assembly_CSharp { struct FluidBlock; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };

namespace Assembly_CSharp
{
	struct FluidBuilder : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static void Build(Assembly_CSharp::Vector3i localPos, Assembly_CSharp::Vector3i worldPos, Assembly_CSharp::MeshBuilder* mesh, bool onlyLight);
		static bool IsFaceVisible(Assembly_CSharp::Vector3i nearPos, Assembly_CSharp::CubeFace face);
		static void BuildFace(Assembly_CSharp::CubeFace face, Assembly_CSharp::FluidBlock* fluid, UnityEngine_CoreModule::UnityEngine::Vector3 localPos, Assembly_CSharp::MeshBuilder* mesh);
		static void BuildFaceLight(Assembly_CSharp::CubeFace face, Assembly_CSharp::Vector3i pos, Assembly_CSharp::MeshBuilder* mesh);
		static Assembly_CSharp::MeshBuilder* Build(Assembly_CSharp::FluidBlock* fluid);
		void _ctor();
	};
}

