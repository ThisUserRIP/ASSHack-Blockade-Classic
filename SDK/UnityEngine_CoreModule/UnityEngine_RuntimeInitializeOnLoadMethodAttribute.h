#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_Scripting_PreserveAttribute.h"
#include "UnityEngine_RuntimeInitializeLoadType.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace UnityEngine_CoreModule::UnityEngine
{
	struct RuntimeInitializeOnLoadMethodAttribute : UnityEngine_CoreModule::UnityEngine::Scripting::PreserveAttribute
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::RuntimeInitializeLoadType m_LoadType;
		void _ctor();
		void _ctor(UnityEngine_CoreModule::UnityEngine::RuntimeInitializeLoadType loadType);
		void set_loadType(UnityEngine_CoreModule::UnityEngine::RuntimeInitializeLoadType value);
	};
}

