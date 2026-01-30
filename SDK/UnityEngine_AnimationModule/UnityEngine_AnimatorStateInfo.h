#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };

namespace UnityEngine_AnimationModule::UnityEngine
{
	struct AnimatorStateInfo
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t m_Name;
		int32_t m_Path;
		int32_t m_FullPath;
		float m_NormalizedTime;
		float m_Length;
		float m_Speed;
		float m_SpeedMultiplier;
		int32_t m_Tag;
		int32_t m_Loop;
		int32_t get_fullPathHash();
		float get_normalizedTime();
	};
}

