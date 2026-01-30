#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Mesh; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_PhysicsModule::UnityEngine { struct RaycastHit; };
namespace UnityEngine_PhysicsModule::UnityEngine { struct RaycastHit; };

namespace Assembly_CSharp::DigitalRuby::ThunderAndLightning
{
	struct MeshHelper : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Mesh* mesh;
		IL2CPP::Array<int32_t>* triangles;
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>* vertices;
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>* normals;
		IL2CPP::Array<float>* normalizedAreaWeights;
		void _ctor(UnityEngine_CoreModule::UnityEngine::Mesh* mesh);
		void GenerateRandomPoint(UnityEngine_PhysicsModule::UnityEngine::RaycastHit& hit, int32_t& triangleIndex);
		void GetRaycastFromTriangleIndex(int32_t triangleIndex, UnityEngine_PhysicsModule::UnityEngine::RaycastHit& hit);
		UnityEngine_CoreModule::UnityEngine::Mesh* get_Mesh();
		IL2CPP::Array<int32_t>* get_Triangles();
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>* get_Vertices();
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>* get_Normals();
		IL2CPP::Array<float>* CalculateSurfaceAreas(float& totalSurfaceArea);
		void CalculateNormalizedAreaWeights();
		int32_t SelectRandomTriangle();
		UnityEngine_CoreModule::UnityEngine::Vector3 GenerateRandomBarycentricCoordinates();
	};
}

