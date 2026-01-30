#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "DigitalRuby_ThunderAndLightning_LightningBoltPathScriptBase.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::DigitalRuby::ThunderAndLightning { struct LightningBoltParameters; };
namespace UnityEngine_CoreModule::UnityEngine { struct Camera; };

namespace Assembly_CSharp::DigitalRuby::ThunderAndLightning
{
	struct LightningSplineScript : Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltPathScriptBase
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		float DistancePerSegmentHint;
		mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Vector3>* prevSourcePoints;
		mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Vector3>* sourcePoints;
		mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Vector3>* savedSplinePoints;
		int32_t previousGenerations;
		float previousDistancePerSegment;
		struct StaticFields
		{
			int32_t MaxSplineGenerations;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		bool SourceChanged();
		void Start();
		void Update();
		void CreateLightningBolt(Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltParameters* parameters);
		Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltParameters* OnCreateParameters();
		void Trigger(mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Vector3>* points, bool spline);
		static void PopulateSpline(mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Vector3>* splinePoints, mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Vector3>* sourcePoints, int32_t generations, float distancePerSegmentHit, UnityEngine_CoreModule::UnityEngine::Camera* camera);
		void _ctor();
	};
}

