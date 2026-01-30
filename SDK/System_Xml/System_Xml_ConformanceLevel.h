#pragma once
namespace System_Xml::System::Xml
{
	enum struct ConformanceLevel : int32_t
	{
		Auto = static_cast<int32_t>(0x0),
		Fragment = static_cast<int32_t>(0x1),
		Document = static_cast<int32_t>(0x2),
	};
}

