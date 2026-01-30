#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace mscorlib::System { struct String; };
namespace UnityEngine_CoreModule::UnityEngine { struct Object; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "UnityEngine_AnimationEventSource.h"
namespace UnityEngine_AnimationModule::UnityEngine { struct AnimationState; };
#include "UnityEngine_AnimatorStateInfo.h"
namespace UnityEngine_AnimationModule::UnityEngine { struct AnimatorStateInfo; };
#include "UnityEngine_AnimatorClipInfo.h"
namespace UnityEngine_AnimationModule::UnityEngine { struct AnimatorClipInfo; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace UnityEngine_AnimationModule::UnityEngine
{
	struct AnimationEvent : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		float m_Time;
		mscorlib::System::String* m_FunctionName;
		mscorlib::System::String* m_StringParameter;
		UnityEngine_CoreModule::UnityEngine::Object* m_ObjectReferenceParameter;
		float m_FloatParameter;
		int32_t m_IntParameter;
		int32_t m_MessageOptions;
		UnityEngine_AnimationModule::UnityEngine::AnimationEventSource m_Source;
		UnityEngine_AnimationModule::UnityEngine::AnimationState* m_StateSender;
		UnityEngine_AnimationModule::UnityEngine::AnimatorStateInfo m_AnimatorStateInfo;
		UnityEngine_AnimationModule::UnityEngine::AnimatorClipInfo m_AnimatorClipInfo;
		void _ctor();
	};
}

