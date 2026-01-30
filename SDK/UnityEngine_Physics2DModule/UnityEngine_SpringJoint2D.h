#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_AnchoredJoint2D.h"

namespace UnityEngine_Physics2DModule::UnityEngine
{
	struct SpringJoint2D : UnityEngine_Physics2DModule::UnityEngine::AnchoredJoint2D
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
	};
}

