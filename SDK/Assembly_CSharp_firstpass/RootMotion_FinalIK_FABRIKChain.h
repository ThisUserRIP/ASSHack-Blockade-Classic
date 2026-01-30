#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct FABRIK; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct FABRIKChain; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };

namespace Assembly_CSharp_firstpass::RootMotion::FinalIK
{
	struct FABRIKChain : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp_firstpass::RootMotion::FinalIK::FABRIK* ik;
		float pull;
		float pin;
		IL2CPP::Array<int32_t>* children;
		bool IsValid(mscorlib::System::String& message);
		void Initiate();
		void Stage1(IL2CPP::Array<Assembly_CSharp_firstpass::RootMotion::FinalIK::FABRIKChain*>* chain);
		void Stage2(UnityEngine_CoreModule::UnityEngine::Vector3 rootPosition, IL2CPP::Array<Assembly_CSharp_firstpass::RootMotion::FinalIK::FABRIKChain*>* chain);
		UnityEngine_CoreModule::UnityEngine::Vector3 GetCentroid(IL2CPP::Array<Assembly_CSharp_firstpass::RootMotion::FinalIK::FABRIKChain*>* chain);
		void _ctor();
	};
}

