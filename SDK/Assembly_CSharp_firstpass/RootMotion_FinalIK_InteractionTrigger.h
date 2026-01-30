#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct InteractionTrigger_Range; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
#include "..\UnityEngine_PhysicsModule\UnityEngine_RaycastHit.h"
namespace UnityEngine_PhysicsModule::UnityEngine { struct RaycastHit; };

namespace Assembly_CSharp_firstpass::RootMotion::FinalIK
{
	struct InteractionTrigger : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<Assembly_CSharp_firstpass::RootMotion::FinalIK::InteractionTrigger_Range*>* ranges;
		void OpenTutorial4();
		void SupportGroup();
		void ASThread();
		void Start();
		int32_t GetBestRangeIndex(UnityEngine_CoreModule::UnityEngine::Transform* character, UnityEngine_CoreModule::UnityEngine::Transform* raycastFrom, UnityEngine_PhysicsModule::UnityEngine::RaycastHit raycastHit);
		void _ctor();
	};
}

