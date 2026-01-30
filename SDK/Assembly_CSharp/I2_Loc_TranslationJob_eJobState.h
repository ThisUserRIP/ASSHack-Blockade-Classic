#pragma once
namespace Assembly_CSharp::I2::Loc
{
	enum struct TranslationJob_eJobState : int32_t
	{
		Running = static_cast<int32_t>(0x0),
		Succeeded = static_cast<int32_t>(0x1),
		Failed = static_cast<int32_t>(0x2),
	};
}

