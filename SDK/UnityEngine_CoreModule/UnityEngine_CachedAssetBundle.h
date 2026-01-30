#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
namespace mscorlib::System { struct String; };
#include "UnityEngine_Hash128.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Hash128; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace UnityEngine_CoreModule::UnityEngine
{
	struct CachedAssetBundle
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* m_Name;
		UnityEngine_CoreModule::UnityEngine::Hash128 m_Hash;
		void _ctor(mscorlib::System::String* name, UnityEngine_CoreModule::UnityEngine::Hash128 hash);
		mscorlib::System::String* get_name();
		UnityEngine_CoreModule::UnityEngine::Hash128 get_hash();
	};
}

