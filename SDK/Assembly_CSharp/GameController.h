#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "GS.h"
namespace Rewired_Core::Rewired { struct Player; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Collections { struct IEnumerator; };
namespace Facebook_Unity::Facebook::Unity { struct IResult; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Assembly_CSharp::BestHTTP { struct HTTPRequest; };
namespace Assembly_CSharp::BestHTTP { struct HTTPResponse; };

namespace Assembly_CSharp
{
	struct GameController : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		float lastPone;
		struct StaticFields
		{
			Assembly_CSharp::GS STATE;
			Assembly_CSharp::GameController* THIS__;
			Rewired_Core::Rewired::Player* InputPlayer;
			bool isSpectator;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void Awake();
		void UpdateGameVersion();
		void Init();
		void Update();
		void BroadcastAll(mscorlib::System::String* fun, mscorlib::System::Object* msg);
		void myGlobalInit();
		mscorlib::System::Collections::IEnumerator* OpenHelp();
		void PreAuth();
		void OnInitComplete();
		void CallFBLogin();
		void CallFBLoginForPublish();
		void FBLoginCallback(Facebook_Unity::Facebook::Unity::IResult* result);
		void LogInWithPublishPermissionsCallback(Facebook_Unity::Facebook::Unity::IResult* result);
		void OnLoggedIn();
		void jsc_auth_id(mscorlib::System::String* _id);
		void jsc_auth_key(mscorlib::System::String* _key);
		void jsc_upserver_url(mscorlib::System::String* _url);
		void jsc_auth_country(mscorlib::System::String* _country);
		void jsc_network(int32_t _network);
		void jsc_wall_post_id(mscorlib::System::String* _post_id);
		void jsc_check_unban();
		void jsc_daily_wall_post_id(mscorlib::System::String* _post_id);
		void jsc_server_update_timeout(int32_t _timeout);
		void jsc_friends(mscorlib::System::String* _friends);
		void jsc_friends_online(mscorlib::System::String* _friendsOnline);
		void cb_refresh();
		void cb_load_profile();
		void playerRefresh();
		void OnRecvBonuses(Assembly_CSharp::BestHTTP::HTTPRequest* req, Assembly_CSharp::BestHTTP::HTTPResponse* resp);
		void OnRecvGameData(Assembly_CSharp::BestHTTP::HTTPRequest* req, Assembly_CSharp::BestHTTP::HTTPResponse* resp);
		void OnRecvNewLVLBonus(Assembly_CSharp::BestHTTP::HTTPRequest* req, Assembly_CSharp::BestHTTP::HTTPResponse* resp);
		void OnRecvMissions(Assembly_CSharp::BestHTTP::HTTPRequest* req, Assembly_CSharp::BestHTTP::HTTPResponse* resp);
		void OnCheckWallPost(Assembly_CSharp::BestHTTP::HTTPRequest* req, Assembly_CSharp::BestHTTP::HTTPResponse* resp);
		mscorlib::System::Collections::IEnumerator* SoftStart(Assembly_CSharp::BestHTTP::HTTPResponse* response);
		void OnApplicationQuit();
		void OnRecvAuthKey(Assembly_CSharp::BestHTTP::HTTPRequest* req, Assembly_CSharp::BestHTTP::HTTPResponse* resp);
		void SetNewName();
		void _ctor();
		static void _cctor();
	};
}

