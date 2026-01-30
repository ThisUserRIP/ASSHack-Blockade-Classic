#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector4.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector4; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::Funly::SkyStudio
{
	struct SphereUtility : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			float k_HalfPI;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static UnityEngine_CoreModule::UnityEngine::Vector2 DirectionToSphericalCoordinate(UnityEngine_CoreModule::UnityEngine::Vector3 direction);
		static UnityEngine_CoreModule::UnityEngine::Vector3 SphericalCoordinateToDirection(UnityEngine_CoreModule::UnityEngine::Vector2 coord);
		static float RadiusAtHeight(float yPos);
		static UnityEngine_CoreModule::UnityEngine::Vector3 SphericalToPoint(float yPosition, float radAngle);
		static float RadAngleToPercent(float radAngle);
		static float PercentToRadAngle(float percent);
		static float HeightToPercent(float yValue);
		static float PercentToHeight(float hPercent);
		static float AngleToReachTarget(UnityEngine_CoreModule::UnityEngine::Vector2 point, float targetAngle);
		static float Atan2Positive(float y, float x);
		static UnityEngine_CoreModule::UnityEngine::Vector3 RotateAroundXAxis(UnityEngine_CoreModule::UnityEngine::Vector3 point, float angle);
		static UnityEngine_CoreModule::UnityEngine::Vector3 RotateAroundYAxis(UnityEngine_CoreModule::UnityEngine::Vector3 point, float angle);
		static UnityEngine_CoreModule::UnityEngine::Vector3 RotatePoint(UnityEngine_CoreModule::UnityEngine::Vector3 point, float xAxisRotation, float yAxisRotation);
		static UnityEngine_CoreModule::UnityEngine::Vector2 Rotate2d(UnityEngine_CoreModule::UnityEngine::Vector2 pos, float angle);
		static UnityEngine_CoreModule::UnityEngine::Vector2 Matrix2x2Mult(UnityEngine_CoreModule::UnityEngine::Vector4 matrix, UnityEngine_CoreModule::UnityEngine::Vector2 pos);
		static void CalculateStarRotation(UnityEngine_CoreModule::UnityEngine::Vector3 star, float& xRotationAngle, float& yRotationAngle);
		static UnityEngine_CoreModule::UnityEngine::Vector2 ConvertUVToSphericalCoordinate(UnityEngine_CoreModule::UnityEngine::Vector2 uv);
		static UnityEngine_CoreModule::UnityEngine::Vector2 ConvertSphericalCoordateToUV(UnityEngine_CoreModule::UnityEngine::Vector2 sphereCoord);
		void _ctor();
	};
}

