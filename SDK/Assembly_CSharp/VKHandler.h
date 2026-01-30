#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };

namespace Assembly_CSharp
{
	struct VKHandler : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t tmp_t;
		struct StaticFields
		{
			Assembly_CSharp::VKHandler* THIS__;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void Awake();
		void TryLogin();
		void onLoggedIn();
		void CheckToken();
		void SocialWallPost(int32_t _t, int32_t _p);
		void WallPost(mscorlib::System::String* _msg, mscorlib::System::String* _img, int32_t _t);
		void SocialQ1();
		void SocialQ2();
		void SocialQ3();
		void SocialQ4();
		void SocialQ5();
		void _ctor();
	};
}

