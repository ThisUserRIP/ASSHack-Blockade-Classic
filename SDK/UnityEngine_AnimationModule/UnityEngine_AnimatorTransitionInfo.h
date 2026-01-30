#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };

namespace UnityEngine_AnimationModule::UnityEngine
{
	struct AnimatorTransitionInfo
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t m_FullPath;
		int32_t m_UserName;
		int32_t m_Name;
		bool m_HasFixedDuration;
		float m_Duration;
		float m_NormalizedTime;
		bool m_AnyState;
		int32_t m_TransitionType;
		int32_t get_fullPathHash();
	};
}

