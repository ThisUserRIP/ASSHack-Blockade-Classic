#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct VRIK; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Collections { struct IEnumerator; };

namespace Assembly_CSharp_firstpass::RootMotion::FinalIK
{
	struct OffsetModifierVRIK : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		float weight;
		Assembly_CSharp_firstpass::RootMotion::FinalIK::VRIK* ik;
		float lastTime;
		float get_deltaTime();
		void OnModifyOffset();
		void Start();
		mscorlib::System::Collections::IEnumerator* Initiate();
		void ModifyOffset();
		void OnDestroy();
		void _ctor();
	};
}

