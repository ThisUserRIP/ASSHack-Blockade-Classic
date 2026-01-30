#pragma once
namespace Assembly_CSharp::I2::Loc
{
	enum struct eSpreadsheetUpdateMode : int32_t
	{
		None = static_cast<int32_t>(0x0),
		Replace = static_cast<int32_t>(0x1),
		Merge = static_cast<int32_t>(0x2),
		AddNewTerms = static_cast<int32_t>(0x3),
	};
}

