#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace Assembly_CSharp::GAP_ParticleSystemController { struct SerializableKeyFrames; };
namespace Assembly_CSharp::GAP_ParticleSystemController { struct SerializableWrapMode; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_CoreModule::UnityEngine { struct AnimationCurve; };

namespace Assembly_CSharp::GAP_ParticleSystemController
{
	struct SerializableAnimationCurve : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<Assembly_CSharp::GAP_ParticleSystemController::SerializableKeyFrames*>* keys;
		Assembly_CSharp::GAP_ParticleSystemController::SerializableWrapMode* postWrapMode;
		Assembly_CSharp::GAP_ParticleSystemController::SerializableWrapMode* preWrapMode;
		void _ctor(UnityEngine_CoreModule::UnityEngine::AnimationCurve* animCurve);
		UnityEngine_CoreModule::UnityEngine::AnimationCurve* GetAnimationCurve();
	};
}

