#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
#include "..\mscorlib\System_Double.h"
namespace mscorlib::System { struct Double; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "UnityEngine_Playables_FrameData_Flags.h"
#include "UnityEngine_Playables_PlayableOutput.h"
namespace UnityEngine_CoreModule::UnityEngine::Playables { struct PlayableOutput; };

namespace UnityEngine_CoreModule::UnityEngine::Playables
{
	struct FrameData
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		uint64_t m_FrameID;
		double m_DeltaTime;
		float m_Weight;
		float m_EffectiveWeight;
		double m_EffectiveParentDelay;
		float m_EffectiveParentSpeed;
		float m_EffectiveSpeed;
		UnityEngine_CoreModule::UnityEngine::Playables::FrameData_Flags m_Flags;
		UnityEngine_CoreModule::UnityEngine::Playables::PlayableOutput m_Output;
	};
}

