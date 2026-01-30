#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct Grounding; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct Grounder_GrounderDelegate; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
namespace mscorlib::System { struct String; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct Grounding_Leg; };

namespace Assembly_CSharp_firstpass::RootMotion::FinalIK
{
	struct Grounder : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		float weight;
		Assembly_CSharp_firstpass::RootMotion::FinalIK::Grounding* solver;
		Assembly_CSharp_firstpass::RootMotion::FinalIK::Grounder_GrounderDelegate* OnPreGrounder;
		Assembly_CSharp_firstpass::RootMotion::FinalIK::Grounder_GrounderDelegate* OnPostGrounder;
		bool _initiated_k__BackingField;
		void ResetPosition();
		bool get_initiated();
		void set_initiated(bool value);
		UnityEngine_CoreModule::UnityEngine::Vector3 GetSpineOffsetTarget();
		void LogWarning(mscorlib::System::String* message);
		UnityEngine_CoreModule::UnityEngine::Vector3 GetLegSpineBendVector(Assembly_CSharp_firstpass::RootMotion::FinalIK::Grounding_Leg* leg);
		UnityEngine_CoreModule::UnityEngine::Vector3 GetLegSpineTangent(Assembly_CSharp_firstpass::RootMotion::FinalIK::Grounding_Leg* leg);
		void OpenUserManual();
		void OpenScriptReference();
		void _ctor();
	};
}

