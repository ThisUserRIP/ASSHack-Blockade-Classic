#pragma once
namespace Assembly_CSharp::I2::Loc
{
	enum struct LanguageSourceData_eAllowUnloadLanguages : int32_t
	{
		Never = static_cast<int32_t>(0x0),
		OnlyInDevice = static_cast<int32_t>(0x1),
		EditorAndDevice = static_cast<int32_t>(0x2),
	};
}

