#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "DigitalRuby_ThunderAndLightning_LightningBoltPrefabScriptBase.h"
namespace UnityEngine_CoreModule::UnityEngine { struct MeshFilter; };
namespace UnityEngine_PhysicsModule::UnityEngine { struct Collider; };
#include "DigitalRuby_ThunderAndLightning_RangeOfFloats.h"
namespace Assembly_CSharp::DigitalRuby::ThunderAndLightning { struct RangeOfFloats; };
#include "DigitalRuby_ThunderAndLightning_RangeOfIntegers.h"
namespace Assembly_CSharp::DigitalRuby::ThunderAndLightning { struct RangeOfIntegers; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace UnityEngine_CoreModule::UnityEngine { struct Mesh; };
namespace Assembly_CSharp::DigitalRuby::ThunderAndLightning { struct MeshHelper; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::DigitalRuby::ThunderAndLightning { struct LightningBoltParameters; };

namespace Assembly_CSharp::DigitalRuby::ThunderAndLightning
{
	struct LightningMeshSurfaceScript : Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltPrefabScriptBase
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::MeshFilter* MeshFilter;
		UnityEngine_PhysicsModule::UnityEngine::Collider* MeshCollider;
		Assembly_CSharp::DigitalRuby::ThunderAndLightning::RangeOfFloats MeshOffsetRange;
		Assembly_CSharp::DigitalRuby::ThunderAndLightning::RangeOfIntegers PathLengthCount;
		Assembly_CSharp::DigitalRuby::ThunderAndLightning::RangeOfFloats MinimumPathDistanceRange;
		float MaximumPathDistance;
		float maximumPathDistanceSquared;
		bool Spline;
		float DistancePerSegmentHint;
		mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Vector3>* sourcePoints;
		UnityEngine_CoreModule::UnityEngine::Mesh* previousMesh;
		Assembly_CSharp::DigitalRuby::ThunderAndLightning::MeshHelper* meshHelper;
		void CheckMesh();
		Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltParameters* OnCreateParameters();
		void PopulateSourcePoints(mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Vector3>* points);
		void CreateRandomLightningPath(mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Vector3>* points);
		void Start();
		void Update();
		void CreateLightningBolt(Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltParameters* parameters);
		void _ctor();
	};
}

