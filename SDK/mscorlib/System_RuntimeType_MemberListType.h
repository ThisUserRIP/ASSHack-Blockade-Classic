#pragma once
namespace mscorlib::System
{
	enum struct RuntimeType_MemberListType : int32_t
	{
		All = static_cast<int32_t>(0x0),
		CaseSensitive = static_cast<int32_t>(0x1),
		CaseInsensitive = static_cast<int32_t>(0x2),
		HandleToInfo = static_cast<int32_t>(0x3),
	};
}

