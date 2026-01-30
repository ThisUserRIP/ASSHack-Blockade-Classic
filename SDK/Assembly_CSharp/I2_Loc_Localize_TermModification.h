#pragma once
namespace Assembly_CSharp::I2::Loc
{
	enum struct Localize_TermModification : int32_t
	{
		DontModify = static_cast<int32_t>(0x0),
		ToUpper = static_cast<int32_t>(0x1),
		ToLower = static_cast<int32_t>(0x2),
		ToUpperFirst = static_cast<int32_t>(0x3),
		ToTitle = static_cast<int32_t>(0x4),
	};
}

