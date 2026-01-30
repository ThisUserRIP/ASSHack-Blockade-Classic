#pragma once
namespace Assembly_CSharp
{
	enum struct BlockDirection : uint8_t
	{
		Z_PLUS = static_cast<uint8_t>(0x0),
		X_PLUS = static_cast<uint8_t>(0x1),
		Z_MINUS = static_cast<uint8_t>(0x2),
		X_MINUS = static_cast<uint8_t>(0x3),
	};
}

