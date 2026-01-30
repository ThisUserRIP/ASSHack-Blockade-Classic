#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "RootMotion_FinalIK_Poser.h"
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct GenericPoser_Map; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
namespace mscorlib::System { struct String; };

namespace Assembly_CSharp_firstpass::RootMotion::FinalIK
{
	struct GenericPoser : Assembly_CSharp_firstpass::RootMotion::FinalIK::Poser
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<Assembly_CSharp_firstpass::RootMotion::FinalIK::GenericPoser_Map*>* maps;
		void AutoMapping();
		void InitiatePoser();
		void UpdatePoser();
		void FixPoserTransforms();
		void StoreDefaultState();
		UnityEngine_CoreModule::UnityEngine::Transform* GetTargetNamed(mscorlib::System::String* tName, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Transform*>* array);
		void _ctor();
	};
}

