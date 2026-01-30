#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace Assembly_CSharp::GAP_ParticleSystemController { struct SerializableMinMaxGradient; };
namespace Assembly_CSharp::GAP_ParticleSystemController { struct SerializableMinMaxCurve; };
namespace Assembly_CSharp::GAP_ParticleSystemController { struct SerializableVector3; };
namespace Assembly_CSharp::GAP_ParticleSystemController { struct SerializableGradient; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::GAP_ParticleSystemController
{
	struct ParticleSystemOriginalSettings : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::GAP_ParticleSystemController::SerializableMinMaxGradient* _startColor;
		Assembly_CSharp::GAP_ParticleSystemController::SerializableMinMaxGradient* _colorOverLifetimeC;
		Assembly_CSharp::GAP_ParticleSystemController::SerializableMinMaxCurve* _startSize;
		Assembly_CSharp::GAP_ParticleSystemController::SerializableMinMaxCurve* _startSizeX;
		Assembly_CSharp::GAP_ParticleSystemController::SerializableMinMaxCurve* _startSizeY;
		Assembly_CSharp::GAP_ParticleSystemController::SerializableMinMaxCurve* _startSizeZ;
		Assembly_CSharp::GAP_ParticleSystemController::SerializableMinMaxCurve* _startSpeed;
		Assembly_CSharp::GAP_ParticleSystemController::SerializableMinMaxCurve* _startDelay;
		Assembly_CSharp::GAP_ParticleSystemController::SerializableMinMaxCurve* _startLifetime;
		Assembly_CSharp::GAP_ParticleSystemController::SerializableMinMaxCurve* _velocityOverLifetimeX;
		Assembly_CSharp::GAP_ParticleSystemController::SerializableMinMaxCurve* _velocityOverLifetimeY;
		Assembly_CSharp::GAP_ParticleSystemController::SerializableMinMaxCurve* _velocityOverLifetimeZ;
		Assembly_CSharp::GAP_ParticleSystemController::SerializableVector3* _localPosition;
		Assembly_CSharp::GAP_ParticleSystemController::SerializableGradient* _trailGradient;
		float _duration;
		float _shapeRadius;
		float _trailWidthMultiplier;
		float _trailTime;
		bool _active;
		bool _loop;
		bool _prewarm;
		void _ctor();
	};
}

