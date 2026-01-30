#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "RootMotion_FinalIK_Grounding.h"
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct Grounding; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp_firstpass::RootMotion::FinalIK
{
	struct Grounding_Pelvis : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Vector3 _IKOffset_k__BackingField;
		float _heightOffset_k__BackingField;
		Assembly_CSharp_firstpass::RootMotion::FinalIK::Grounding* grounding;
		UnityEngine_CoreModule::UnityEngine::Vector3 lastRootPosition;
		float damperF;
		bool initiated;
		float lastTime;
		UnityEngine_CoreModule::UnityEngine::Vector3 get_IKOffset();
		void set_IKOffset(UnityEngine_CoreModule::UnityEngine::Vector3 value);
		float get_heightOffset();
		void set_heightOffset(float value);
		void Initiate(Assembly_CSharp_firstpass::RootMotion::FinalIK::Grounding* grounding);
		void Reset();
		void OnEnable();
		void Process(float lowestOffset, float highestOffset, bool isGrounded);
		void _ctor();
	};
}

