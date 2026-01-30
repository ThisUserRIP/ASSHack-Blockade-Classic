#pragma once
namespace mscorlib::System::Globalization
{
	enum struct HebrewNumber_HS : int32_t
	{
		_err = static_cast<int32_t>(0xFFFFFFFF),
		Start = static_cast<int32_t>(0x0),
		S400 = static_cast<int32_t>(0x1),
		S400_400 = static_cast<int32_t>(0x2),
		S400_X00 = static_cast<int32_t>(0x3),
		S400_X0 = static_cast<int32_t>(0x4),
		X00_DQ = static_cast<int32_t>(0x5),
		S400_X00_X0 = static_cast<int32_t>(0x6),
		X0_DQ = static_cast<int32_t>(0x7),
		X = static_cast<int32_t>(0x8),
		X0 = static_cast<int32_t>(0x9),
		X00 = static_cast<int32_t>(0xA),
		S400_DQ = static_cast<int32_t>(0xB),
		S400_400_DQ = static_cast<int32_t>(0xC),
		S400_400_100 = static_cast<int32_t>(0xD),
		S9 = static_cast<int32_t>(0xE),
		X00_S9 = static_cast<int32_t>(0xF),
		S9_DQ = static_cast<int32_t>(0x10),
		END = static_cast<int32_t>(0x64),
	};
}

