#pragma once
namespace Assembly_CSharp
{
	enum struct WEB_CMD : int32_t
	{
		GET_GAME_INFO = static_cast<int32_t>(0x32),
		AUTH = static_cast<int32_t>(0x1),
		GET_USER_ITEMS = static_cast<int32_t>(0x2),
		GET_SERVERS_LIST = static_cast<int32_t>(0x4),
		GET_FAST_SERVER = static_cast<int32_t>(0x5),
		SET_SKIN = static_cast<int32_t>(0x3C),
		CHANGE_NICKNAME = static_cast<int32_t>(0x7),
		RELOAD_INVENTORY = static_cast<int32_t>(0x42),
		GET_DAILY_BONUS = static_cast<int32_t>(0xA),
		GET_LVL_BONUS = static_cast<int32_t>(0xB),
		CHECK_STEAM_AUTH_TICKET = static_cast<int32_t>(0x33),
		STEAM_BUY_ITEM = static_cast<int32_t>(0x34),
		GET_PURCHASE_HISTORY = static_cast<int32_t>(0x35),
		GET_DAILY_TOURNAMENT_INFO = static_cast<int32_t>(0x36),
		GET_WEEKLY_TOURNAMENT_INFO = static_cast<int32_t>(0x37),
		CHECK_TOURNAMENTS_REWARDS = static_cast<int32_t>(0x38),
		GET_MY_TOURNAMENTS_HISTORY = static_cast<int32_t>(0x39),
		CHECK_NEW_LVL_BONUS = static_cast<int32_t>(0x3A),
		BUY_ITEM = static_cast<int32_t>(0x3B),
		CHECK_WALL_POST = static_cast<int32_t>(0x3D),
		CHECK_BONUSES = static_cast<int32_t>(0x3E),
		GET_MISSIONS = static_cast<int32_t>(0x3F),
		CHECK_SEASON_REWARDS = static_cast<int32_t>(0x40),
		BUY_SEASON_LVLS = static_cast<int32_t>(0x41),
		MY_BUY_ITEM = static_cast<int32_t>(0x43),
	};
}

