#pragma once
namespace Assembly_CSharp::LitJson
{
	enum struct ParserToken : int32_t
	{
		None = static_cast<int32_t>(0x10000),
		Number = static_cast<int32_t>(0x10001),
		True = static_cast<int32_t>(0x10002),
		False = static_cast<int32_t>(0x10003),
		Null = static_cast<int32_t>(0x10004),
		CharSeq = static_cast<int32_t>(0x10005),
		Char = static_cast<int32_t>(0x10006),
		Text = static_cast<int32_t>(0x10007),
		Object = static_cast<int32_t>(0x10008),
		ObjectPrime = static_cast<int32_t>(0x10009),
		Pair = static_cast<int32_t>(0x1000A),
		PairRest = static_cast<int32_t>(0x1000B),
		Array = static_cast<int32_t>(0x1000C),
		ArrayPrime = static_cast<int32_t>(0x1000D),
		Value = static_cast<int32_t>(0x1000E),
		ValueRest = static_cast<int32_t>(0x1000F),
		String = static_cast<int32_t>(0x10010),
		End = static_cast<int32_t>(0x10011),
		Epsilon = static_cast<int32_t>(0x10012),
	};
}

