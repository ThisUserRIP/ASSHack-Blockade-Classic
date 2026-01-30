#pragma once
namespace Assembly_CSharp::I2::Loc
{
	enum struct LanguageSourceData_MissingTranslationAction : int32_t
	{
		Empty = static_cast<int32_t>(0x0),
		Fallback = static_cast<int32_t>(0x1),
		ShowWarning = static_cast<int32_t>(0x2),
		ShowTerm = static_cast<int32_t>(0x3),
	};
}

