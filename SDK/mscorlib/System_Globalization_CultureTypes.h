#pragma once
namespace mscorlib::System::Globalization
{
	enum struct CultureTypes : int32_t
	{
		NeutralCultures = static_cast<int32_t>(0x1),
		SpecificCultures = static_cast<int32_t>(0x2),
		InstalledWin32Cultures = static_cast<int32_t>(0x4),
		AllCultures = static_cast<int32_t>(0x7),
		UserCustomCulture = static_cast<int32_t>(0x8),
		ReplacementCultures = static_cast<int32_t>(0x10),
		WindowsOnlyCultures = static_cast<int32_t>(0x20),
		FrameworkCultures = static_cast<int32_t>(0x40),
	};
}

