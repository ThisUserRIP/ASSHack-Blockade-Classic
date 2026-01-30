#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "RootMotion_FinalIK_RotationLimitPolygonal.h"
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct RotationLimitPolygonal; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace Assembly_CSharp_firstpass::RootMotion::FinalIK
{
	struct RotationLimitPolygonal_ReachCone : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>* tetrahedron;
		float volume;
		UnityEngine_CoreModule::UnityEngine::Vector3 S;
		UnityEngine_CoreModule::UnityEngine::Vector3 B;
		UnityEngine_CoreModule::UnityEngine::Vector3 get_o();
		UnityEngine_CoreModule::UnityEngine::Vector3 get_a();
		UnityEngine_CoreModule::UnityEngine::Vector3 get_b();
		UnityEngine_CoreModule::UnityEngine::Vector3 get_c();
		void _ctor(UnityEngine_CoreModule::UnityEngine::Vector3 _o, UnityEngine_CoreModule::UnityEngine::Vector3 _a, UnityEngine_CoreModule::UnityEngine::Vector3 _b, UnityEngine_CoreModule::UnityEngine::Vector3 _c);
		bool get_isValid();
		void Calculate();
	};
}

