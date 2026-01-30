#pragma once
namespace mscorlib::System::Configuration::Assemblies
{
	enum struct AssemblyVersionCompatibility : int32_t
	{
		SameMachine = static_cast<int32_t>(0x1),
		SameProcess = static_cast<int32_t>(0x2),
		SameDomain = static_cast<int32_t>(0x3),
	};
}

