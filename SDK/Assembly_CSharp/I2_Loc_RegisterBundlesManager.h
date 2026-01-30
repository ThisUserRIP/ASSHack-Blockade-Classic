#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_CoreModule::UnityEngine { struct Object; };
namespace mscorlib::System { struct String; };

namespace Assembly_CSharp::I2::Loc
{
	struct RegisterBundlesManager : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void OnEnable();
		void OnDisable();
		UnityEngine_CoreModule::UnityEngine::Object* LoadFromBundle(mscorlib::System::String* path, mscorlib::System::Type* assetType);
		void _ctor();
	};
}

