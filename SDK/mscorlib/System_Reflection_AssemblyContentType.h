#pragma once
namespace mscorlib::System::Reflection
{
	enum struct AssemblyContentType : int32_t
	{
		Default = static_cast<int32_t>(0x0),
		WindowsRuntime = static_cast<int32_t>(0x1),
	};
}

