#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::BestHTTP { struct OnRequestFinishedDelegate; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
namespace System::System { struct Uri; };

namespace Assembly_CSharp
{
	struct WEB_HANDLER : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static void START_GAME(Assembly_CSharp::BestHTTP::OnRequestFinishedDelegate* _callback);
		static void AUTH(Assembly_CSharp::BestHTTP::OnRequestFinishedDelegate* _callback);
		static void CHECK_NEW_LVL_BONUS(Assembly_CSharp::BestHTTP::OnRequestFinishedDelegate* _callback);
		static void CHECK_TOURNAMENT_REWARD(Assembly_CSharp::BestHTTP::OnRequestFinishedDelegate* _callback);
		static void CHECK_WALL_POST(mscorlib::System::String* _post_id, Assembly_CSharp::BestHTTP::OnRequestFinishedDelegate* _callback, bool _isDailyPost);
		static void GET_MISSIONS(Assembly_CSharp::BestHTTP::OnRequestFinishedDelegate* _callback);
		static void GET_DAILY_TOURNAMENT_INFO(Assembly_CSharp::BestHTTP::OnRequestFinishedDelegate* _callback);
		static void GET_WEEKLY_TOURNAMENT_INFO(Assembly_CSharp::BestHTTP::OnRequestFinishedDelegate* _callback);
		static void GET_MY_TOURNAMENTS_HISTORY(Assembly_CSharp::BestHTTP::OnRequestFinishedDelegate* _callback);
		static void BUY_SEASON_LVLS(int32_t levels_count, Assembly_CSharp::BestHTTP::OnRequestFinishedDelegate* _callback);
		static void CHECK_SEASON_REWARDS(Assembly_CSharp::BestHTTP::OnRequestFinishedDelegate* _callback);
		static void CHANGE_NICKNAME(mscorlib::System::String* newName, Assembly_CSharp::BestHTTP::OnRequestFinishedDelegate* _callback);
		static void REFRESH_SERVERS_LIST(Assembly_CSharp::BestHTTP::OnRequestFinishedDelegate* _callback);
		static void GET_FAST_SERVER(mscorlib::System::String* filters, Assembly_CSharp::BestHTTP::OnRequestFinishedDelegate* _callback);
		static void GET_USER_ITEMS(Assembly_CSharp::BestHTTP::OnRequestFinishedDelegate* _callback);
		static void CHECK_BONUSES(Assembly_CSharp::BestHTTP::OnRequestFinishedDelegate* _callback);
		static void GET_MY_LVL_BONUS(Assembly_CSharp::BestHTTP::OnRequestFinishedDelegate* _callback);
		static void BUY_ITEM(int32_t ITEM_ID, Assembly_CSharp::BestHTTP::OnRequestFinishedDelegate* _callback);
		static void RELOAD_INVENTORY(Assembly_CSharp::BestHTTP::OnRequestFinishedDelegate* _callback);
		static void SET_SKIN(int32_t SKIN_ID, Assembly_CSharp::BestHTTP::OnRequestFinishedDelegate* _callback);
		static void CHECK_USER_TICKET(Assembly_CSharp::BestHTTP::OnRequestFinishedDelegate* _callback);
		static void STEAM_BUY_ITEM(uint64_t ITEM_ID, int32_t REQ, Assembly_CSharp::BestHTTP::OnRequestFinishedDelegate* _callback);
		static void MY_BUY_ITEM(uint64_t ITEM_ID, int32_t REQ, Assembly_CSharp::BestHTTP::OnRequestFinishedDelegate* _callback);
		static void GET_PURCHASE_HISTORY(bool INCLUDE_CANCELED, Assembly_CSharp::BestHTTP::OnRequestFinishedDelegate* _callback);
		static void GET_STATISTIC_TOP(int32_t page, mscorlib::System::String* search, int32_t mode, Assembly_CSharp::BestHTTP::OnRequestFinishedDelegate* _callback);
		static void GET_ANGAR_GAMESCORE(int32_t gameId, int32_t page, Assembly_CSharp::BestHTTP::OnRequestFinishedDelegate* _callback);
		static void SET_ANGAR_GAMESCORE(int32_t gameId, int32_t score, Assembly_CSharp::BestHTTP::OnRequestFinishedDelegate* _callback);
		static void GET_ANGAR_GAMELIVES(int32_t gameId, Assembly_CSharp::BestHTTP::OnRequestFinishedDelegate* _callback);
		static void SET_ANGAR_GAMELIVE(int32_t gameId, int32_t live, Assembly_CSharp::BestHTTP::OnRequestFinishedDelegate* _callback);
		static int32_t CHECK_ERROR(mscorlib::System::String* errMsg);
		static System::System::Uri* URL_BUILDER(int32_t cmd, mscorlib::System::String* paramsLine);
		static mscorlib::System::String* WRITE_STANDART();
		void _ctor();
	};
}

