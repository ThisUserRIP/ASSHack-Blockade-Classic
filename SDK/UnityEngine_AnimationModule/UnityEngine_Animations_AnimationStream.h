#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace UnityEngine_AnimationModule::UnityEngine::Animations
{
	struct AnimationStream
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		uint32_t m_AnimatorBindingsVersion;
		intptr_t constant;
		intptr_t input;
		intptr_t output;
		intptr_t workspace;
		intptr_t inputStreamAccessor;
		intptr_t animationHandleBinder;
		uint32_t get_animatorBindingsVersion();
		bool get_isValid();
		void CheckIsValid();
	};
}

