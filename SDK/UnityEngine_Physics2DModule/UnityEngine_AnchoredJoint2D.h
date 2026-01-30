#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_Joint2D.h"

namespace UnityEngine_Physics2DModule::UnityEngine
{
	struct AnchoredJoint2D : UnityEngine_Physics2DModule::UnityEngine::Joint2D
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
	};
}

