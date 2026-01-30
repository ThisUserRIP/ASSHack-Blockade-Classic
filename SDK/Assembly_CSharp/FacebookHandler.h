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
namespace Facebook_Unity::Facebook::Unity { struct IShareResult; };
namespace Facebook_Unity::Facebook::Unity { struct IResult; };
namespace Facebook_Unity::Facebook::Unity { struct IGraphResult; };

namespace Assembly_CSharp
{
	struct FacebookHandler : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t a;
		int32_t b;
		int32_t c;
		int32_t d;
		int32_t tmp_t;
		struct StaticFields
		{
			Assembly_CSharp::FacebookHandler* THIS__;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void Awake();
		void SocialWallPost(int32_t _t, int32_t _p);
		void WallPost(mscorlib::System::String* _msg, mscorlib::System::String* _img, int32_t _t);
		void SocialQ1();
		void SocialQ2();
		void SocialQ3();
		void SocialQ4();
		void SocialQ5();
		void OnWallPostCallback(Facebook_Unity::Facebook::Unity::IShareResult* response);
		void OnFriendsInviteCallback(Facebook_Unity::Facebook::Unity::IResult* response);
		void OnRecvUserGroups(Facebook_Unity::Facebook::Unity::IGraphResult* response);
		void _ctor();
	};
}

