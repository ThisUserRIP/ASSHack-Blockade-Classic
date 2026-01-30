#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Assembly_CSharp { struct TournamentInfo; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
namespace Assembly_CSharp { struct TournamentsHistory; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
namespace Assembly_CSharp::BestHTTP { struct HTTPRequest; };
namespace Assembly_CSharp::BestHTTP { struct HTTPResponse; };

namespace Assembly_CSharp
{
	struct TournamentsManager : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool Active;
		int32_t draw_mode;
		IL2CPP::Array<bool>* hovermode;
		int32_t x_pos;
		int32_t y_pos;
		bool loading_data;
		bool waiting_data;
		Assembly_CSharp::TournamentInfo* DailyTournament;
		Assembly_CSharp::TournamentInfo* WeeklyTournament;
		UnityEngine_CoreModule::UnityEngine::Vector2 scrollViewVector;
		UnityEngine_CoreModule::UnityEngine::Vector2 mPos;
		bool historyStatus;
		int32_t daily_1;
		int32_t daily_2;
		int32_t daily_3;
		int32_t daily_4;
		int32_t weekly_1;
		int32_t weekly_2;
		int32_t weekly_3;
		int32_t weekly_4;
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::TournamentsHistory>* MyTournamentsHistory;
		struct StaticFields
		{
			Assembly_CSharp::TournamentsManager* THIS__;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void Awake();
		void myGlobalInit();
		void onActive();
		void Update();
		void OnGUI();
		void DoWindow(int32_t windowID);
		void DrawMode(mscorlib::System::String* name, int32_t x, int32_t y, int32_t id);
		void DrawMode0();
		void DrawMode1();
		void DrawMode2();
		void DrawMembers(int32_t x, int32_t y, int32_t ttype);
		void DrawHistory(int32_t x, int32_t y);
		void OnRecvTournamentsRewards(Assembly_CSharp::BestHTTP::HTTPRequest* req, Assembly_CSharp::BestHTTP::HTTPResponse* resp);
		void OnRecvDailyTournamentInfo(Assembly_CSharp::BestHTTP::HTTPRequest* req, Assembly_CSharp::BestHTTP::HTTPResponse* resp);
		void OnRecvWeeklyTournamentInfo(Assembly_CSharp::BestHTTP::HTTPRequest* req, Assembly_CSharp::BestHTTP::HTTPResponse* resp);
		void OnBuyDailyPass(Assembly_CSharp::BestHTTP::HTTPRequest* req, Assembly_CSharp::BestHTTP::HTTPResponse* resp);
		void OnBuyWeeklyPass(Assembly_CSharp::BestHTTP::HTTPRequest* req, Assembly_CSharp::BestHTTP::HTTPResponse* resp);
		void OnRecvTournamentsHistory(Assembly_CSharp::BestHTTP::HTTPRequest* req, Assembly_CSharp::BestHTTP::HTTPResponse* resp);
		void _ctor();
	};
}

