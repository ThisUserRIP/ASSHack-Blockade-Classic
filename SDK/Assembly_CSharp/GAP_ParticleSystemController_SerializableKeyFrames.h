#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\UnityEngine_CoreModule\UnityEngine_Keyframe.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Keyframe; };

namespace Assembly_CSharp::GAP_ParticleSystemController
{
	struct SerializableKeyFrames : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		float inTangent;
		float outTangent;
		int32_t tangentMode;
		float time;
		float value;
		void _ctor(UnityEngine_CoreModule::UnityEngine::Keyframe keyFrame);
		UnityEngine_CoreModule::UnityEngine::Keyframe GetKeyFrames();
	};
}

