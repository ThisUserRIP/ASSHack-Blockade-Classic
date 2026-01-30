#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
namespace mscorlib::System { struct String; };
#include "UnityEngine_HumanLimit.h"
namespace UnityEngine_AnimationModule::UnityEngine { struct HumanLimit; };

namespace UnityEngine_AnimationModule::UnityEngine
{
	struct HumanBone
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* m_BoneName;
		mscorlib::System::String* m_HumanName;
		UnityEngine_AnimationModule::UnityEngine::HumanLimit limit;
	};
}

