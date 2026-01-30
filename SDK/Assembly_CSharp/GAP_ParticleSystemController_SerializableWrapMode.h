#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\UnityEngine_CoreModule\UnityEngine_WrapMode.h"

namespace Assembly_CSharp::GAP_ParticleSystemController
{
	struct SerializableWrapMode : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* mode;
		void _ctor(UnityEngine_CoreModule::UnityEngine::WrapMode wrapMode);
		UnityEngine_CoreModule::UnityEngine::WrapMode GetWrapMode();
	};
}

