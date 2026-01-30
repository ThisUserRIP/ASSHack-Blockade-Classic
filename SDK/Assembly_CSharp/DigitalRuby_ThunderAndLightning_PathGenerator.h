#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_CoreModule::UnityEngine { struct Vector4; };
namespace UnityEngine_CoreModule::UnityEngine { struct Vector4; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace mscorlib::System::Collections::Generic { template <typename T> struct ICollection_1; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IList_1; };

namespace Assembly_CSharp::DigitalRuby::ThunderAndLightning
{
	struct PathGenerator : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			int32_t MinPointsForSpline;
			bool Is2D;
			float curveMultiplier;
			float splineMultiplier1;
			float splineMultiplier2;
			float splineMultiplier3;
			float splineDistanceClamp;
			float splineEpsilon;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static float SquareRoot(float x);
		static float Distance2D(UnityEngine_CoreModule::UnityEngine::Vector3& point1, UnityEngine_CoreModule::UnityEngine::Vector3& point2);
		static float Distance3D(UnityEngine_CoreModule::UnityEngine::Vector3& point1, UnityEngine_CoreModule::UnityEngine::Vector3& point2);
		static void GetCurvePoint2D(UnityEngine_CoreModule::UnityEngine::Vector3& start, UnityEngine_CoreModule::UnityEngine::Vector3& end, UnityEngine_CoreModule::UnityEngine::Vector3& ctr1, UnityEngine_CoreModule::UnityEngine::Vector3& ctr2, float t, UnityEngine_CoreModule::UnityEngine::Vector3& point);
		static void GetCurvePoint3D(UnityEngine_CoreModule::UnityEngine::Vector3& start, UnityEngine_CoreModule::UnityEngine::Vector3& end, UnityEngine_CoreModule::UnityEngine::Vector3& ctr1, UnityEngine_CoreModule::UnityEngine::Vector3& ctr2, float t, UnityEngine_CoreModule::UnityEngine::Vector3& point);
		static void CalculateNonuniformCatmullRom(float p1, float p2, float p3, float p4, float distance1, float distance2, float distance3, UnityEngine_CoreModule::UnityEngine::Vector4& point);
		static float CalculatePolynomial(UnityEngine_CoreModule::UnityEngine::Vector4& point, float t);
		static void ClampSplineDistances(float& distance1, float& distance2, float& distance3);
		static void GetSplinePoint2D(UnityEngine_CoreModule::UnityEngine::Vector3& point1, UnityEngine_CoreModule::UnityEngine::Vector3& point2, UnityEngine_CoreModule::UnityEngine::Vector3& point3, UnityEngine_CoreModule::UnityEngine::Vector3& point4, float t, UnityEngine_CoreModule::UnityEngine::Vector3& point);
		static void GetSplinePoint3D(UnityEngine_CoreModule::UnityEngine::Vector3& point1, UnityEngine_CoreModule::UnityEngine::Vector3& point2, UnityEngine_CoreModule::UnityEngine::Vector3& point3, UnityEngine_CoreModule::UnityEngine::Vector3& point4, float t, UnityEngine_CoreModule::UnityEngine::Vector3& point);
		static float CreateCurve(mscorlib::System::Collections::Generic::ICollection_1<UnityEngine_CoreModule::UnityEngine::Vector3>* path, UnityEngine_CoreModule::UnityEngine::Vector3 start, UnityEngine_CoreModule::UnityEngine::Vector3 end, UnityEngine_CoreModule::UnityEngine::Vector3 ctr1, UnityEngine_CoreModule::UnityEngine::Vector3 ctr2, int32_t numberOfSegments, float startT);
		static bool CreateSpline(mscorlib::System::Collections::Generic::ICollection_1<UnityEngine_CoreModule::UnityEngine::Vector3>* path, mscorlib::System::Collections::Generic::IList_1<UnityEngine_CoreModule::UnityEngine::Vector3>* points, int32_t numberOfSegments, bool closePath);
		static bool CreateSplineWithSegmentDistance(mscorlib::System::Collections::Generic::ICollection_1<UnityEngine_CoreModule::UnityEngine::Vector3>* path, mscorlib::System::Collections::Generic::IList_1<UnityEngine_CoreModule::UnityEngine::Vector3>* points, float distancePerSegment, bool closePath);
	};
}

