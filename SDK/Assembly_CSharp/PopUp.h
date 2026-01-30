#pragma once
namespace Assembly_CSharp
{
	enum struct POPUP : int32_t
	{
		EMPTY = static_cast<int32_t>(0x1),
		INFO = static_cast<int32_t>(0x2),
		ERROR_ = static_cast<int32_t>(0x3),
		DAILY = static_cast<int32_t>(0x4),
		WEEKLY = static_cast<int32_t>(0x5),
		NEW_LVL = static_cast<int32_t>(0x6),
		RED_GIFT = static_cast<int32_t>(0x7),
		ORANGE_GIFT = static_cast<int32_t>(0x8),
		HALLOWEEN_GIFT = static_cast<int32_t>(0x9),
		TOURNAMENT_INFO = static_cast<int32_t>(0xA),
		BANNED = static_cast<int32_t>(0xB),
		UPDATES = static_cast<int32_t>(0xC),
		RETURNING = static_cast<int32_t>(0xD),
		WEEKLY_GOLD = static_cast<int32_t>(0xE),
		WEEKLY_SILVER = static_cast<int32_t>(0xF),
		WEEKLY_BRONZE = static_cast<int32_t>(0x10),
		WEEKLY_MASS = static_cast<int32_t>(0x11),
		DAILY_GOLD = static_cast<int32_t>(0x12),
		DAILY_SILVER = static_cast<int32_t>(0x13),
		DAILY_BRONZE = static_cast<int32_t>(0x14),
		DAILY_MASS = static_cast<int32_t>(0x15),
		REGISTERED_ = static_cast<int32_t>(0x16),
		SOCIAL_BONUS = static_cast<int32_t>(0x17),
		NEW_YEAR_GIFT = static_cast<int32_t>(0x18),
		VETERAN_REWARD = static_cast<int32_t>(0x19),
		FEB_23_GIFT = static_cast<int32_t>(0x1A),
		MAR_8_GIFT = static_cast<int32_t>(0x1B),
		APR_27_GIFT = static_cast<int32_t>(0x1C),
		MAY_9_GIFT = static_cast<int32_t>(0x1D),
		SEASON_INFO = static_cast<int32_t>(0x1E),
		SEASON_BUY_SEASON = static_cast<int32_t>(0x1F),
		SEASON_BUY_LEVELS = static_cast<int32_t>(0x20),
		SEASON_REWARD = static_cast<int32_t>(0x21),
		SEASON_NEW_LVL = static_cast<int32_t>(0x22),
		SUMMER_GIFT = static_cast<int32_t>(0x23),
	};
}

