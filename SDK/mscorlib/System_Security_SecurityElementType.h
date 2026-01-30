#pragma once
namespace mscorlib::System::Security
{
	enum struct SecurityElementType : int32_t
	{
		Regular = static_cast<int32_t>(0x0),
		Format = static_cast<int32_t>(0x1),
		Comment = static_cast<int32_t>(0x2),
	};
}

